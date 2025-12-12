// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCacheNet_noparam.h for the primary calling header

#include "VCacheNet_noparam__pch.h"
#include "VCacheNet_noparam___024root.h"

VL_ATTR_COLD void VCacheNet_noparam___024root___eval_static__TOP(VCacheNet_noparam___024root* vlSelf);

VL_ATTR_COLD void VCacheNet_noparam___024root___eval_static(VCacheNet_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCacheNet_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root___eval_static\n"); );
    // Body
    VCacheNet_noparam___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void VCacheNet_noparam___024root___eval_static__TOP(VCacheNet_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCacheNet_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root___eval_static__TOP\n"); );
    // Init
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__sunit0__DOT__num_reqs;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__sunit0__DOT__num_reqs = 0;
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__sunit1__DOT__num_reqs;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__sunit1__DOT__num_reqs = 0;
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__sunit2__DOT__num_reqs;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__sunit2__DOT__num_reqs = 0;
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__num_reqs;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__num_reqs = 0;
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__num_reqs;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__num_reqs = 0;
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__num_reqs;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__num_reqs = 0;
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__num_reqs;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__num_reqs = 0;
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__num_reqs;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__num_reqs = 0;
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__num_reqs;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__num_reqs = 0;
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__sunit0__DOT__num_reqs;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__sunit0__DOT__num_reqs = 0;
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__sunit1__DOT__num_reqs;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__sunit1__DOT__num_reqs = 0;
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__sunit2__DOT__num_reqs;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__sunit2__DOT__num_reqs = 0;
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__num_reqs;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__num_reqs = 0;
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__num_reqs;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__num_reqs = 0;
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__num_reqs;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__num_reqs = 0;
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__num_reqs;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__num_reqs = 0;
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__num_reqs;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__num_reqs = 0;
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__num_reqs;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__num_reqs = 0;
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__num_reqs;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__num_reqs = 0;
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__num_reqs;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__num_reqs = 0;
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__num_reqs;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__num_reqs = 0;
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__num_reqs;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__num_reqs = 0;
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__num_reqs;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__num_reqs = 0;
    IData/*31:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__num_reqs;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__num_reqs = 0;
    // Body
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__sunit0__DOT__num_reqs = 0U;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__sunit1__DOT__num_reqs = 0U;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__sunit2__DOT__num_reqs = 0U;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__num_reqs = 0U;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__num_reqs = 0U;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__num_reqs = 0U;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__num_reqs = 0U;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__num_reqs = 0U;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__num_reqs = 0U;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__sunit0__DOT__num_reqs = 0U;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__sunit1__DOT__num_reqs = 0U;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__sunit2__DOT__num_reqs = 0U;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__num_reqs = 0U;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__num_reqs = 0U;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__num_reqs = 0U;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__num_reqs = 0U;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__num_reqs = 0U;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__num_reqs = 0U;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__num_reqs = 0U;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__num_reqs = 0U;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__num_reqs = 0U;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__num_reqs = 0U;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__num_reqs = 0U;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__num_reqs = 0U;
}

VL_ATTR_COLD void VCacheNet_noparam___024root___eval_initial(VCacheNet_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCacheNet_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void VCacheNet_noparam___024root___eval_final(VCacheNet_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCacheNet_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCacheNet_noparam___024root___dump_triggers__stl(VCacheNet_noparam___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VCacheNet_noparam___024root___eval_phase__stl(VCacheNet_noparam___024root* vlSelf);

VL_ATTR_COLD void VCacheNet_noparam___024root___eval_settle(VCacheNet_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCacheNet_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root___eval_settle\n"); );
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
            VCacheNet_noparam___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("lab4_sys/CacheNet.v", 227, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VCacheNet_noparam___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCacheNet_noparam___024root___dump_triggers__stl(VCacheNet_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCacheNet_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VCacheNet_noparam___024root___stl_sequent__TOP__0(VCacheNet_noparam___024root* vlSelf);

VL_ATTR_COLD void VCacheNet_noparam___024root___eval_stl(VCacheNet_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCacheNet_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VCacheNet_noparam___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VCacheNet_noparam___024root___stl_sequent__TOP__0(VCacheNet_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCacheNet_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root___stl_sequent__TOP__0\n"); );
    // Init
    VlWide<3>/*77:0*/ CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHEREQ__BRA__0__KET____DOT__netmsg2cachereq__ostream_msg;
    VL_ZERO_W(78, CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHEREQ__BRA__0__KET____DOT__netmsg2cachereq__ostream_msg);
    VlWide<3>/*77:0*/ CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHEREQ__BRA__1__KET____DOT__netmsg2cachereq__ostream_msg;
    VL_ZERO_W(78, CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHEREQ__BRA__1__KET____DOT__netmsg2cachereq__ostream_msg);
    VlWide<3>/*77:0*/ CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHEREQ__BRA__2__KET____DOT__netmsg2cachereq__ostream_msg;
    VL_ZERO_W(78, CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHEREQ__BRA__2__KET____DOT__netmsg2cachereq__ostream_msg);
    VlWide<3>/*77:0*/ CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHEREQ__BRA__3__KET____DOT__netmsg2cachereq__ostream_msg;
    VL_ZERO_W(78, CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHEREQ__BRA__3__KET____DOT__netmsg2cachereq__ostream_msg);
    QData/*47:0*/ CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHERESP__BRA__0__KET____DOT__netmsg2cacheresp__ostream_msg;
    CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHERESP__BRA__0__KET____DOT__netmsg2cacheresp__ostream_msg = 0;
    QData/*47:0*/ CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHERESP__BRA__1__KET____DOT__netmsg2cacheresp__ostream_msg;
    CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHERESP__BRA__1__KET____DOT__netmsg2cacheresp__ostream_msg = 0;
    QData/*47:0*/ CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHERESP__BRA__2__KET____DOT__netmsg2cacheresp__ostream_msg;
    CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHERESP__BRA__2__KET____DOT__netmsg2cacheresp__ostream_msg = 0;
    QData/*47:0*/ CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHERESP__BRA__3__KET____DOT__netmsg2cacheresp__ostream_msg;
    CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHERESP__BRA__3__KET____DOT__netmsg2cacheresp__ostream_msg = 0;
    VlWide<3>/*89:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0_deq_msg;
    VL_ZERO_W(90, CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0_deq_msg);
    VlWide<3>/*89:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1_deq_msg;
    VL_ZERO_W(90, CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1_deq_msg);
    VlWide<3>/*89:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2_deq_msg;
    VL_ZERO_W(90, CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2_deq_msg);
    CData/*0:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    VlWide<3>/*89:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0_deq_msg;
    VL_ZERO_W(90, CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0_deq_msg);
    VlWide<3>/*89:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1_deq_msg;
    VL_ZERO_W(90, CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1_deq_msg);
    VlWide<3>/*89:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2_deq_msg;
    VL_ZERO_W(90, CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2_deq_msg);
    CData/*0:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    VlWide<3>/*89:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0_deq_msg;
    VL_ZERO_W(90, CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0_deq_msg);
    VlWide<3>/*89:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1_deq_msg;
    VL_ZERO_W(90, CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1_deq_msg);
    VlWide<3>/*89:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2_deq_msg;
    VL_ZERO_W(90, CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2_deq_msg);
    CData/*0:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    VlWide<3>/*89:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0_deq_msg;
    VL_ZERO_W(90, CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0_deq_msg);
    VlWide<3>/*89:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1_deq_msg;
    VL_ZERO_W(90, CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1_deq_msg);
    VlWide<3>/*89:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2_deq_msg;
    VL_ZERO_W(90, CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2_deq_msg);
    CData/*0:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    QData/*59:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0_deq_msg;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0_deq_msg = 0;
    QData/*59:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1_deq_msg;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1_deq_msg = 0;
    QData/*59:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2_deq_msg;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2_deq_msg = 0;
    CData/*0:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    QData/*59:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0_deq_msg;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0_deq_msg = 0;
    QData/*59:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1_deq_msg;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1_deq_msg = 0;
    QData/*59:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2_deq_msg;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2_deq_msg = 0;
    CData/*0:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    QData/*59:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0_deq_msg;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0_deq_msg = 0;
    QData/*59:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1_deq_msg;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1_deq_msg = 0;
    QData/*59:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2_deq_msg;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2_deq_msg = 0;
    CData/*0:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    QData/*59:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0_deq_msg;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0_deq_msg = 0;
    QData/*59:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1_deq_msg;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1_deq_msg = 0;
    QData/*59:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2_deq_msg;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2_deq_msg = 0;
    CData/*0:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    // Body
    vlSelf->CacheNet_noparam__DOT____Vcellinp__v__proc2net_reqstream_msg[0U][0U] 
        = vlSelf->proc2net_reqstream_msg[0U][0U];
    vlSelf->CacheNet_noparam__DOT____Vcellinp__v__proc2net_reqstream_msg[0U][1U] 
        = vlSelf->proc2net_reqstream_msg[0U][1U];
    vlSelf->CacheNet_noparam__DOT____Vcellinp__v__proc2net_reqstream_msg[0U][2U] 
        = vlSelf->proc2net_reqstream_msg[0U][2U];
    vlSelf->CacheNet_noparam__DOT____Vcellinp__v__proc2net_reqstream_msg[1U][0U] 
        = vlSelf->proc2net_reqstream_msg[1U][0U];
    vlSelf->CacheNet_noparam__DOT____Vcellinp__v__proc2net_reqstream_msg[1U][1U] 
        = vlSelf->proc2net_reqstream_msg[1U][1U];
    vlSelf->CacheNet_noparam__DOT____Vcellinp__v__proc2net_reqstream_msg[1U][2U] 
        = vlSelf->proc2net_reqstream_msg[1U][2U];
    vlSelf->CacheNet_noparam__DOT____Vcellinp__v__proc2net_reqstream_msg[2U][0U] 
        = vlSelf->proc2net_reqstream_msg[2U][0U];
    vlSelf->CacheNet_noparam__DOT____Vcellinp__v__proc2net_reqstream_msg[2U][1U] 
        = vlSelf->proc2net_reqstream_msg[2U][1U];
    vlSelf->CacheNet_noparam__DOT____Vcellinp__v__proc2net_reqstream_msg[2U][2U] 
        = vlSelf->proc2net_reqstream_msg[2U][2U];
    vlSelf->CacheNet_noparam__DOT____Vcellinp__v__proc2net_reqstream_msg[3U][0U] 
        = vlSelf->proc2net_reqstream_msg[3U][0U];
    vlSelf->CacheNet_noparam__DOT____Vcellinp__v__proc2net_reqstream_msg[3U][1U] 
        = vlSelf->proc2net_reqstream_msg[3U][1U];
    vlSelf->CacheNet_noparam__DOT____Vcellinp__v__proc2net_reqstream_msg[3U][2U] 
        = vlSelf->proc2net_reqstream_msg[3U][2U];
    vlSelf->CacheNet_noparam__DOT____Vcellinp__v__net2cache_respstream_msg[0U] 
        = vlSelf->net2cache_respstream_msg[0U];
    vlSelf->CacheNet_noparam__DOT____Vcellinp__v__net2cache_respstream_msg[1U] 
        = vlSelf->net2cache_respstream_msg[1U];
    vlSelf->CacheNet_noparam__DOT____Vcellinp__v__net2cache_respstream_msg[2U] 
        = vlSelf->net2cache_respstream_msg[2U];
    vlSelf->CacheNet_noparam__DOT____Vcellinp__v__net2cache_respstream_msg[3U] 
        = vlSelf->net2cache_respstream_msg[3U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0_deq_msg[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0_deq_msg[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0_deq_msg[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1_deq_msg[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1_deq_msg[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1_deq_msg[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2_deq_msg[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2_deq_msg[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2_deq_msg[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0_deq_msg[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0_deq_msg[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0_deq_msg[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1_deq_msg[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1_deq_msg[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1_deq_msg[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2_deq_msg[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2_deq_msg[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2_deq_msg[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0_deq_msg[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0_deq_msg[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0_deq_msg[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1_deq_msg[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1_deq_msg[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1_deq_msg[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2_deq_msg[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2_deq_msg[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2_deq_msg[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0_deq_msg[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0_deq_msg[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0_deq_msg[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1_deq_msg[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1_deq_msg[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1_deq_msg[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2_deq_msg[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2_deq_msg[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2_deq_msg[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0_deq_msg 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr];
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1_deq_msg 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr];
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2_deq_msg 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr];
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0_deq_msg 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr];
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1_deq_msg 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr];
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2_deq_msg 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr];
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0_deq_msg 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr];
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1_deq_msg 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr];
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2_deq_msg 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr];
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0_deq_msg 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr];
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1_deq_msg 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr];
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2_deq_msg 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr];
    vlSelf->CacheNet_noparam__DOT____Vcellinp__v__proc2net_reqstream_val[0U] 
        = vlSelf->proc2net_reqstream_val[0U];
    vlSelf->CacheNet_noparam__DOT____Vcellinp__v__proc2net_reqstream_val[1U] 
        = vlSelf->proc2net_reqstream_val[1U];
    vlSelf->CacheNet_noparam__DOT____Vcellinp__v__proc2net_reqstream_val[2U] 
        = vlSelf->proc2net_reqstream_val[2U];
    vlSelf->CacheNet_noparam__DOT____Vcellinp__v__proc2net_reqstream_val[3U] 
        = vlSelf->proc2net_reqstream_val[3U];
    vlSelf->CacheNet_noparam__DOT____Vcellinp__v__net2cache_respstream_val[0U] 
        = vlSelf->net2cache_respstream_val[0U];
    vlSelf->CacheNet_noparam__DOT____Vcellinp__v__net2cache_respstream_val[1U] 
        = vlSelf->net2cache_respstream_val[1U];
    vlSelf->CacheNet_noparam__DOT____Vcellinp__v__net2cache_respstream_val[2U] 
        = vlSelf->net2cache_respstream_val[2U];
    vlSelf->CacheNet_noparam__DOT____Vcellinp__v__net2cache_respstream_val[3U] 
        = vlSelf->net2cache_respstream_val[3U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router0__istream_rdy[0U] 
        = (1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router0__istream_rdy[1U] 
        = (1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router0__istream_rdy[2U] 
        = (1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router1__istream_rdy[0U] 
        = (1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router1__istream_rdy[1U] 
        = (1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router1__istream_rdy[2U] 
        = (1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router2__istream_rdy[0U] 
        = (1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router2__istream_rdy[1U] 
        = (1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router2__istream_rdy[2U] 
        = (1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router3__istream_rdy[0U] 
        = (1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router3__istream_rdy[1U] 
        = (1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router3__istream_rdy[2U] 
        = (1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router0__istream_rdy[0U] 
        = (1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router0__istream_rdy[1U] 
        = (1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router0__istream_rdy[2U] 
        = (1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router1__istream_rdy[0U] 
        = (1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router1__istream_rdy[1U] 
        = (1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router1__istream_rdy[2U] 
        = (1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router2__istream_rdy[0U] 
        = (1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router2__istream_rdy[1U] 
        = (1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router2__istream_rdy[2U] 
        = (1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router3__istream_rdy[0U] 
        = (1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router3__istream_rdy[1U] 
        = (1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router3__istream_rdy[2U] 
        = (1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__runit0__DOT__istream_msg_hdr 
        = (0xfffU & (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U] 
                     >> 0xeU));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__runit1__DOT__istream_msg_hdr 
        = (0xfffU & (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U] 
                     >> 0xeU));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__runit2__DOT__istream_msg_hdr 
        = (0xfffU & (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U] 
                     >> 0xeU));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__istream_msg_hdr 
        = (0xfffU & (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U] 
                     >> 0xeU));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__istream_msg_hdr 
        = (0xfffU & (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U] 
                     >> 0xeU));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__istream_msg_hdr 
        = (0xfffU & (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U] 
                     >> 0xeU));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__istream_msg_hdr 
        = (0xfffU & (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U] 
                     >> 0xeU));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit1__DOT__istream_msg_hdr 
        = (0xfffU & (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U] 
                     >> 0xeU));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit2__DOT__istream_msg_hdr 
        = (0xfffU & (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U] 
                     >> 0xeU));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__runit0__DOT__istream_msg_hdr 
        = (0xfffU & (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U] 
                     >> 0xeU));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__runit1__DOT__istream_msg_hdr 
        = (0xfffU & (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U] 
                     >> 0xeU));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__runit2__DOT__istream_msg_hdr 
        = (0xfffU & (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U] 
                     >> 0xeU));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__istream_msg_hdr 
        = (0xfffU & (IData)((vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr] 
                             >> 0x30U)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__istream_msg_hdr 
        = (0xfffU & (IData)((vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr] 
                             >> 0x30U)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__istream_msg_hdr 
        = (0xfffU & (IData)((vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr] 
                             >> 0x30U)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__istream_msg_hdr 
        = (0xfffU & (IData)((vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr] 
                             >> 0x30U)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__istream_msg_hdr 
        = (0xfffU & (IData)((vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr] 
                             >> 0x30U)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__istream_msg_hdr 
        = (0xfffU & (IData)((vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr] 
                             >> 0x30U)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__istream_msg_hdr 
        = (0xfffU & (IData)((vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr] 
                             >> 0x30U)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__istream_msg_hdr 
        = (0xfffU & (IData)((vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr] 
                             >> 0x30U)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__istream_msg_hdr 
        = (0xfffU & (IData)((vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr] 
                             >> 0x30U)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__istream_msg_hdr 
        = (0xfffU & (IData)((vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr] 
                             >> 0x30U)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__istream_msg_hdr 
        = (0xfffU & (IData)((vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr] 
                             >> 0x30U)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__istream_msg_hdr 
        = (0xfffU & (IData)((vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr] 
                             >> 0x30U)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->CacheNet_noparam__DOT____Vcellinp__v__proc2net_respstream_rdy[0U] 
        = vlSelf->proc2net_respstream_rdy[0U];
    vlSelf->CacheNet_noparam__DOT____Vcellinp__v__proc2net_respstream_rdy[1U] 
        = vlSelf->proc2net_respstream_rdy[1U];
    vlSelf->CacheNet_noparam__DOT____Vcellinp__v__proc2net_respstream_rdy[2U] 
        = vlSelf->proc2net_respstream_rdy[2U];
    vlSelf->CacheNet_noparam__DOT____Vcellinp__v__proc2net_respstream_rdy[3U] 
        = vlSelf->proc2net_respstream_rdy[3U];
    vlSelf->CacheNet_noparam__DOT____Vcellinp__v__net2cache_reqstream_rdy[0U] 
        = vlSelf->net2cache_reqstream_rdy[0U];
    vlSelf->CacheNet_noparam__DOT____Vcellinp__v__net2cache_reqstream_rdy[1U] 
        = vlSelf->net2cache_reqstream_rdy[1U];
    vlSelf->CacheNet_noparam__DOT____Vcellinp__v__net2cache_reqstream_rdy[2U] 
        = vlSelf->net2cache_reqstream_rdy[2U];
    vlSelf->CacheNet_noparam__DOT____Vcellinp__v__net2cache_reqstream_rdy[3U] 
        = vlSelf->net2cache_reqstream_rdy[3U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereq2netmsg_ostream_msg[0U][0U] 
        = vlSelf->CacheNet_noparam__DOT____Vcellinp__v__proc2net_reqstream_msg
        [0U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereq2netmsg_ostream_msg[0U][1U] 
        = vlSelf->CacheNet_noparam__DOT____Vcellinp__v__proc2net_reqstream_msg
        [0U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereq2netmsg_ostream_msg[0U][2U] 
        = ((0xc00000U & (vlSelf->CacheNet_noparam__DOT____Vcellinp__v__proc2net_reqstream_msg
                         [0U][1U] << 0x10U)) | vlSelf->CacheNet_noparam__DOT____Vcellinp__v__proc2net_reqstream_msg
           [0U][2U]);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereq2netmsg_ostream_msg[1U][0U] 
        = vlSelf->CacheNet_noparam__DOT____Vcellinp__v__proc2net_reqstream_msg
        [1U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereq2netmsg_ostream_msg[1U][1U] 
        = vlSelf->CacheNet_noparam__DOT____Vcellinp__v__proc2net_reqstream_msg
        [1U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereq2netmsg_ostream_msg[1U][2U] 
        = (0x1000000U | ((0xc00000U & (vlSelf->CacheNet_noparam__DOT____Vcellinp__v__proc2net_reqstream_msg
                                       [1U][1U] << 0x10U)) 
                         | vlSelf->CacheNet_noparam__DOT____Vcellinp__v__proc2net_reqstream_msg
                         [1U][2U]));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereq2netmsg_ostream_msg[2U][0U] 
        = vlSelf->CacheNet_noparam__DOT____Vcellinp__v__proc2net_reqstream_msg
        [2U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereq2netmsg_ostream_msg[2U][1U] 
        = vlSelf->CacheNet_noparam__DOT____Vcellinp__v__proc2net_reqstream_msg
        [2U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereq2netmsg_ostream_msg[2U][2U] 
        = (0x2000000U | ((0xc00000U & (vlSelf->CacheNet_noparam__DOT____Vcellinp__v__proc2net_reqstream_msg
                                       [2U][1U] << 0x10U)) 
                         | vlSelf->CacheNet_noparam__DOT____Vcellinp__v__proc2net_reqstream_msg
                         [2U][2U]));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereq2netmsg_ostream_msg[3U][0U] 
        = vlSelf->CacheNet_noparam__DOT____Vcellinp__v__proc2net_reqstream_msg
        [3U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereq2netmsg_ostream_msg[3U][1U] 
        = vlSelf->CacheNet_noparam__DOT____Vcellinp__v__proc2net_reqstream_msg
        [3U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereq2netmsg_ostream_msg[3U][2U] 
        = (0x3000000U | ((0xc00000U & (vlSelf->CacheNet_noparam__DOT____Vcellinp__v__proc2net_reqstream_msg
                                       [3U][1U] << 0x10U)) 
                         | vlSelf->CacheNet_noparam__DOT____Vcellinp__v__proc2net_reqstream_msg
                         [3U][2U]));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacheresp2netmsg_ostream_msg[0U] 
        = (((QData)((IData)((3U & (IData)((vlSelf->CacheNet_noparam__DOT____Vcellinp__v__net2cache_respstream_msg
                                           [0U] >> 0x28U))))) 
            << 0x3aU) | (((QData)((IData)((3U & (IData)(
                                                        (vlSelf->CacheNet_noparam__DOT____Vcellinp__v__net2cache_respstream_msg
                                                         [0U] 
                                                         >> 0x2aU))))) 
                          << 0x38U) | vlSelf->CacheNet_noparam__DOT____Vcellinp__v__net2cache_respstream_msg
                         [0U]));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacheresp2netmsg_ostream_msg[1U] 
        = (((QData)((IData)((3U & (IData)((vlSelf->CacheNet_noparam__DOT____Vcellinp__v__net2cache_respstream_msg
                                           [1U] >> 0x28U))))) 
            << 0x3aU) | (((QData)((IData)((3U & (IData)(
                                                        (vlSelf->CacheNet_noparam__DOT____Vcellinp__v__net2cache_respstream_msg
                                                         [1U] 
                                                         >> 0x2aU))))) 
                          << 0x38U) | vlSelf->CacheNet_noparam__DOT____Vcellinp__v__net2cache_respstream_msg
                         [1U]));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacheresp2netmsg_ostream_msg[2U] 
        = (((QData)((IData)((3U & (IData)((vlSelf->CacheNet_noparam__DOT____Vcellinp__v__net2cache_respstream_msg
                                           [2U] >> 0x28U))))) 
            << 0x3aU) | (((QData)((IData)((3U & (IData)(
                                                        (vlSelf->CacheNet_noparam__DOT____Vcellinp__v__net2cache_respstream_msg
                                                         [2U] 
                                                         >> 0x2aU))))) 
                          << 0x38U) | vlSelf->CacheNet_noparam__DOT____Vcellinp__v__net2cache_respstream_msg
                         [2U]));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacheresp2netmsg_ostream_msg[3U] 
        = (((QData)((IData)((3U & (IData)((vlSelf->CacheNet_noparam__DOT____Vcellinp__v__net2cache_respstream_msg
                                           [3U] >> 0x28U))))) 
            << 0x3aU) | (((QData)((IData)((3U & (IData)(
                                                        (vlSelf->CacheNet_noparam__DOT____Vcellinp__v__net2cache_respstream_msg
                                                         [3U] 
                                                         >> 0x2aU))))) 
                          << 0x38U) | vlSelf->CacheNet_noparam__DOT____Vcellinp__v__net2cache_respstream_msg
                         [3U]));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereq2netmsg_ostream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT____Vcellinp__v__proc2net_reqstream_val
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereq2netmsg_ostream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT____Vcellinp__v__proc2net_reqstream_val
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereq2netmsg_ostream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT____Vcellinp__v__proc2net_reqstream_val
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereq2netmsg_ostream_val[3U] 
        = vlSelf->CacheNet_noparam__DOT____Vcellinp__v__proc2net_reqstream_val
        [3U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacheresp2netmsg_ostream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT____Vcellinp__v__net2cache_respstream_val
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacheresp2netmsg_ostream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT____Vcellinp__v__net2cache_respstream_val
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacheresp2netmsg_ostream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT____Vcellinp__v__net2cache_respstream_val
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacheresp2netmsg_ostream_val[3U] 
        = vlSelf->CacheNet_noparam__DOT____Vcellinp__v__net2cache_respstream_val
        [3U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereq2netmsg_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router0__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_cw_rdy[3U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router0__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_ccw_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router0__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereq2netmsg_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router1__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_cw_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router1__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_ccw_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router1__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereq2netmsg_ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router2__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_cw_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router2__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_ccw_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router2__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereq2netmsg_ostream_rdy[3U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router3__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_cw_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router3__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_ccw_rdy[3U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router3__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacheresp2netmsg_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router0__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_cw_rdy[3U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router0__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_ccw_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router0__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacheresp2netmsg_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router1__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_cw_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router1__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_ccw_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router1__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacheresp2netmsg_ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router2__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_cw_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router2__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_ccw_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router2__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacheresp2netmsg_ostream_rdy[3U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router3__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_cw_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router3__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_ccw_rdy[3U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router3__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inq0_num_free_entries 
        = ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_msg[0U][0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_msg[0U][1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_msg[0U][2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_msg[1U][0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_msg[1U][1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_msg[1U][2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_msg[2U][0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_msg[2U][1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_msg[2U][2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_val[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_val[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_val[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inq1_num_free_entries 
        = ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_msg[0U][0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_msg[0U][1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_msg[0U][2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_msg[1U][0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_msg[1U][1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_msg[1U][2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_msg[2U][0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_msg[2U][1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_msg[2U][2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_val[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_val[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_val[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inq2_num_free_entries 
        = ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_msg[0U][0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_msg[0U][1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_msg[0U][2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_msg[1U][0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_msg[1U][1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_msg[1U][2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_msg[2U][0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_msg[2U][1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_msg[2U][2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_val[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_val[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_val[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inq0_num_free_entries 
        = ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_msg[0U][0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_msg[0U][1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_msg[0U][2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_msg[1U][0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_msg[1U][1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_msg[1U][2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_msg[2U][0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_msg[2U][1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_msg[2U][2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_val[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_val[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_val[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inq1_num_free_entries 
        = ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_msg[0U][0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_msg[0U][1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_msg[0U][2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_msg[1U][0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_msg[1U][1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_msg[1U][2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_msg[2U][0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_msg[2U][1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_msg[2U][2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_val[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_val[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_val[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inq2_num_free_entries 
        = ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_msg[0U][0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_msg[0U][1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_msg[0U][2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_msg[1U][0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_msg[1U][1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_msg[1U][2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_msg[2U][0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_msg[2U][1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_msg[2U][2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_val[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_val[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_val[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inq0_num_free_entries 
        = ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_msg[0U][0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_msg[0U][1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_msg[0U][2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_msg[1U][0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_msg[1U][1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_msg[1U][2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_msg[2U][0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_msg[2U][1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_msg[2U][2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_val[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_val[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_val[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inq1_num_free_entries 
        = ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_msg[0U][0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_msg[0U][1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_msg[0U][2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_msg[1U][0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_msg[1U][1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_msg[1U][2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_msg[2U][0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_msg[2U][1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_msg[2U][2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_val[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_val[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_val[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inq2_num_free_entries 
        = ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_msg[0U][0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_msg[0U][1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_msg[0U][2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_msg[1U][0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_msg[1U][1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_msg[1U][2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_msg[2U][0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_msg[2U][1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_msg[2U][2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_val[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_val[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_val[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inq0_num_free_entries 
        = ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_msg[0U][0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_msg[0U][1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_msg[0U][2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_msg[1U][0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_msg[1U][1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_msg[1U][2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_msg[2U][0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_msg[2U][1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_msg[2U][2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_val[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_val[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_val[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inq1_num_free_entries 
        = ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_msg[0U][0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_msg[0U][1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_msg[0U][2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_msg[1U][0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_msg[1U][1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_msg[1U][2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_msg[2U][0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_msg[2U][1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_msg[2U][2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_val[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_val[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_val[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inq2_num_free_entries 
        = ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_msg[0U][0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_msg[0U][1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_msg[0U][2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_msg[1U][0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_msg[1U][1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_msg[1U][2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_msg[2U][0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_msg[2U][1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_msg[2U][2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_val[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_val[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_val[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inq0_num_free_entries 
        = ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit0_ostream_msg[0U] = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit0_ostream_msg[1U] = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit0_ostream_msg[2U] = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit0_ostream_val[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit0_ostream_val[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit0_ostream_val[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inq1_num_free_entries 
        = ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit1_ostream_msg[0U] = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit1_ostream_msg[1U] = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit1_ostream_msg[2U] = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit1_ostream_val[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit1_ostream_val[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit1_ostream_val[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inq2_num_free_entries 
        = ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit2_ostream_msg[0U] = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit2_ostream_msg[1U] = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit2_ostream_msg[2U] = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit2_ostream_val[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit2_ostream_val[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit2_ostream_val[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inq0_num_free_entries 
        = ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit0_ostream_msg[0U] = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit0_ostream_msg[1U] = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit0_ostream_msg[2U] = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit0_ostream_val[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit0_ostream_val[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit0_ostream_val[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inq1_num_free_entries 
        = ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit1_ostream_msg[0U] = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit1_ostream_msg[1U] = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit1_ostream_msg[2U] = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit1_ostream_val[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit1_ostream_val[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit1_ostream_val[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inq2_num_free_entries 
        = ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit2_ostream_msg[0U] = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit2_ostream_msg[1U] = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit2_ostream_msg[2U] = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit2_ostream_val[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit2_ostream_val[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit2_ostream_val[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inq0_num_free_entries 
        = ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit0_ostream_msg[0U] = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit0_ostream_msg[1U] = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit0_ostream_msg[2U] = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit0_ostream_val[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit0_ostream_val[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit0_ostream_val[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inq1_num_free_entries 
        = ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit1_ostream_msg[0U] = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit1_ostream_msg[1U] = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit1_ostream_msg[2U] = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit1_ostream_val[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit1_ostream_val[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit1_ostream_val[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inq2_num_free_entries 
        = ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit2_ostream_msg[0U] = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit2_ostream_msg[1U] = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit2_ostream_msg[2U] = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit2_ostream_val[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit2_ostream_val[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit2_ostream_val[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inq0_num_free_entries 
        = ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit0_ostream_msg[0U] = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit0_ostream_msg[1U] = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit0_ostream_msg[2U] = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit0_ostream_val[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit0_ostream_val[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit0_ostream_val[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inq1_num_free_entries 
        = ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit1_ostream_msg[0U] = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit1_ostream_msg[1U] = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit1_ostream_msg[2U] = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit1_ostream_val[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit1_ostream_val[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit1_ostream_val[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inq2_num_free_entries 
        = ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit2_ostream_msg[0U] = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit2_ostream_msg[1U] = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit2_ostream_msg[2U] = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit2_ostream_val[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit2_ostream_val[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit2_ostream_val[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT____Vcellinp__v__proc2net_respstream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT____Vcellinp__v__proc2net_respstream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet_ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT____Vcellinp__v__proc2net_respstream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet_ostream_rdy[3U] 
        = vlSelf->CacheNet_noparam__DOT____Vcellinp__v__proc2net_respstream_rdy
        [3U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT____Vcellinp__v__net2cache_reqstream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT____Vcellinp__v__net2cache_reqstream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet_ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT____Vcellinp__v__net2cache_reqstream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet_ostream_rdy[3U] 
        = vlSelf->CacheNet_noparam__DOT____Vcellinp__v__net2cache_reqstream_rdy
        [3U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__istream_msg[0U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereq2netmsg_ostream_msg
        [0U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__istream_msg[0U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereq2netmsg_ostream_msg
        [0U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__istream_msg[0U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereq2netmsg_ostream_msg
        [0U][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__istream_msg[0U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereq2netmsg_ostream_msg
        [1U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__istream_msg[0U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereq2netmsg_ostream_msg
        [1U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__istream_msg[0U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereq2netmsg_ostream_msg
        [1U][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__istream_msg[0U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereq2netmsg_ostream_msg
        [2U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__istream_msg[0U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereq2netmsg_ostream_msg
        [2U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__istream_msg[0U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereq2netmsg_ostream_msg
        [2U][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__istream_msg[0U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereq2netmsg_ostream_msg
        [3U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__istream_msg[0U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereq2netmsg_ostream_msg
        [3U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__istream_msg[0U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereq2netmsg_ostream_msg
        [3U][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router0__istream_msg[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacheresp2netmsg_ostream_msg
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router1__istream_msg[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacheresp2netmsg_ostream_msg
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router2__istream_msg[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacheresp2netmsg_ostream_msg
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router3__istream_msg[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacheresp2netmsg_ostream_msg
        [3U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__istream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereq2netmsg_ostream_val
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__istream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereq2netmsg_ostream_val
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__istream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereq2netmsg_ostream_val
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__istream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereq2netmsg_ostream_val
        [3U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router0__istream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacheresp2netmsg_ostream_val
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router1__istream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacheresp2netmsg_ostream_val
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router2__istream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacheresp2netmsg_ostream_val
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router3__istream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacheresp2netmsg_ostream_val
        [3U];
    vlSelf->CacheNet_noparam__DOT____Vcellout__v__proc2net_reqstream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereq2netmsg_ostream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT____Vcellout__v__proc2net_reqstream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereq2netmsg_ostream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT____Vcellout__v__proc2net_reqstream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereq2netmsg_ostream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT____Vcellout__v__proc2net_reqstream_rdy[3U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereq2netmsg_ostream_rdy
        [3U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_cw_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_cw_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_cw_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_cw_rdy
        [3U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_ccw_rdy
        [3U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_ccw_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_ccw_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_ccw_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT____Vcellout__v__net2cache_respstream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacheresp2netmsg_ostream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT____Vcellout__v__net2cache_respstream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacheresp2netmsg_ostream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT____Vcellout__v__net2cache_respstream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacheresp2netmsg_ostream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT____Vcellout__v__net2cache_respstream_rdy[3U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacheresp2netmsg_ostream_rdy
        [3U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router0__ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_cw_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router1__ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_cw_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router2__ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_cw_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router3__ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_cw_rdy
        [3U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router0__ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_ccw_rdy
        [3U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router1__ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_ccw_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router2__ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_ccw_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router3__ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_ccw_rdy
        [2U];
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((0U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__runit0__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_msg[0U][0U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0_deq_msg[0U];
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_msg[0U][1U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0_deq_msg[1U];
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_msg[0U][2U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0_deq_msg[2U];
        } else {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_msg[1U][0U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0_deq_msg[0U];
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_msg[1U][1U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0_deq_msg[1U];
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_msg[1U][2U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0_deq_msg[2U];
        }
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[0U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_msg
        [0U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[0U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_msg
        [0U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[0U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_msg
        [0U][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[0U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_msg
        [1U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[0U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_msg
        [1U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[0U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_msg
        [1U][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[0U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_msg
        [2U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[0U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_msg
        [2U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[0U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_msg
        [2U][2U];
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((0U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__runit0__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_val[0U] = 1U;
        } else {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_val[1U] = 1U;
        }
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_val
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_val
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_val
        [2U];
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((0U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__runit1__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_msg[0U][0U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1_deq_msg[0U];
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_msg[0U][1U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1_deq_msg[1U];
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_msg[0U][2U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1_deq_msg[2U];
        } else {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_msg[1U][0U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1_deq_msg[0U];
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_msg[1U][1U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1_deq_msg[1U];
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_msg[1U][2U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1_deq_msg[2U];
        }
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[1U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_msg
        [0U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[1U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_msg
        [0U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[1U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_msg
        [0U][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[1U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_msg
        [1U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[1U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_msg
        [1U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[1U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_msg
        [1U][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[1U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_msg
        [2U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[1U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_msg
        [2U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[1U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_msg
        [2U][2U];
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((0U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__runit1__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_val[0U] = 1U;
        } else {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_val[1U] = 1U;
        }
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_val
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_val
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_val
        [2U];
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((0U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__runit2__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_msg[0U][0U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2_deq_msg[0U];
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_msg[0U][1U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2_deq_msg[1U];
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_msg[0U][2U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2_deq_msg[2U];
        } else {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_msg[1U][0U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2_deq_msg[0U];
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_msg[1U][1U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2_deq_msg[1U];
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_msg[1U][2U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2_deq_msg[2U];
        }
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[2U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_msg
        [0U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[2U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_msg
        [0U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[2U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_msg
        [0U][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[2U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_msg
        [1U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[2U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_msg
        [1U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[2U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_msg
        [1U][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[2U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_msg
        [2U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[2U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_msg
        [2U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[2U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_msg
        [2U][2U];
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((0U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__runit2__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_val[0U] = 1U;
        } else {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_val[1U] = 1U;
        }
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_val
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_val
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_val
        [2U];
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((1U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_msg[0U][0U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0_deq_msg[0U];
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_msg[0U][1U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0_deq_msg[1U];
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_msg[0U][2U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0_deq_msg[2U];
        } else {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_msg[1U][0U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0_deq_msg[0U];
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_msg[1U][1U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0_deq_msg[1U];
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_msg[1U][2U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0_deq_msg[2U];
        }
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[0U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_msg
        [0U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[0U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_msg
        [0U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[0U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_msg
        [0U][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[0U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_msg
        [1U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[0U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_msg
        [1U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[0U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_msg
        [1U][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[0U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_msg
        [2U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[0U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_msg
        [2U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[0U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_msg
        [2U][2U];
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((1U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_val[0U] = 1U;
        } else {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_val[1U] = 1U;
        }
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_val
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_val
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_val
        [2U];
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((1U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_msg[0U][0U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1_deq_msg[0U];
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_msg[0U][1U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1_deq_msg[1U];
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_msg[0U][2U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1_deq_msg[2U];
        } else {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_msg[1U][0U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1_deq_msg[0U];
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_msg[1U][1U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1_deq_msg[1U];
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_msg[1U][2U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1_deq_msg[2U];
        }
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[1U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_msg
        [0U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[1U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_msg
        [0U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[1U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_msg
        [0U][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[1U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_msg
        [1U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[1U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_msg
        [1U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[1U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_msg
        [1U][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[1U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_msg
        [2U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[1U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_msg
        [2U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[1U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_msg
        [2U][2U];
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((1U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_val[0U] = 1U;
        } else {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_val[1U] = 1U;
        }
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_val
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_val
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_val
        [2U];
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((1U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_msg[0U][0U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2_deq_msg[0U];
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_msg[0U][1U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2_deq_msg[1U];
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_msg[0U][2U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2_deq_msg[2U];
        } else {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_msg[1U][0U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2_deq_msg[0U];
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_msg[1U][1U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2_deq_msg[1U];
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_msg[1U][2U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2_deq_msg[2U];
        }
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[2U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_msg
        [0U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[2U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_msg
        [0U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[2U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_msg
        [0U][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[2U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_msg
        [1U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[2U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_msg
        [1U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[2U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_msg
        [1U][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[2U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_msg
        [2U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[2U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_msg
        [2U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[2U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_msg
        [2U][2U];
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((1U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_val[0U] = 1U;
        } else {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_val[1U] = 1U;
        }
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_val
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_val
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_val
        [2U];
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((2U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_msg[0U][0U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0_deq_msg[0U];
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_msg[0U][1U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0_deq_msg[1U];
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_msg[0U][2U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0_deq_msg[2U];
        } else {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_msg[1U][0U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0_deq_msg[0U];
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_msg[1U][1U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0_deq_msg[1U];
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_msg[1U][2U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0_deq_msg[2U];
        }
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[0U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_msg
        [0U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[0U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_msg
        [0U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[0U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_msg
        [0U][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[0U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_msg
        [1U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[0U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_msg
        [1U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[0U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_msg
        [1U][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[0U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_msg
        [2U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[0U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_msg
        [2U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[0U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_msg
        [2U][2U];
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((2U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_val[0U] = 1U;
        } else {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_val[1U] = 1U;
        }
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_val
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_val
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_val
        [2U];
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((2U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit1__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_msg[0U][0U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1_deq_msg[0U];
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_msg[0U][1U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1_deq_msg[1U];
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_msg[0U][2U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1_deq_msg[2U];
        } else {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_msg[1U][0U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1_deq_msg[0U];
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_msg[1U][1U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1_deq_msg[1U];
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_msg[1U][2U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1_deq_msg[2U];
        }
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[1U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_msg
        [0U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[1U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_msg
        [0U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[1U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_msg
        [0U][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[1U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_msg
        [1U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[1U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_msg
        [1U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[1U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_msg
        [1U][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[1U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_msg
        [2U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[1U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_msg
        [2U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[1U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_msg
        [2U][2U];
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((2U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit1__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_val[0U] = 1U;
        } else {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_val[1U] = 1U;
        }
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_val
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_val
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_val
        [2U];
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((2U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit2__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_msg[0U][0U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2_deq_msg[0U];
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_msg[0U][1U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2_deq_msg[1U];
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_msg[0U][2U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2_deq_msg[2U];
        } else {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_msg[1U][0U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2_deq_msg[0U];
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_msg[1U][1U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2_deq_msg[1U];
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_msg[1U][2U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2_deq_msg[2U];
        }
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[2U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_msg
        [0U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[2U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_msg
        [0U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[2U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_msg
        [0U][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[2U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_msg
        [1U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[2U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_msg
        [1U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[2U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_msg
        [1U][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[2U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_msg
        [2U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[2U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_msg
        [2U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[2U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_msg
        [2U][2U];
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((2U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit2__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_val[0U] = 1U;
        } else {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_val[1U] = 1U;
        }
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_val
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_val
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_val
        [2U];
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((3U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__runit0__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_msg[0U][0U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0_deq_msg[0U];
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_msg[0U][1U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0_deq_msg[1U];
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_msg[0U][2U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0_deq_msg[2U];
        } else {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_msg[1U][0U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0_deq_msg[0U];
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_msg[1U][1U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0_deq_msg[1U];
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_msg[1U][2U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0_deq_msg[2U];
        }
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[0U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_msg
        [0U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[0U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_msg
        [0U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[0U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_msg
        [0U][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[0U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_msg
        [1U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[0U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_msg
        [1U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[0U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_msg
        [1U][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[0U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_msg
        [2U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[0U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_msg
        [2U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[0U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_msg
        [2U][2U];
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((3U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__runit0__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_val[0U] = 1U;
        } else {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_val[1U] = 1U;
        }
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_val
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_val
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_val
        [2U];
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((3U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__runit1__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_msg[0U][0U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1_deq_msg[0U];
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_msg[0U][1U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1_deq_msg[1U];
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_msg[0U][2U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1_deq_msg[2U];
        } else {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_msg[1U][0U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1_deq_msg[0U];
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_msg[1U][1U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1_deq_msg[1U];
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_msg[1U][2U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1_deq_msg[2U];
        }
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[1U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_msg
        [0U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[1U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_msg
        [0U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[1U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_msg
        [0U][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[1U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_msg
        [1U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[1U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_msg
        [1U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[1U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_msg
        [1U][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[1U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_msg
        [2U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[1U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_msg
        [2U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[1U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_msg
        [2U][2U];
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((3U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__runit1__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_val[0U] = 1U;
        } else {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_val[1U] = 1U;
        }
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_val
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_val
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_val
        [2U];
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((3U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__runit2__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_msg[0U][0U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2_deq_msg[0U];
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_msg[0U][1U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2_deq_msg[1U];
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_msg[0U][2U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2_deq_msg[2U];
        } else {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_msg[1U][0U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2_deq_msg[0U];
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_msg[1U][1U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2_deq_msg[1U];
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_msg[1U][2U] 
                = CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2_deq_msg[2U];
        }
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[2U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_msg
        [0U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[2U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_msg
        [0U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[2U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_msg
        [0U][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[2U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_msg
        [1U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[2U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_msg
        [1U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[2U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_msg
        [1U][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[2U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_msg
        [2U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[2U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_msg
        [2U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[2U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_msg
        [2U][2U];
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((3U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__runit2__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_val[0U] = 1U;
        } else {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_val[1U] = 1U;
        }
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_val
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_val
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_val
        [2U];
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((0U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit0_ostream_msg[0U] 
                = CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0_deq_msg;
            vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit0_ostream_val[0U] = 1U;
        } else {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit0_ostream_msg[1U] 
                = CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0_deq_msg;
            vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit0_ostream_val[1U] = 1U;
        }
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit0_ostream_msg
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit0_ostream_msg
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit0_ostream_msg
            [2U];
    } else {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit0_ostream_msg
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit0_ostream_msg
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit0_ostream_msg
            [2U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit0_ostream_val
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit0_ostream_val
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit0_ostream_val
        [2U];
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((0U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit1_ostream_msg[0U] 
                = CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1_deq_msg;
            vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit1_ostream_val[0U] = 1U;
        } else {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit1_ostream_msg[1U] 
                = CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1_deq_msg;
            vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit1_ostream_val[1U] = 1U;
        }
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit1_ostream_msg
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit1_ostream_msg
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit1_ostream_msg
            [2U];
    } else {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit1_ostream_msg
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit1_ostream_msg
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit1_ostream_msg
            [2U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit1_ostream_val
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit1_ostream_val
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit1_ostream_val
        [2U];
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((0U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit2_ostream_msg[0U] 
                = CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2_deq_msg;
            vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit2_ostream_val[0U] = 1U;
        } else {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit2_ostream_msg[1U] 
                = CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2_deq_msg;
            vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit2_ostream_val[1U] = 1U;
        }
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit2_ostream_msg
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit2_ostream_msg
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit2_ostream_msg
            [2U];
    } else {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit2_ostream_msg
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit2_ostream_msg
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit2_ostream_msg
            [2U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit2_ostream_val
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit2_ostream_val
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit2_ostream_val
        [2U];
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((1U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit0_ostream_msg[0U] 
                = CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0_deq_msg;
            vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit0_ostream_val[0U] = 1U;
        } else {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit0_ostream_msg[1U] 
                = CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0_deq_msg;
            vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit0_ostream_val[1U] = 1U;
        }
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit0_ostream_msg
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit0_ostream_msg
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit0_ostream_msg
            [2U];
    } else {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit0_ostream_msg
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit0_ostream_msg
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit0_ostream_msg
            [2U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit0_ostream_val
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit0_ostream_val
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit0_ostream_val
        [2U];
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((1U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit1_ostream_msg[0U] 
                = CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1_deq_msg;
            vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit1_ostream_val[0U] = 1U;
        } else {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit1_ostream_msg[1U] 
                = CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1_deq_msg;
            vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit1_ostream_val[1U] = 1U;
        }
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit1_ostream_msg
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit1_ostream_msg
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit1_ostream_msg
            [2U];
    } else {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit1_ostream_msg
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit1_ostream_msg
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit1_ostream_msg
            [2U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit1_ostream_val
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit1_ostream_val
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit1_ostream_val
        [2U];
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((1U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit2_ostream_msg[0U] 
                = CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2_deq_msg;
            vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit2_ostream_val[0U] = 1U;
        } else {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit2_ostream_msg[1U] 
                = CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2_deq_msg;
            vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit2_ostream_val[1U] = 1U;
        }
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit2_ostream_msg
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit2_ostream_msg
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit2_ostream_msg
            [2U];
    } else {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit2_ostream_msg
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit2_ostream_msg
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit2_ostream_msg
            [2U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit2_ostream_val
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit2_ostream_val
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit2_ostream_val
        [2U];
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((2U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit0_ostream_msg[0U] 
                = CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0_deq_msg;
            vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit0_ostream_val[0U] = 1U;
        } else {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit0_ostream_msg[1U] 
                = CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0_deq_msg;
            vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit0_ostream_val[1U] = 1U;
        }
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit0_ostream_msg
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit0_ostream_msg
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit0_ostream_msg
            [2U];
    } else {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit0_ostream_msg
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit0_ostream_msg
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit0_ostream_msg
            [2U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit0_ostream_val
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit0_ostream_val
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit0_ostream_val
        [2U];
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((2U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit1_ostream_msg[0U] 
                = CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1_deq_msg;
            vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit1_ostream_val[0U] = 1U;
        } else {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit1_ostream_msg[1U] 
                = CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1_deq_msg;
            vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit1_ostream_val[1U] = 1U;
        }
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit1_ostream_msg
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit1_ostream_msg
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit1_ostream_msg
            [2U];
    } else {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit1_ostream_msg
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit1_ostream_msg
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit1_ostream_msg
            [2U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit1_ostream_val
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit1_ostream_val
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit1_ostream_val
        [2U];
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((2U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit2_ostream_msg[0U] 
                = CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2_deq_msg;
            vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit2_ostream_val[0U] = 1U;
        } else {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit2_ostream_msg[1U] 
                = CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2_deq_msg;
            vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit2_ostream_val[1U] = 1U;
        }
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit2_ostream_msg
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit2_ostream_msg
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit2_ostream_msg
            [2U];
    } else {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit2_ostream_msg
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit2_ostream_msg
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit2_ostream_msg
            [2U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit2_ostream_val
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit2_ostream_val
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit2_ostream_val
        [2U];
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((3U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit0_ostream_msg[0U] 
                = CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0_deq_msg;
            vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit0_ostream_val[0U] = 1U;
        } else {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit0_ostream_msg[1U] 
                = CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0_deq_msg;
            vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit0_ostream_val[1U] = 1U;
        }
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit0_ostream_msg
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit0_ostream_msg
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit0_ostream_msg
            [2U];
    } else {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit0_ostream_msg
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit0_ostream_msg
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit0_ostream_msg
            [2U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit0_ostream_val
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit0_ostream_val
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit0_ostream_val
        [2U];
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((3U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit1_ostream_msg[0U] 
                = CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1_deq_msg;
            vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit1_ostream_val[0U] = 1U;
        } else {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit1_ostream_msg[1U] 
                = CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1_deq_msg;
            vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit1_ostream_val[1U] = 1U;
        }
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit1_ostream_msg
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit1_ostream_msg
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit1_ostream_msg
            [2U];
    } else {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit1_ostream_msg
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit1_ostream_msg
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit1_ostream_msg
            [2U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit1_ostream_val
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit1_ostream_val
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit1_ostream_val
        [2U];
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((3U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit2_ostream_msg[0U] 
                = CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2_deq_msg;
            vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit2_ostream_val[0U] = 1U;
        } else {
            vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit2_ostream_msg[1U] 
                = CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2_deq_msg;
            vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit2_ostream_val[1U] = 1U;
        }
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit2_ostream_msg
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit2_ostream_msg
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit2_ostream_msg
            [2U];
    } else {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit2_ostream_msg
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit2_ostream_msg
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit2_ostream_msg
            [2U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit2_ostream_val
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit2_ostream_val
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit2_ostream_val
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router0__ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet_ostream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router1__ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet_ostream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router2__ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet_ostream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router3__ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet_ostream_rdy
        [3U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet_ostream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet_ostream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet_ostream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet_ostream_rdy
        [3U];
    vlSelf->proc2net_reqstream_rdy[0U] = vlSelf->CacheNet_noparam__DOT____Vcellout__v__proc2net_reqstream_rdy
        [0U];
    vlSelf->proc2net_reqstream_rdy[1U] = vlSelf->CacheNet_noparam__DOT____Vcellout__v__proc2net_reqstream_rdy
        [1U];
    vlSelf->proc2net_reqstream_rdy[2U] = vlSelf->CacheNet_noparam__DOT____Vcellout__v__proc2net_reqstream_rdy
        [2U];
    vlSelf->proc2net_reqstream_rdy[3U] = vlSelf->CacheNet_noparam__DOT____Vcellout__v__proc2net_reqstream_rdy
        [3U];
    vlSelf->net2cache_respstream_rdy[0U] = vlSelf->CacheNet_noparam__DOT____Vcellout__v__net2cache_respstream_rdy
        [0U];
    vlSelf->net2cache_respstream_rdy[1U] = vlSelf->CacheNet_noparam__DOT____Vcellout__v__net2cache_respstream_rdy
        [1U];
    vlSelf->net2cache_respstream_rdy[2U] = vlSelf->CacheNet_noparam__DOT____Vcellout__v__net2cache_respstream_rdy
        [2U];
    vlSelf->net2cache_respstream_rdy[3U] = vlSelf->CacheNet_noparam__DOT____Vcellout__v__net2cache_respstream_rdy
        [3U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_val = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_val = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_val = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_val = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_val = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_val = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_val = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_val = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_val = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_val = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_val = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_val = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_val = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_val = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_val = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_val = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_val = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_val = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_val = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_val = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_val = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_val = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_val = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_val = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router0__ostream_rdy
            [0U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg
            [2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router0__ostream_rdy
            [0U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router0__ostream_rdy
            [0U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router0__ostream_rdy
            [1U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg
            [2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router0__ostream_rdy
            [1U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router0__ostream_rdy
            [1U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router0__ostream_rdy
            [2U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg
            [2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router0__ostream_rdy
            [2U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router0__ostream_rdy
            [2U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router1__ostream_rdy
            [0U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg
            [2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router1__ostream_rdy
            [0U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router1__ostream_rdy
            [0U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router1__ostream_rdy
            [1U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg
            [2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router1__ostream_rdy
            [1U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router1__ostream_rdy
            [1U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router1__ostream_rdy
            [2U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg
            [2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router1__ostream_rdy
            [2U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router1__ostream_rdy
            [2U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router2__ostream_rdy
            [0U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg
            [2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router2__ostream_rdy
            [0U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router2__ostream_rdy
            [0U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router2__ostream_rdy
            [1U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg
            [2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router2__ostream_rdy
            [1U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router2__ostream_rdy
            [1U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router2__ostream_rdy
            [2U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg
            [2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router2__ostream_rdy
            [2U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router2__ostream_rdy
            [2U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router3__ostream_rdy
            [0U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg
            [2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router3__ostream_rdy
            [0U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router3__ostream_rdy
            [0U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router3__ostream_rdy
            [1U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg
            [2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router3__ostream_rdy
            [1U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router3__ostream_rdy
            [1U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router3__ostream_rdy
            [2U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg
            [2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router3__ostream_rdy
            [2U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router3__ostream_rdy
            [2U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg
            [1U][0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg
            [1U][1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg
            [1U][2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__ostream_rdy
            [0U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg
            [2U][0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg
            [2U][1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg
            [2U][2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__ostream_rdy
            [0U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg
            [0U][0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg
            [0U][1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg
            [0U][2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__ostream_rdy
            [0U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg
            [1U][0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg
            [1U][1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg
            [1U][2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__ostream_rdy
            [1U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg
            [2U][0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg
            [2U][1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg
            [2U][2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__ostream_rdy
            [1U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg
            [0U][0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg
            [0U][1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg
            [0U][2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__ostream_rdy
            [1U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg
            [1U][0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg
            [1U][1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg
            [1U][2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__ostream_rdy
            [2U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg
            [2U][0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg
            [2U][1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg
            [2U][2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__ostream_rdy
            [2U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg
            [0U][0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg
            [0U][1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg
            [0U][2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__ostream_rdy
            [2U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg
            [1U][0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg
            [1U][1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg
            [1U][2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__ostream_rdy
            [0U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg
            [2U][0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg
            [2U][1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg
            [2U][2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__ostream_rdy
            [0U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg
            [0U][0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg
            [0U][1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg
            [0U][2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__ostream_rdy
            [0U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg
            [1U][0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg
            [1U][1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg
            [1U][2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__ostream_rdy
            [1U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg
            [2U][0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg
            [2U][1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg
            [2U][2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__ostream_rdy
            [1U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg
            [0U][0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg
            [0U][1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg
            [0U][2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__ostream_rdy
            [1U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg
            [1U][0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg
            [1U][1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg
            [1U][2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__ostream_rdy
            [2U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg
            [2U][0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg
            [2U][1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg
            [2U][2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__ostream_rdy
            [2U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg
            [0U][0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg
            [0U][1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg
            [0U][2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__ostream_rdy
            [2U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg
            [1U][0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg
            [1U][1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg
            [1U][2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__ostream_rdy
            [0U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg
            [2U][0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg
            [2U][1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg
            [2U][2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__ostream_rdy
            [0U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg
            [0U][0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg
            [0U][1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg
            [0U][2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__ostream_rdy
            [0U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg
            [1U][0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg
            [1U][1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg
            [1U][2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__ostream_rdy
            [1U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg
            [2U][0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg
            [2U][1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg
            [2U][2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__ostream_rdy
            [1U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg
            [0U][0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg
            [0U][1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg
            [0U][2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__ostream_rdy
            [1U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg
            [1U][0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg
            [1U][1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg
            [1U][2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__ostream_rdy
            [2U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg
            [2U][0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg
            [2U][1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg
            [2U][2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__ostream_rdy
            [2U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg
            [0U][0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg
            [0U][1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg
            [0U][2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__ostream_rdy
            [2U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg
            [1U][0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg
            [1U][1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg
            [1U][2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__ostream_rdy
            [0U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg
            [2U][0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg
            [2U][1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg
            [2U][2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__ostream_rdy
            [0U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg
            [0U][0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg
            [0U][1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg
            [0U][2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__ostream_rdy
            [0U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg
            [1U][0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg
            [1U][1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg
            [1U][2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__ostream_rdy
            [1U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg
            [2U][0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg
            [2U][1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg
            [2U][2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__ostream_rdy
            [1U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg
            [0U][0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg
            [0U][1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg
            [0U][2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__ostream_rdy
            [1U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg
            [1U][0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg
            [1U][1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg
            [1U][2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__ostream_rdy
            [2U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg
            [2U][0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg
            [2U][1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg
            [2U][2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__ostream_rdy
            [2U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg
            [0U][0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg
            [0U][1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg
            [0U][2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_val = 1U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__ostream_rdy
            [2U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router0__ostream_msg[0U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router0__ostream_msg[0U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router0__ostream_msg[0U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router0__ostream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_val;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router0__ostream_msg[1U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router0__ostream_msg[1U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router0__ostream_msg[1U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router0__ostream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_val;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router0__ostream_msg[2U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router0__ostream_msg[2U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router0__ostream_msg[2U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router0__ostream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_val;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router1__ostream_msg[0U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router1__ostream_msg[0U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router1__ostream_msg[0U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router1__ostream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_val;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router1__ostream_msg[1U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router1__ostream_msg[1U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router1__ostream_msg[1U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router1__ostream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_val;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router1__ostream_msg[2U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router1__ostream_msg[2U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router1__ostream_msg[2U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router1__ostream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_val;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router2__ostream_msg[0U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router2__ostream_msg[0U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router2__ostream_msg[0U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router2__ostream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_val;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router2__ostream_msg[1U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router2__ostream_msg[1U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router2__ostream_msg[1U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router2__ostream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_val;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router2__ostream_msg[2U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router2__ostream_msg[2U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router2__ostream_msg[2U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router2__ostream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_val;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router3__ostream_msg[0U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router3__ostream_msg[0U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router3__ostream_msg[0U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router3__ostream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_val;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router3__ostream_msg[1U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router3__ostream_msg[1U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router3__ostream_msg[1U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router3__ostream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_val;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router3__ostream_msg[2U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router3__ostream_msg[2U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router3__ostream_msg[2U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router3__ostream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_val;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router0__ostream_msg[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router0__ostream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_val;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router0__ostream_msg[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router0__ostream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_val;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router0__ostream_msg[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router0__ostream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_val;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router1__ostream_msg[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router1__ostream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_val;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router1__ostream_msg[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router1__ostream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_val;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router1__ostream_msg[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router1__ostream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_val;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router2__ostream_msg[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router2__ostream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_val;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router2__ostream_msg[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router2__ostream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_val;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router2__ostream_msg[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router2__ostream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_val;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router3__ostream_msg[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router3__ostream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_val;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router3__ostream_msg[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router3__ostream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_val;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router3__ostream_msg[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router3__ostream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_val;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit0_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit1_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit2_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit0_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit1_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit2_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit0_ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit1_ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit2_ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit0_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit1_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit2_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit0_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit1_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit2_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit0_ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit1_ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit2_ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit0_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit1_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit2_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit0_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit1_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit2_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit0_ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit1_ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit2_ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit0_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit1_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit2_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit0_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit1_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit2_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit0_ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit1_ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit2_ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_cw_msg[0U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router0__ostream_msg
        [1U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_cw_msg[0U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router0__ostream_msg
        [1U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_cw_msg[0U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router0__ostream_msg
        [1U][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_ccw_msg[3U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router0__ostream_msg
        [2U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_ccw_msg[3U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router0__ostream_msg
        [2U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_ccw_msg[3U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router0__ostream_msg
        [2U][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet_ostream_msg[0U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router0__ostream_msg
        [0U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet_ostream_msg[0U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router0__ostream_msg
        [0U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet_ostream_msg[0U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router0__ostream_msg
        [0U][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet_ostream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router0__ostream_val
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_cw_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router0__ostream_val
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_ccw_val[3U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router0__ostream_val
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_cw_msg[1U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router1__ostream_msg
        [1U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_cw_msg[1U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router1__ostream_msg
        [1U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_cw_msg[1U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router1__ostream_msg
        [1U][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_ccw_msg[0U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router1__ostream_msg
        [2U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_ccw_msg[0U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router1__ostream_msg
        [2U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_ccw_msg[0U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router1__ostream_msg
        [2U][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet_ostream_msg[1U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router1__ostream_msg
        [0U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet_ostream_msg[1U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router1__ostream_msg
        [0U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet_ostream_msg[1U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router1__ostream_msg
        [0U][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet_ostream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router1__ostream_val
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_cw_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router1__ostream_val
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_ccw_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router1__ostream_val
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_cw_msg[2U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router2__ostream_msg
        [1U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_cw_msg[2U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router2__ostream_msg
        [1U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_cw_msg[2U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router2__ostream_msg
        [1U][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_ccw_msg[1U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router2__ostream_msg
        [2U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_ccw_msg[1U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router2__ostream_msg
        [2U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_ccw_msg[1U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router2__ostream_msg
        [2U][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet_ostream_msg[2U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router2__ostream_msg
        [0U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet_ostream_msg[2U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router2__ostream_msg
        [0U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet_ostream_msg[2U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router2__ostream_msg
        [0U][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet_ostream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router2__ostream_val
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_cw_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router2__ostream_val
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_ccw_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router2__ostream_val
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_cw_msg[3U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router3__ostream_msg
        [1U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_cw_msg[3U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router3__ostream_msg
        [1U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_cw_msg[3U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router3__ostream_msg
        [1U][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_ccw_msg[2U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router3__ostream_msg
        [2U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_ccw_msg[2U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router3__ostream_msg
        [2U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_ccw_msg[2U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router3__ostream_msg
        [2U][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet_ostream_msg[3U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router3__ostream_msg
        [0U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet_ostream_msg[3U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router3__ostream_msg
        [0U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet_ostream_msg[3U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router3__ostream_msg
        [0U][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet_ostream_val[3U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router3__ostream_val
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_cw_val[3U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router3__ostream_val
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_ccw_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router3__ostream_val
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_cw_msg[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router0__ostream_msg
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_ccw_msg[3U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router0__ostream_msg
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet_ostream_msg[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router0__ostream_msg
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet_ostream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router0__ostream_val
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_cw_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router0__ostream_val
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_ccw_val[3U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router0__ostream_val
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_cw_msg[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router1__ostream_msg
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_ccw_msg[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router1__ostream_msg
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet_ostream_msg[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router1__ostream_msg
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet_ostream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router1__ostream_val
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_cw_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router1__ostream_val
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_ccw_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router1__ostream_val
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_cw_msg[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router2__ostream_msg
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_ccw_msg[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router2__ostream_msg
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet_ostream_msg[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router2__ostream_msg
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet_ostream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router2__ostream_val
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_cw_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router2__ostream_val
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_ccw_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router2__ostream_val
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_cw_msg[3U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router3__ostream_msg
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_ccw_msg[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router3__ostream_msg
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet_ostream_msg[3U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router3__ostream_msg
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet_ostream_val[3U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router3__ostream_val
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_cw_val[3U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router3__ostream_val
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_ccw_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router3__ostream_val
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0_deq_rdy 
            = ((0U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1_deq_rdy 
            = ((0U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2_deq_rdy 
            = ((0U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0_deq_rdy 
            = ((1U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1_deq_rdy 
            = ((1U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2_deq_rdy 
            = ((1U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0_deq_rdy 
            = ((2U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1_deq_rdy 
            = ((2U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2_deq_rdy 
            = ((2U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0_deq_rdy 
            = ((3U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1_deq_rdy 
            = ((3U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2_deq_rdy 
            = ((3U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0_deq_rdy 
            = ((0U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__runit0__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1_deq_rdy 
            = ((0U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__runit1__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2_deq_rdy 
            = ((0U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__runit2__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0_deq_rdy 
            = ((1U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1_deq_rdy 
            = ((1U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2_deq_rdy 
            = ((1U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0_deq_rdy 
            = ((2U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1_deq_rdy 
            = ((2U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit1__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2_deq_rdy 
            = ((2U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit2__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0_deq_rdy 
            = ((3U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__runit0__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1_deq_rdy 
            = ((3U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__runit1__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2_deq_rdy 
            = ((3U == (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__runit2__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__istream_msg[1U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_cw_msg
        [3U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__istream_msg[1U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_cw_msg
        [3U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__istream_msg[1U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_cw_msg
        [3U][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__istream_msg[1U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_cw_msg
        [0U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__istream_msg[1U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_cw_msg
        [0U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__istream_msg[1U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_cw_msg
        [0U][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__istream_msg[1U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_cw_msg
        [1U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__istream_msg[1U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_cw_msg
        [1U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__istream_msg[1U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_cw_msg
        [1U][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__istream_msg[1U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_cw_msg
        [2U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__istream_msg[1U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_cw_msg
        [2U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__istream_msg[1U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_cw_msg
        [2U][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__istream_msg[2U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_ccw_msg
        [0U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__istream_msg[2U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_ccw_msg
        [0U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__istream_msg[2U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_ccw_msg
        [0U][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__istream_msg[2U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_ccw_msg
        [1U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__istream_msg[2U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_ccw_msg
        [1U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__istream_msg[2U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_ccw_msg
        [1U][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__istream_msg[2U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_ccw_msg
        [2U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__istream_msg[2U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_ccw_msg
        [2U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__istream_msg[2U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_ccw_msg
        [2U][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__istream_msg[2U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_ccw_msg
        [3U][0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__istream_msg[2U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_ccw_msg
        [3U][1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__istream_msg[2U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_ccw_msg
        [3U][2U];
    CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHEREQ__BRA__0__KET____DOT__netmsg2cachereq__ostream_msg[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet_ostream_msg
        [0U][0U];
    CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHEREQ__BRA__0__KET____DOT__netmsg2cachereq__ostream_msg[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet_ostream_msg
        [0U][1U];
    CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHEREQ__BRA__0__KET____DOT__netmsg2cachereq__ostream_msg[2U] 
        = (0x3fffU & vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet_ostream_msg
           [0U][2U]);
    CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHEREQ__BRA__0__KET____DOT__netmsg2cachereq__ostream_msg[2U] 
        = ((0x3c3fU & CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHEREQ__BRA__0__KET____DOT__netmsg2cachereq__ostream_msg[2U]) 
           | (0x3c0U & (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet_ostream_msg
                        [0U][2U] >> 0x10U)));
    CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHEREQ__BRA__1__KET____DOT__netmsg2cachereq__ostream_msg[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet_ostream_msg
        [1U][0U];
    CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHEREQ__BRA__1__KET____DOT__netmsg2cachereq__ostream_msg[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet_ostream_msg
        [1U][1U];
    CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHEREQ__BRA__1__KET____DOT__netmsg2cachereq__ostream_msg[2U] 
        = (0x3fffU & vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet_ostream_msg
           [1U][2U]);
    CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHEREQ__BRA__1__KET____DOT__netmsg2cachereq__ostream_msg[2U] 
        = ((0x3c3fU & CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHEREQ__BRA__1__KET____DOT__netmsg2cachereq__ostream_msg[2U]) 
           | (0x3c0U & (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet_ostream_msg
                        [1U][2U] >> 0x10U)));
    CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHEREQ__BRA__2__KET____DOT__netmsg2cachereq__ostream_msg[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet_ostream_msg
        [2U][0U];
    CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHEREQ__BRA__2__KET____DOT__netmsg2cachereq__ostream_msg[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet_ostream_msg
        [2U][1U];
    CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHEREQ__BRA__2__KET____DOT__netmsg2cachereq__ostream_msg[2U] 
        = (0x3fffU & vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet_ostream_msg
           [2U][2U]);
    CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHEREQ__BRA__2__KET____DOT__netmsg2cachereq__ostream_msg[2U] 
        = ((0x3c3fU & CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHEREQ__BRA__2__KET____DOT__netmsg2cachereq__ostream_msg[2U]) 
           | (0x3c0U & (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet_ostream_msg
                        [2U][2U] >> 0x10U)));
    CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHEREQ__BRA__3__KET____DOT__netmsg2cachereq__ostream_msg[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet_ostream_msg
        [3U][0U];
    CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHEREQ__BRA__3__KET____DOT__netmsg2cachereq__ostream_msg[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet_ostream_msg
        [3U][1U];
    CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHEREQ__BRA__3__KET____DOT__netmsg2cachereq__ostream_msg[2U] 
        = (0x3fffU & vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet_ostream_msg
           [3U][2U]);
    CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHEREQ__BRA__3__KET____DOT__netmsg2cachereq__ostream_msg[2U] 
        = ((0x3c3fU & CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHEREQ__BRA__3__KET____DOT__netmsg2cachereq__ostream_msg[2U]) 
           | (0x3c0U & (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet_ostream_msg
                        [3U][2U] >> 0x10U)));
    vlSelf->CacheNet_noparam__DOT____Vcellout__v__net2cache_reqstream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet_ostream_val
        [0U];
    vlSelf->CacheNet_noparam__DOT____Vcellout__v__net2cache_reqstream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet_ostream_val
        [1U];
    vlSelf->CacheNet_noparam__DOT____Vcellout__v__net2cache_reqstream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet_ostream_val
        [2U];
    vlSelf->CacheNet_noparam__DOT____Vcellout__v__net2cache_reqstream_val[3U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet_ostream_val
        [3U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__istream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_cw_val
        [3U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__istream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_cw_val
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__istream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_cw_val
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__istream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_cw_val
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__istream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_ccw_val
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__istream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_ccw_val
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__istream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_ccw_val
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__istream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_ccw_val
        [3U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router0__istream_msg[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_cw_msg
        [3U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router1__istream_msg[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_cw_msg
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router2__istream_msg[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_cw_msg
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router3__istream_msg[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_cw_msg
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router0__istream_msg[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_ccw_msg
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router1__istream_msg[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_ccw_msg
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router2__istream_msg[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_ccw_msg
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router3__istream_msg[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_ccw_msg
        [3U];
    CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHERESP__BRA__0__KET____DOT__netmsg2cacheresp__ostream_msg 
        = (0xffffffffffffULL & vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet_ostream_msg
           [0U]);
    CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHERESP__BRA__0__KET____DOT__netmsg2cacheresp__ostream_msg 
        = (0xf0ffffffffffULL & CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHERESP__BRA__0__KET____DOT__netmsg2cacheresp__ostream_msg);
    CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHERESP__BRA__1__KET____DOT__netmsg2cacheresp__ostream_msg 
        = (0xffffffffffffULL & vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet_ostream_msg
           [1U]);
    CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHERESP__BRA__1__KET____DOT__netmsg2cacheresp__ostream_msg 
        = (0xf0ffffffffffULL & CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHERESP__BRA__1__KET____DOT__netmsg2cacheresp__ostream_msg);
    CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHERESP__BRA__2__KET____DOT__netmsg2cacheresp__ostream_msg 
        = (0xffffffffffffULL & vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet_ostream_msg
           [2U]);
    CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHERESP__BRA__2__KET____DOT__netmsg2cacheresp__ostream_msg 
        = (0xf0ffffffffffULL & CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHERESP__BRA__2__KET____DOT__netmsg2cacheresp__ostream_msg);
    CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHERESP__BRA__3__KET____DOT__netmsg2cacheresp__ostream_msg 
        = (0xffffffffffffULL & vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet_ostream_msg
           [3U]);
    CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHERESP__BRA__3__KET____DOT__netmsg2cacheresp__ostream_msg 
        = (0xf0ffffffffffULL & CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHERESP__BRA__3__KET____DOT__netmsg2cacheresp__ostream_msg);
    vlSelf->CacheNet_noparam__DOT____Vcellout__v__proc2net_respstream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet_ostream_val
        [0U];
    vlSelf->CacheNet_noparam__DOT____Vcellout__v__proc2net_respstream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet_ostream_val
        [1U];
    vlSelf->CacheNet_noparam__DOT____Vcellout__v__proc2net_respstream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet_ostream_val
        [2U];
    vlSelf->CacheNet_noparam__DOT____Vcellout__v__proc2net_respstream_val[3U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet_ostream_val
        [3U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router0__istream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_cw_val
        [3U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router1__istream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_cw_val
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router2__istream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_cw_val
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router3__istream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_cw_val
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router0__istream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_ccw_val
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router1__istream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_ccw_val
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router2__istream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_ccw_val
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router3__istream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_ccw_val
        [3U];
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0_deq_rdy));
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1_deq_rdy));
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2_deq_rdy));
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0_deq_rdy));
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1_deq_rdy));
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2_deq_rdy));
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0_deq_rdy));
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1_deq_rdy));
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2_deq_rdy));
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0_deq_rdy));
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1_deq_rdy));
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2_deq_rdy));
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0_deq_rdy));
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1_deq_rdy));
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2_deq_rdy));
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0_deq_rdy));
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1_deq_rdy));
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2_deq_rdy));
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0_deq_rdy));
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1_deq_rdy));
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2_deq_rdy));
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0_deq_rdy));
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1_deq_rdy));
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2_deq_rdy));
    vlSelf->CacheNet_noparam__DOT____Vcellout__v__net2cache_reqstream_msg[0U][0U] 
        = CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHEREQ__BRA__0__KET____DOT__netmsg2cachereq__ostream_msg[0U];
    vlSelf->CacheNet_noparam__DOT____Vcellout__v__net2cache_reqstream_msg[0U][1U] 
        = CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHEREQ__BRA__0__KET____DOT__netmsg2cachereq__ostream_msg[1U];
    vlSelf->CacheNet_noparam__DOT____Vcellout__v__net2cache_reqstream_msg[0U][2U] 
        = CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHEREQ__BRA__0__KET____DOT__netmsg2cachereq__ostream_msg[2U];
    vlSelf->CacheNet_noparam__DOT____Vcellout__v__net2cache_reqstream_msg[1U][0U] 
        = CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHEREQ__BRA__1__KET____DOT__netmsg2cachereq__ostream_msg[0U];
    vlSelf->CacheNet_noparam__DOT____Vcellout__v__net2cache_reqstream_msg[1U][1U] 
        = CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHEREQ__BRA__1__KET____DOT__netmsg2cachereq__ostream_msg[1U];
    vlSelf->CacheNet_noparam__DOT____Vcellout__v__net2cache_reqstream_msg[1U][2U] 
        = CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHEREQ__BRA__1__KET____DOT__netmsg2cachereq__ostream_msg[2U];
    vlSelf->CacheNet_noparam__DOT____Vcellout__v__net2cache_reqstream_msg[2U][0U] 
        = CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHEREQ__BRA__2__KET____DOT__netmsg2cachereq__ostream_msg[0U];
    vlSelf->CacheNet_noparam__DOT____Vcellout__v__net2cache_reqstream_msg[2U][1U] 
        = CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHEREQ__BRA__2__KET____DOT__netmsg2cachereq__ostream_msg[1U];
    vlSelf->CacheNet_noparam__DOT____Vcellout__v__net2cache_reqstream_msg[2U][2U] 
        = CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHEREQ__BRA__2__KET____DOT__netmsg2cachereq__ostream_msg[2U];
    vlSelf->CacheNet_noparam__DOT____Vcellout__v__net2cache_reqstream_msg[3U][0U] 
        = CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHEREQ__BRA__3__KET____DOT__netmsg2cachereq__ostream_msg[0U];
    vlSelf->CacheNet_noparam__DOT____Vcellout__v__net2cache_reqstream_msg[3U][1U] 
        = CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHEREQ__BRA__3__KET____DOT__netmsg2cachereq__ostream_msg[1U];
    vlSelf->CacheNet_noparam__DOT____Vcellout__v__net2cache_reqstream_msg[3U][2U] 
        = CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHEREQ__BRA__3__KET____DOT__netmsg2cachereq__ostream_msg[2U];
    vlSelf->net2cache_reqstream_val[0U] = vlSelf->CacheNet_noparam__DOT____Vcellout__v__net2cache_reqstream_val
        [0U];
    vlSelf->net2cache_reqstream_val[1U] = vlSelf->CacheNet_noparam__DOT____Vcellout__v__net2cache_reqstream_val
        [1U];
    vlSelf->net2cache_reqstream_val[2U] = vlSelf->CacheNet_noparam__DOT____Vcellout__v__net2cache_reqstream_val
        [2U];
    vlSelf->net2cache_reqstream_val[3U] = vlSelf->CacheNet_noparam__DOT____Vcellout__v__net2cache_reqstream_val
        [3U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__istream_val
           [0U]);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__istream_val
           [1U]);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__istream_val
           [2U]);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__istream_val
           [0U]);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__istream_val
           [1U]);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__istream_val
           [2U]);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__istream_val
           [0U]);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__istream_val
           [1U]);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__istream_val
           [2U]);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__istream_val
           [0U]);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__istream_val
           [1U]);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__istream_val
           [2U]);
    vlSelf->CacheNet_noparam__DOT____Vcellout__v__proc2net_respstream_msg[0U] 
        = CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHERESP__BRA__0__KET____DOT__netmsg2cacheresp__ostream_msg;
    vlSelf->CacheNet_noparam__DOT____Vcellout__v__proc2net_respstream_msg[1U] 
        = CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHERESP__BRA__1__KET____DOT__netmsg2cacheresp__ostream_msg;
    vlSelf->CacheNet_noparam__DOT____Vcellout__v__proc2net_respstream_msg[2U] 
        = CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHERESP__BRA__2__KET____DOT__netmsg2cacheresp__ostream_msg;
    vlSelf->CacheNet_noparam__DOT____Vcellout__v__proc2net_respstream_msg[3U] 
        = CacheNet_noparam__DOT__v__DOT____Vcellout__NETMSG2CACHERESP__BRA__3__KET____DOT__netmsg2cacheresp__ostream_msg;
    vlSelf->proc2net_respstream_val[0U] = vlSelf->CacheNet_noparam__DOT____Vcellout__v__proc2net_respstream_val
        [0U];
    vlSelf->proc2net_respstream_val[1U] = vlSelf->CacheNet_noparam__DOT____Vcellout__v__proc2net_respstream_val
        [1U];
    vlSelf->proc2net_respstream_val[2U] = vlSelf->CacheNet_noparam__DOT____Vcellout__v__proc2net_respstream_val
        [2U];
    vlSelf->proc2net_respstream_val[3U] = vlSelf->CacheNet_noparam__DOT____Vcellout__v__proc2net_respstream_val
        [3U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router0__istream_val
           [0U]);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router0__istream_val
           [1U]);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router0__istream_val
           [2U]);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router1__istream_val
           [0U]);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router1__istream_val
           [1U]);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router1__istream_val
           [2U]);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router2__istream_val
           [0U]);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router2__istream_val
           [1U]);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router2__istream_val
           [2U]);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router3__istream_val
           [0U]);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router3__istream_val
           [1U]);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router3__istream_val
           [2U]);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->net2cache_reqstream_msg[0U][0U] = vlSelf->CacheNet_noparam__DOT____Vcellout__v__net2cache_reqstream_msg
        [0U][0U];
    vlSelf->net2cache_reqstream_msg[0U][1U] = vlSelf->CacheNet_noparam__DOT____Vcellout__v__net2cache_reqstream_msg
        [0U][1U];
    vlSelf->net2cache_reqstream_msg[0U][2U] = vlSelf->CacheNet_noparam__DOT____Vcellout__v__net2cache_reqstream_msg
        [0U][2U];
    vlSelf->net2cache_reqstream_msg[1U][0U] = vlSelf->CacheNet_noparam__DOT____Vcellout__v__net2cache_reqstream_msg
        [1U][0U];
    vlSelf->net2cache_reqstream_msg[1U][1U] = vlSelf->CacheNet_noparam__DOT____Vcellout__v__net2cache_reqstream_msg
        [1U][1U];
    vlSelf->net2cache_reqstream_msg[1U][2U] = vlSelf->CacheNet_noparam__DOT____Vcellout__v__net2cache_reqstream_msg
        [1U][2U];
    vlSelf->net2cache_reqstream_msg[2U][0U] = vlSelf->CacheNet_noparam__DOT____Vcellout__v__net2cache_reqstream_msg
        [2U][0U];
    vlSelf->net2cache_reqstream_msg[2U][1U] = vlSelf->CacheNet_noparam__DOT____Vcellout__v__net2cache_reqstream_msg
        [2U][1U];
    vlSelf->net2cache_reqstream_msg[2U][2U] = vlSelf->CacheNet_noparam__DOT____Vcellout__v__net2cache_reqstream_msg
        [2U][2U];
    vlSelf->net2cache_reqstream_msg[3U][0U] = vlSelf->CacheNet_noparam__DOT____Vcellout__v__net2cache_reqstream_msg
        [3U][0U];
    vlSelf->net2cache_reqstream_msg[3U][1U] = vlSelf->CacheNet_noparam__DOT____Vcellout__v__net2cache_reqstream_msg
        [3U][1U];
    vlSelf->net2cache_reqstream_msg[3U][2U] = vlSelf->CacheNet_noparam__DOT____Vcellout__v__net2cache_reqstream_msg
        [3U][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->proc2net_respstream_msg[0U] = vlSelf->CacheNet_noparam__DOT____Vcellout__v__proc2net_respstream_msg
        [0U];
    vlSelf->proc2net_respstream_msg[1U] = vlSelf->CacheNet_noparam__DOT____Vcellout__v__proc2net_respstream_msg
        [1U];
    vlSelf->proc2net_respstream_msg[2U] = vlSelf->CacheNet_noparam__DOT____Vcellout__v__proc2net_respstream_msg
        [2U];
    vlSelf->proc2net_respstream_msg[3U] = vlSelf->CacheNet_noparam__DOT____Vcellout__v__proc2net_respstream_msg
        [3U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
}

VL_ATTR_COLD void VCacheNet_noparam___024root___eval_triggers__stl(VCacheNet_noparam___024root* vlSelf);

VL_ATTR_COLD bool VCacheNet_noparam___024root___eval_phase__stl(VCacheNet_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCacheNet_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VCacheNet_noparam___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VCacheNet_noparam___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCacheNet_noparam___024root___dump_triggers__ico(VCacheNet_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCacheNet_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void VCacheNet_noparam___024root___dump_triggers__act(VCacheNet_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCacheNet_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void VCacheNet_noparam___024root___dump_triggers__nba(VCacheNet_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCacheNet_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root___dump_triggers__nba\n"); );
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

VL_ATTR_COLD void VCacheNet_noparam___024root___ctor_var_reset(VCacheNet_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCacheNet_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(78, vlSelf->net2cache_reqstream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->net2cache_reqstream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->net2cache_reqstream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->net2cache_respstream_msg[__Vi0] = VL_RAND_RESET_Q(48);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->net2cache_respstream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->net2cache_respstream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(78, vlSelf->proc2net_reqstream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->proc2net_reqstream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->proc2net_reqstream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->proc2net_respstream_msg[__Vi0] = VL_RAND_RESET_Q(48);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->proc2net_respstream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->proc2net_respstream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT____Vcellout__v__proc2net_respstream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT____Vcellinp__v__proc2net_respstream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT____Vcellout__v__proc2net_respstream_msg[__Vi0] = VL_RAND_RESET_Q(48);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT____Vcellinp__v__proc2net_reqstream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT____Vcellout__v__proc2net_reqstream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(78, vlSelf->CacheNet_noparam__DOT____Vcellinp__v__proc2net_reqstream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT____Vcellinp__v__net2cache_respstream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT____Vcellout__v__net2cache_respstream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT____Vcellinp__v__net2cache_respstream_msg[__Vi0] = VL_RAND_RESET_Q(48);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT____Vcellout__v__net2cache_reqstream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT____Vcellinp__v__net2cache_reqstream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(78, vlSelf->CacheNet_noparam__DOT____Vcellout__v__net2cache_reqstream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereq2netmsg_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereq2netmsg_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereq2netmsg_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacheresp2netmsg_ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacheresp2netmsg_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacheresp2netmsg_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet_ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_cw_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_cw_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_cw_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_ccw_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_ccw_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_ccw_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router0__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router0__ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__istream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router1__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router1__ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__istream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router2__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router2__ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__istream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router3__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router3__ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router3__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__istream_msg[__Vi0]);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[__Vi0]);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[__Vi0]);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[__Vi0]);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__runit0__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__runit1__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__runit2__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream0_trace__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[__Vi0]);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[__Vi0]);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[__Vi0]);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[__Vi0]);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[__Vi0]);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[__Vi0]);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit1__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit2__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__ostream0_trace__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__ostream1_trace__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__ostream2_trace__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[__Vi0]);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[__Vi0]);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[__Vi0]);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__runit0__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__runit1__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__runit2__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__ostream0_trace__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__ostream1_trace__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__ostream2_trace__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_cw_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_cw_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_cw_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_ccw_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_ccw_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_ccw_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router0__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router0__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router0__ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router0__istream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router1__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router1__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router1__ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router1__istream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router2__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router2__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router2__ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router2__istream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router3__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router3__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router3__ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router3__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router3__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router3__istream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit0_ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit1_ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit2_ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg = VL_RAND_RESET_Q(60);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg = VL_RAND_RESET_Q(60);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg = VL_RAND_RESET_Q(60);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit0_ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit1_ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit2_ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg = VL_RAND_RESET_Q(60);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg = VL_RAND_RESET_Q(60);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg = VL_RAND_RESET_Q(60);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit0_ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit1_ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit2_ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg = VL_RAND_RESET_Q(60);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg = VL_RAND_RESET_Q(60);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg = VL_RAND_RESET_Q(60);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit0_ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit1_ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit2_ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg = VL_RAND_RESET_Q(60);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg = VL_RAND_RESET_Q(60);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg = VL_RAND_RESET_Q(60);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__str);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->__Vdpi_export_trigger = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
