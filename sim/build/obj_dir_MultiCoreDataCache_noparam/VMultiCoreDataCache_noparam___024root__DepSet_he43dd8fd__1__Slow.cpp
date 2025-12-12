// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMultiCoreDataCache_noparam.h for the primary calling header

#include "VMultiCoreDataCache_noparam__pch.h"
#include "VMultiCoreDataCache_noparam___024root.h"

VL_ATTR_COLD void VMultiCoreDataCache_noparam___024root___stl_sequent__TOP__1(VMultiCoreDataCache_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMultiCoreDataCache_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root___stl_sequent__TOP__1\n"); );
    // Init
    VlWide<6>/*175:0*/ MultiCoreDataCache_noparam__DOT____Vcellout__v__cache2mem_reqstream_msg;
    VL_ZERO_W(176, MultiCoreDataCache_noparam__DOT____Vcellout__v__cache2mem_reqstream_msg);
    QData/*47:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHERESP__BRA__0__KET____DOT__netmsg2cacheresp__ostream_msg;
    MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHERESP__BRA__0__KET____DOT__netmsg2cacheresp__ostream_msg = 0;
    QData/*47:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHERESP__BRA__1__KET____DOT__netmsg2cacheresp__ostream_msg;
    MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHERESP__BRA__1__KET____DOT__netmsg2cacheresp__ostream_msg = 0;
    QData/*47:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHERESP__BRA__2__KET____DOT__netmsg2cacheresp__ostream_msg;
    MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHERESP__BRA__2__KET____DOT__netmsg2cacheresp__ostream_msg = 0;
    QData/*47:0*/ MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHERESP__BRA__3__KET____DOT__netmsg2cacheresp__ostream_msg;
    MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHERESP__BRA__3__KET____DOT__netmsg2cacheresp__ostream_msg = 0;
    // Body
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_rdy[0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy
        [1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_rdy[0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy
        [2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router2__ostream_val[0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_val;
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg[1U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg[1U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg[1U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg[1U][3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg[1U][4U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[4U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_rdy[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy
        [0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_rdy[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy
        [1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_rdy[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy
        [2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router2__ostream_val[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_val;
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg[2U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg[2U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg[2U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg[2U][3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg[2U][4U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[4U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_rdy[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy
        [0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_rdy[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy
        [1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_rdy[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy
        [2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router2__ostream_val[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_val;
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg[0U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg[0U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg[0U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg[0U][3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg[0U][4U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[4U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_rdy[0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy
        [0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_rdy[0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy
        [1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_rdy[0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy
        [2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router3__ostream_val[0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_val;
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg[1U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg[1U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg[1U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg[1U][3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg[1U][4U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[4U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_rdy[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy
        [0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_rdy[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy
        [1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_rdy[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy
        [2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router3__ostream_val[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_val;
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg[2U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg[2U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg[2U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg[2U][3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg[2U][4U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[4U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_rdy[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy
        [0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_rdy[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy
        [1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_rdy[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy
        [2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router3__ostream_val[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_val;
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router0__ostream_msg[0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg;
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router0__ostream_val[0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_val;
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router0__ostream_msg[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg;
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router0__ostream_val[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_val;
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router0__ostream_msg[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg;
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router0__ostream_val[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_val;
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router1__ostream_msg[0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg;
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router1__ostream_val[0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_val;
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router1__ostream_msg[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg;
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router1__ostream_val[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_val;
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router1__ostream_msg[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg;
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router1__ostream_val[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_val;
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router2__ostream_msg[0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg;
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router2__ostream_val[0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_val;
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router2__ostream_msg[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg;
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router2__ostream_val[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_val;
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router2__ostream_msg[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg;
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router2__ostream_val[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_val;
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router3__ostream_msg[0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg;
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router3__ostream_val[0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_val;
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router3__ostream_msg[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg;
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router3__ostream_val[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_val;
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router3__ostream_msg[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg;
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router3__ostream_val[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_val;
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__routeunit0_ostream_rdy[0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy
        [0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__routeunit1_ostream_rdy[0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy
        [1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__routeunit2_ostream_rdy[0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy
        [2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__routeunit0_ostream_rdy[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy
        [0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__routeunit1_ostream_rdy[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy
        [1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__routeunit2_ostream_rdy[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy
        [2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__routeunit0_ostream_rdy[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy
        [0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__routeunit1_ostream_rdy[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy
        [1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__routeunit2_ostream_rdy[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy
        [2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__routeunit0_ostream_rdy[0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy
        [0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__routeunit1_ostream_rdy[0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy
        [1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__routeunit2_ostream_rdy[0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy
        [2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__routeunit0_ostream_rdy[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy
        [0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__routeunit1_ostream_rdy[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy
        [1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__routeunit2_ostream_rdy[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy
        [2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__routeunit0_ostream_rdy[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy
        [0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__routeunit1_ostream_rdy[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy
        [1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__routeunit2_ostream_rdy[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy
        [2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__routeunit0_ostream_rdy[0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy
        [0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__routeunit1_ostream_rdy[0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy
        [1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__routeunit2_ostream_rdy[0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy
        [2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__routeunit0_ostream_rdy[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy
        [0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__routeunit1_ostream_rdy[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy
        [1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__routeunit2_ostream_rdy[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy
        [2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__routeunit0_ostream_rdy[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy
        [0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__routeunit1_ostream_rdy[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy
        [1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__routeunit2_ostream_rdy[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy
        [2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__routeunit0_ostream_rdy[0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy
        [0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__routeunit1_ostream_rdy[0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy
        [1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__routeunit2_ostream_rdy[0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy
        [2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__routeunit0_ostream_rdy[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy
        [0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__routeunit1_ostream_rdy[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy
        [1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__routeunit2_ostream_rdy[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy
        [2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__routeunit0_ostream_rdy[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy
        [0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__routeunit1_ostream_rdy[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy
        [1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__routeunit2_ostream_rdy[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy
        [2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet_ostream_msg[0U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg
        [0U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet_ostream_msg[0U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg
        [0U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet_ostream_msg[0U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg
        [0U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet_ostream_msg[0U][3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg
        [0U][3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet_ostream_msg[0U][4U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg
        [0U][4U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet_ostream_msg[0U][5U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg
        [0U][5U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_msg[0U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg
        [1U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_msg[0U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg
        [1U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_msg[0U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg
        [1U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_msg[0U][3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg
        [1U][3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_msg[0U][4U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg
        [1U][4U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_msg[0U][5U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg
        [1U][5U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_msg[3U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg
        [2U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_msg[3U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg
        [2U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_msg[3U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg
        [2U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_msg[3U][3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg
        [2U][3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_msg[3U][4U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg
        [2U][4U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_msg[3U][5U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg
        [2U][5U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0_deq_rdy 
            = ((0U == (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__runit0__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1_deq_rdy 
            = ((0U == (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__runit1__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2_deq_rdy 
            = ((0U == (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__runit2__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet_ostream_val[0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router0__ostream_val
        [0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_val[0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router0__ostream_val
        [1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_val[3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router0__ostream_val
        [2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet_ostream_msg[1U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg
        [0U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet_ostream_msg[1U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg
        [0U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet_ostream_msg[1U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg
        [0U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet_ostream_msg[1U][3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg
        [0U][3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet_ostream_msg[1U][4U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg
        [0U][4U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet_ostream_msg[1U][5U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg
        [0U][5U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_msg[1U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg
        [1U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_msg[1U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg
        [1U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_msg[1U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg
        [1U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_msg[1U][3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg
        [1U][3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_msg[1U][4U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg
        [1U][4U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_msg[1U][5U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg
        [1U][5U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_msg[0U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg
        [2U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_msg[0U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg
        [2U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_msg[0U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg
        [2U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_msg[0U][3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg
        [2U][3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_msg[0U][4U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg
        [2U][4U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_msg[0U][5U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg
        [2U][5U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0_deq_rdy 
            = ((1U == (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1_deq_rdy 
            = ((1U == (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2_deq_rdy 
            = ((1U == (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet_ostream_val[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router1__ostream_val
        [0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_val[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router1__ostream_val
        [1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_val[0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router1__ostream_val
        [2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet_ostream_msg[2U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg
        [0U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet_ostream_msg[2U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg
        [0U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet_ostream_msg[2U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg
        [0U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet_ostream_msg[2U][3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg
        [0U][3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet_ostream_msg[2U][4U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg
        [0U][4U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet_ostream_msg[2U][5U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg
        [0U][5U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_msg[2U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg
        [1U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_msg[2U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg
        [1U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_msg[2U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg
        [1U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_msg[2U][3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg
        [1U][3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_msg[2U][4U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg
        [1U][4U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_msg[2U][5U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg
        [1U][5U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_msg[1U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg
        [2U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_msg[1U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg
        [2U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_msg[1U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg
        [2U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_msg[1U][3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg
        [2U][3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_msg[1U][4U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg
        [2U][4U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_msg[1U][5U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg
        [2U][5U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0_deq_rdy 
            = ((2U == (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1_deq_rdy 
            = ((2U == (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2_deq_rdy 
            = ((2U == (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet_ostream_val[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router2__ostream_val
        [0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_val[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router2__ostream_val
        [1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_val[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router2__ostream_val
        [2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet_ostream_msg[3U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg
        [0U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet_ostream_msg[3U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg
        [0U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet_ostream_msg[3U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg
        [0U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet_ostream_msg[3U][3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg
        [0U][3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet_ostream_msg[3U][4U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg
        [0U][4U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet_ostream_msg[3U][5U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg
        [0U][5U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_msg[3U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg
        [1U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_msg[3U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg
        [1U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_msg[3U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg
        [1U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_msg[3U][3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg
        [1U][3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_msg[3U][4U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg
        [1U][4U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_msg[3U][5U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg
        [1U][5U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_msg[2U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg
        [2U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_msg[2U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg
        [2U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_msg[2U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg
        [2U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_msg[2U][3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg
        [2U][3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_msg[2U][4U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg
        [2U][4U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_msg[2U][5U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg
        [2U][5U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0_deq_rdy 
            = ((3U == (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1_deq_rdy 
            = ((3U == (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2_deq_rdy 
            = ((3U == (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet_ostream_val[3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router3__ostream_val
        [0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_val[3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router3__ostream_val
        [1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_val[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router3__ostream_val
        [2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet_ostream_msg[0U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router0__ostream_msg
        [0U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet_ostream_msg[0U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router0__ostream_msg
        [0U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet_ostream_msg[0U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router0__ostream_msg
        [0U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_cw_msg[0U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router0__ostream_msg
        [1U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_cw_msg[0U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router0__ostream_msg
        [1U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_cw_msg[0U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router0__ostream_msg
        [1U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_ccw_msg[3U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router0__ostream_msg
        [2U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_ccw_msg[3U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router0__ostream_msg
        [2U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_ccw_msg[3U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router0__ostream_msg
        [2U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0_deq_rdy 
            = ((0U == (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__runit0__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1_deq_rdy 
            = ((0U == (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__runit1__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2_deq_rdy 
            = ((0U == (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__runit2__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet_ostream_val[0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router0__ostream_val
        [0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_cw_val[0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router0__ostream_val
        [1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_ccw_val[3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router0__ostream_val
        [2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet_ostream_msg[1U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router1__ostream_msg
        [0U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet_ostream_msg[1U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router1__ostream_msg
        [0U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet_ostream_msg[1U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router1__ostream_msg
        [0U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_cw_msg[1U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router1__ostream_msg
        [1U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_cw_msg[1U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router1__ostream_msg
        [1U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_cw_msg[1U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router1__ostream_msg
        [1U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_ccw_msg[0U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router1__ostream_msg
        [2U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_ccw_msg[0U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router1__ostream_msg
        [2U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_ccw_msg[0U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router1__ostream_msg
        [2U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0_deq_rdy 
            = ((1U == (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1_deq_rdy 
            = ((1U == (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2_deq_rdy 
            = ((1U == (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet_ostream_val[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router1__ostream_val
        [0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_cw_val[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router1__ostream_val
        [1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_ccw_val[0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router1__ostream_val
        [2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet_ostream_msg[2U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router2__ostream_msg
        [0U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet_ostream_msg[2U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router2__ostream_msg
        [0U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet_ostream_msg[2U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router2__ostream_msg
        [0U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_cw_msg[2U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router2__ostream_msg
        [1U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_cw_msg[2U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router2__ostream_msg
        [1U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_cw_msg[2U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router2__ostream_msg
        [1U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_ccw_msg[1U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router2__ostream_msg
        [2U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_ccw_msg[1U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router2__ostream_msg
        [2U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_ccw_msg[1U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router2__ostream_msg
        [2U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0_deq_rdy 
            = ((2U == (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1_deq_rdy 
            = ((2U == (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__runit1__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2_deq_rdy 
            = ((2U == (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__runit2__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet_ostream_val[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router2__ostream_val
        [0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_cw_val[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router2__ostream_val
        [1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_ccw_val[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router2__ostream_val
        [2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet_ostream_msg[3U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router3__ostream_msg
        [0U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet_ostream_msg[3U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router3__ostream_msg
        [0U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet_ostream_msg[3U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router3__ostream_msg
        [0U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_cw_msg[3U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router3__ostream_msg
        [1U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_cw_msg[3U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router3__ostream_msg
        [1U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_cw_msg[3U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router3__ostream_msg
        [1U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_ccw_msg[2U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router3__ostream_msg
        [2U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_ccw_msg[2U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router3__ostream_msg
        [2U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_ccw_msg[2U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router3__ostream_msg
        [2U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0_deq_rdy 
            = ((3U == (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__runit0__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1_deq_rdy 
            = ((3U == (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__runit1__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2_deq_rdy 
            = ((3U == (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__runit2__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet_ostream_val[3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router3__ostream_val
        [0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_cw_val[3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router3__ostream_val
        [1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_ccw_val[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router3__ostream_val
        [2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_msg[0U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router0__ostream_msg
        [0U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_msg[0U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router0__ostream_msg
        [0U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_msg[0U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router0__ostream_msg
        [0U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_msg[0U][3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router0__ostream_msg
        [0U][3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_msg[0U][4U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router0__ostream_msg
        [0U][4U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_msg[0U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router0__ostream_msg
        [1U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_msg[0U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router0__ostream_msg
        [1U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_msg[0U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router0__ostream_msg
        [1U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_msg[0U][3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router0__ostream_msg
        [1U][3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_msg[0U][4U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router0__ostream_msg
        [1U][4U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_msg[3U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router0__ostream_msg
        [2U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_msg[3U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router0__ostream_msg
        [2U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_msg[3U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router0__ostream_msg
        [2U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_msg[3U][3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router0__ostream_msg
        [2U][3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_msg[3U][4U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router0__ostream_msg
        [2U][4U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0_deq_rdy 
            = ((0U == (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__runit0__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1_deq_rdy 
            = ((0U == (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__runit1__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2_deq_rdy 
            = ((0U == (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__runit2__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_val[0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router0__ostream_val
        [0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_val[0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router0__ostream_val
        [1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_val[3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router0__ostream_val
        [2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_msg[1U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router1__ostream_msg
        [0U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_msg[1U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router1__ostream_msg
        [0U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_msg[1U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router1__ostream_msg
        [0U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_msg[1U][3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router1__ostream_msg
        [0U][3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_msg[1U][4U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router1__ostream_msg
        [0U][4U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_msg[1U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router1__ostream_msg
        [1U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_msg[1U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router1__ostream_msg
        [1U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_msg[1U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router1__ostream_msg
        [1U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_msg[1U][3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router1__ostream_msg
        [1U][3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_msg[1U][4U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router1__ostream_msg
        [1U][4U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_msg[0U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router1__ostream_msg
        [2U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_msg[0U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router1__ostream_msg
        [2U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_msg[0U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router1__ostream_msg
        [2U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_msg[0U][3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router1__ostream_msg
        [2U][3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_msg[0U][4U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router1__ostream_msg
        [2U][4U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0_deq_rdy 
            = ((1U == (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__runit0__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1_deq_rdy 
            = ((1U == (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__runit1__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2_deq_rdy 
            = ((1U == (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__runit2__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_val[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router1__ostream_val
        [0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_val[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router1__ostream_val
        [1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_val[0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router1__ostream_val
        [2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_msg[2U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg
        [0U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_msg[2U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg
        [0U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_msg[2U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg
        [0U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_msg[2U][3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg
        [0U][3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_msg[2U][4U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg
        [0U][4U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_msg[2U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg
        [1U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_msg[2U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg
        [1U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_msg[2U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg
        [1U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_msg[2U][3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg
        [1U][3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_msg[2U][4U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg
        [1U][4U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_msg[1U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg
        [2U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_msg[1U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg
        [2U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_msg[1U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg
        [2U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_msg[1U][3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg
        [2U][3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_msg[1U][4U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg
        [2U][4U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0_deq_rdy 
            = ((2U == (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1_deq_rdy 
            = ((2U == (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2_deq_rdy 
            = ((2U == (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_val[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router2__ostream_val
        [0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_val[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router2__ostream_val
        [1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_val[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router2__ostream_val
        [2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_msg[3U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg
        [0U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_msg[3U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg
        [0U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_msg[3U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg
        [0U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_msg[3U][3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg
        [0U][3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_msg[3U][4U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg
        [0U][4U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_msg[3U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg
        [1U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_msg[3U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg
        [1U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_msg[3U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg
        [1U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_msg[3U][3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg
        [1U][3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_msg[3U][4U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg
        [1U][4U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_msg[2U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg
        [2U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_msg[2U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg
        [2U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_msg[2U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg
        [2U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_msg[2U][3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg
        [2U][3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_msg[2U][4U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg
        [2U][4U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0_deq_rdy 
            = ((3U == (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1_deq_rdy 
            = ((3U == (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2_deq_rdy 
            = ((3U == (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_val[3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router3__ostream_val
        [0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_val[3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router3__ostream_val
        [1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_val[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router3__ostream_val
        [2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__channels_cw_msg[0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router0__ostream_msg
        [1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__channels_ccw_msg[3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router0__ostream_msg
        [2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet_ostream_msg[0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router0__ostream_msg
        [0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet_ostream_val[0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router0__ostream_val
        [0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__channels_cw_val[0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router0__ostream_val
        [1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__channels_ccw_val[3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router0__ostream_val
        [2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__channels_cw_msg[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router1__ostream_msg
        [1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__channels_ccw_msg[0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router1__ostream_msg
        [2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet_ostream_msg[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router1__ostream_msg
        [0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet_ostream_val[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router1__ostream_val
        [0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__channels_cw_val[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router1__ostream_val
        [1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__channels_ccw_val[0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router1__ostream_val
        [2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__channels_cw_msg[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router2__ostream_msg
        [1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__channels_ccw_msg[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router2__ostream_msg
        [2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet_ostream_msg[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router2__ostream_msg
        [0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet_ostream_val[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router2__ostream_val
        [0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__channels_cw_val[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router2__ostream_val
        [1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__channels_ccw_val[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router2__ostream_val
        [2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__channels_cw_msg[3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router3__ostream_msg
        [1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__channels_ccw_msg[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router3__ostream_msg
        [2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet_ostream_msg[3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router3__ostream_msg
        [0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet_ostream_val[3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router3__ostream_val
        [0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__channels_cw_val[3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router3__ostream_val
        [1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__channels_ccw_val[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router3__ostream_val
        [2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0_deq_rdy 
            = ((0U == (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1_deq_rdy 
            = ((0U == (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2_deq_rdy 
            = ((0U == (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0_deq_rdy 
            = ((1U == (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1_deq_rdy 
            = ((1U == (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2_deq_rdy 
            = ((1U == (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0_deq_rdy 
            = ((2U == (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1_deq_rdy 
            = ((2U == (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2_deq_rdy 
            = ((2U == (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0_deq_rdy 
            = ((3U == (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1_deq_rdy 
            = ((3U == (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2_deq_rdy 
            = ((3U == (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0_deq_rdy));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1_deq_rdy));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2_deq_rdy));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0_deq_rdy));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1_deq_rdy));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2_deq_rdy));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0_deq_rdy));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1_deq_rdy));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2_deq_rdy));
    MultiCoreDataCache_noparam__DOT____Vcellout__v__cache2mem_reqstream_msg[0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet_ostream_msg
        [0U][0U];
    MultiCoreDataCache_noparam__DOT____Vcellout__v__cache2mem_reqstream_msg[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet_ostream_msg
        [0U][1U];
    MultiCoreDataCache_noparam__DOT____Vcellout__v__cache2mem_reqstream_msg[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet_ostream_msg
        [0U][2U];
    MultiCoreDataCache_noparam__DOT____Vcellout__v__cache2mem_reqstream_msg[3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet_ostream_msg
        [0U][3U];
    MultiCoreDataCache_noparam__DOT____Vcellout__v__cache2mem_reqstream_msg[4U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet_ostream_msg
        [0U][4U];
    MultiCoreDataCache_noparam__DOT____Vcellout__v__cache2mem_reqstream_msg[5U] 
        = (0xffffU & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet_ostream_msg
           [0U][5U]);
    MultiCoreDataCache_noparam__DOT____Vcellout__v__cache2mem_reqstream_msg[5U] 
        = ((0xf0ffU & MultiCoreDataCache_noparam__DOT____Vcellout__v__cache2mem_reqstream_msg[5U]) 
           | (0xf00U & (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet_ostream_msg
                        [0U][5U] >> 0x10U)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router0__istream_msg[1U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_msg
        [3U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router0__istream_msg[1U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_msg
        [3U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router0__istream_msg[1U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_msg
        [3U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router0__istream_msg[1U][3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_msg
        [3U][3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router0__istream_msg[1U][4U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_msg
        [3U][4U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router0__istream_msg[1U][5U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_msg
        [3U][5U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router1__istream_msg[1U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_msg
        [0U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router1__istream_msg[1U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_msg
        [0U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router1__istream_msg[1U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_msg
        [0U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router1__istream_msg[1U][3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_msg
        [0U][3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router1__istream_msg[1U][4U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_msg
        [0U][4U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router1__istream_msg[1U][5U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_msg
        [0U][5U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router2__istream_msg[1U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_msg
        [1U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router2__istream_msg[1U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_msg
        [1U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router2__istream_msg[1U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_msg
        [1U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router2__istream_msg[1U][3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_msg
        [1U][3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router2__istream_msg[1U][4U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_msg
        [1U][4U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router2__istream_msg[1U][5U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_msg
        [1U][5U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router3__istream_msg[1U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_msg
        [2U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router3__istream_msg[1U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_msg
        [2U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router3__istream_msg[1U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_msg
        [2U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router3__istream_msg[1U][3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_msg
        [2U][3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router3__istream_msg[1U][4U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_msg
        [2U][4U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router3__istream_msg[1U][5U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_msg
        [2U][5U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router0__istream_msg[2U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_msg
        [0U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router0__istream_msg[2U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_msg
        [0U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router0__istream_msg[2U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_msg
        [0U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router0__istream_msg[2U][3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_msg
        [0U][3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router0__istream_msg[2U][4U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_msg
        [0U][4U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router0__istream_msg[2U][5U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_msg
        [0U][5U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router1__istream_msg[2U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_msg
        [1U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router1__istream_msg[2U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_msg
        [1U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router1__istream_msg[2U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_msg
        [1U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router1__istream_msg[2U][3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_msg
        [1U][3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router1__istream_msg[2U][4U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_msg
        [1U][4U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router1__istream_msg[2U][5U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_msg
        [1U][5U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router2__istream_msg[2U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_msg
        [2U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router2__istream_msg[2U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_msg
        [2U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router2__istream_msg[2U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_msg
        [2U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router2__istream_msg[2U][3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_msg
        [2U][3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router2__istream_msg[2U][4U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_msg
        [2U][4U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router2__istream_msg[2U][5U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_msg
        [2U][5U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router3__istream_msg[2U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_msg
        [3U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router3__istream_msg[2U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_msg
        [3U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router3__istream_msg[2U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_msg
        [3U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router3__istream_msg[2U][3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_msg
        [3U][3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router3__istream_msg[2U][4U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_msg
        [3U][4U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router3__istream_msg[2U][5U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_msg
        [3U][5U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0_deq_rdy));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1_deq_rdy));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2_deq_rdy));
    vlSelf->cache2mem_reqstream_val = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet_ostream_val
        [0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router0__istream_val[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_val
        [3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router1__istream_val[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_val
        [0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router2__istream_val[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_val
        [1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router3__istream_val[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_val
        [2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router0__istream_val[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_val
        [0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router1__istream_val[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_val
        [1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router2__istream_val[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_val
        [2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router3__istream_val[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_val
        [3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0_deq_rdy));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1_deq_rdy));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2_deq_rdy));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0_deq_rdy));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1_deq_rdy));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2_deq_rdy));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0_deq_rdy));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1_deq_rdy));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2_deq_rdy));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHEREQ__BRA__0__KET____DOT__netmsg2cachereq__ostream_msg[0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet_ostream_msg
        [0U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHEREQ__BRA__0__KET____DOT__netmsg2cachereq__ostream_msg[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet_ostream_msg
        [0U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHEREQ__BRA__0__KET____DOT__netmsg2cachereq__ostream_msg[2U] 
        = (0x3fffU & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet_ostream_msg
           [0U][2U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHEREQ__BRA__0__KET____DOT__netmsg2cachereq__ostream_msg[2U] 
        = ((0x3c3fU & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHEREQ__BRA__0__KET____DOT__netmsg2cachereq__ostream_msg[2U]) 
           | (0x3c0U & (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet_ostream_msg
                        [0U][2U] >> 0x10U)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHEREQ__BRA__1__KET____DOT__netmsg2cachereq__ostream_msg[0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet_ostream_msg
        [1U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHEREQ__BRA__1__KET____DOT__netmsg2cachereq__ostream_msg[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet_ostream_msg
        [1U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHEREQ__BRA__1__KET____DOT__netmsg2cachereq__ostream_msg[2U] 
        = (0x3fffU & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet_ostream_msg
           [1U][2U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHEREQ__BRA__1__KET____DOT__netmsg2cachereq__ostream_msg[2U] 
        = ((0x3c3fU & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHEREQ__BRA__1__KET____DOT__netmsg2cachereq__ostream_msg[2U]) 
           | (0x3c0U & (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet_ostream_msg
                        [1U][2U] >> 0x10U)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHEREQ__BRA__2__KET____DOT__netmsg2cachereq__ostream_msg[0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet_ostream_msg
        [2U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHEREQ__BRA__2__KET____DOT__netmsg2cachereq__ostream_msg[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet_ostream_msg
        [2U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHEREQ__BRA__2__KET____DOT__netmsg2cachereq__ostream_msg[2U] 
        = (0x3fffU & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet_ostream_msg
           [2U][2U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHEREQ__BRA__2__KET____DOT__netmsg2cachereq__ostream_msg[2U] 
        = ((0x3c3fU & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHEREQ__BRA__2__KET____DOT__netmsg2cachereq__ostream_msg[2U]) 
           | (0x3c0U & (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet_ostream_msg
                        [2U][2U] >> 0x10U)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHEREQ__BRA__3__KET____DOT__netmsg2cachereq__ostream_msg[0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet_ostream_msg
        [3U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHEREQ__BRA__3__KET____DOT__netmsg2cachereq__ostream_msg[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet_ostream_msg
        [3U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHEREQ__BRA__3__KET____DOT__netmsg2cachereq__ostream_msg[2U] 
        = (0x3fffU & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet_ostream_msg
           [3U][2U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHEREQ__BRA__3__KET____DOT__netmsg2cachereq__ostream_msg[2U] 
        = ((0x3c3fU & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHEREQ__BRA__3__KET____DOT__netmsg2cachereq__ostream_msg[2U]) 
           | (0x3c0U & (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet_ostream_msg
                        [3U][2U] >> 0x10U)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router0__istream_msg[1U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_cw_msg
        [3U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router0__istream_msg[1U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_cw_msg
        [3U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router0__istream_msg[1U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_cw_msg
        [3U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router1__istream_msg[1U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_cw_msg
        [0U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router1__istream_msg[1U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_cw_msg
        [0U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router1__istream_msg[1U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_cw_msg
        [0U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router2__istream_msg[1U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_cw_msg
        [1U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router2__istream_msg[1U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_cw_msg
        [1U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router2__istream_msg[1U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_cw_msg
        [1U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router3__istream_msg[1U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_cw_msg
        [2U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router3__istream_msg[1U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_cw_msg
        [2U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router3__istream_msg[1U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_cw_msg
        [2U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router0__istream_msg[2U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_ccw_msg
        [0U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router0__istream_msg[2U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_ccw_msg
        [0U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router0__istream_msg[2U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_ccw_msg
        [0U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router1__istream_msg[2U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_ccw_msg
        [1U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router1__istream_msg[2U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_ccw_msg
        [1U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router1__istream_msg[2U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_ccw_msg
        [1U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router2__istream_msg[2U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_ccw_msg
        [2U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router2__istream_msg[2U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_ccw_msg
        [2U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router2__istream_msg[2U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_ccw_msg
        [2U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router3__istream_msg[2U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_ccw_msg
        [3U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router3__istream_msg[2U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_ccw_msg
        [3U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router3__istream_msg[2U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_ccw_msg
        [3U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0_deq_rdy));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1_deq_rdy));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2_deq_rdy));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router0__istream_val[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_cw_val
        [3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router1__istream_val[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_cw_val
        [0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router2__istream_val[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_cw_val
        [1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router3__istream_val[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_cw_val
        [2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router0__istream_val[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_ccw_val
        [0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router1__istream_val[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_ccw_val
        [1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router2__istream_val[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_ccw_val
        [2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router3__istream_val[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_ccw_val
        [3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0_deq_rdy));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1_deq_rdy));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2_deq_rdy));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0_deq_rdy));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1_deq_rdy));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2_deq_rdy));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0_deq_rdy));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1_deq_rdy));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2_deq_rdy));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellout__NETMSG2MEMRESP__BRA__0__KET____DOT__netmsg2memresp__ostream_msg[0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_msg
        [0U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellout__NETMSG2MEMRESP__BRA__0__KET____DOT__netmsg2memresp__ostream_msg[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_msg
        [0U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellout__NETMSG2MEMRESP__BRA__0__KET____DOT__netmsg2memresp__ostream_msg[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_msg
        [0U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellout__NETMSG2MEMRESP__BRA__0__KET____DOT__netmsg2memresp__ostream_msg[3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_msg
        [0U][3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellout__NETMSG2MEMRESP__BRA__0__KET____DOT__netmsg2memresp__ostream_msg[4U] 
        = (0x3ffffU & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_msg
           [0U][4U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellout__NETMSG2MEMRESP__BRA__0__KET____DOT__netmsg2memresp__ostream_msg[4U] 
        = (0x3c3ffU & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellout__NETMSG2MEMRESP__BRA__0__KET____DOT__netmsg2memresp__ostream_msg[4U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellout__NETMSG2MEMRESP__BRA__1__KET____DOT__netmsg2memresp__ostream_msg[0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_msg
        [1U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellout__NETMSG2MEMRESP__BRA__1__KET____DOT__netmsg2memresp__ostream_msg[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_msg
        [1U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellout__NETMSG2MEMRESP__BRA__1__KET____DOT__netmsg2memresp__ostream_msg[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_msg
        [1U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellout__NETMSG2MEMRESP__BRA__1__KET____DOT__netmsg2memresp__ostream_msg[3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_msg
        [1U][3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellout__NETMSG2MEMRESP__BRA__1__KET____DOT__netmsg2memresp__ostream_msg[4U] 
        = (0x3ffffU & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_msg
           [1U][4U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellout__NETMSG2MEMRESP__BRA__1__KET____DOT__netmsg2memresp__ostream_msg[4U] 
        = (0x3c3ffU & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellout__NETMSG2MEMRESP__BRA__1__KET____DOT__netmsg2memresp__ostream_msg[4U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellout__NETMSG2MEMRESP__BRA__2__KET____DOT__netmsg2memresp__ostream_msg[0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_msg
        [2U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellout__NETMSG2MEMRESP__BRA__2__KET____DOT__netmsg2memresp__ostream_msg[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_msg
        [2U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellout__NETMSG2MEMRESP__BRA__2__KET____DOT__netmsg2memresp__ostream_msg[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_msg
        [2U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellout__NETMSG2MEMRESP__BRA__2__KET____DOT__netmsg2memresp__ostream_msg[3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_msg
        [2U][3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellout__NETMSG2MEMRESP__BRA__2__KET____DOT__netmsg2memresp__ostream_msg[4U] 
        = (0x3ffffU & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_msg
           [2U][4U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellout__NETMSG2MEMRESP__BRA__2__KET____DOT__netmsg2memresp__ostream_msg[4U] 
        = (0x3c3ffU & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellout__NETMSG2MEMRESP__BRA__2__KET____DOT__netmsg2memresp__ostream_msg[4U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellout__NETMSG2MEMRESP__BRA__3__KET____DOT__netmsg2memresp__ostream_msg[0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_msg
        [3U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellout__NETMSG2MEMRESP__BRA__3__KET____DOT__netmsg2memresp__ostream_msg[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_msg
        [3U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellout__NETMSG2MEMRESP__BRA__3__KET____DOT__netmsg2memresp__ostream_msg[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_msg
        [3U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellout__NETMSG2MEMRESP__BRA__3__KET____DOT__netmsg2memresp__ostream_msg[3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_msg
        [3U][3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellout__NETMSG2MEMRESP__BRA__3__KET____DOT__netmsg2memresp__ostream_msg[4U] 
        = (0x3ffffU & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_msg
           [3U][4U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellout__NETMSG2MEMRESP__BRA__3__KET____DOT__netmsg2memresp__ostream_msg[4U] 
        = (0x3c3ffU & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellout__NETMSG2MEMRESP__BRA__3__KET____DOT__netmsg2memresp__ostream_msg[4U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router0__istream_msg[1U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_msg
        [3U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router0__istream_msg[1U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_msg
        [3U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router0__istream_msg[1U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_msg
        [3U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router0__istream_msg[1U][3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_msg
        [3U][3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router0__istream_msg[1U][4U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_msg
        [3U][4U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router1__istream_msg[1U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_msg
        [0U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router1__istream_msg[1U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_msg
        [0U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router1__istream_msg[1U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_msg
        [0U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router1__istream_msg[1U][3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_msg
        [0U][3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router1__istream_msg[1U][4U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_msg
        [0U][4U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router2__istream_msg[1U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_msg
        [1U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router2__istream_msg[1U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_msg
        [1U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router2__istream_msg[1U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_msg
        [1U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router2__istream_msg[1U][3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_msg
        [1U][3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router2__istream_msg[1U][4U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_msg
        [1U][4U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router3__istream_msg[1U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_msg
        [2U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router3__istream_msg[1U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_msg
        [2U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router3__istream_msg[1U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_msg
        [2U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router3__istream_msg[1U][3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_msg
        [2U][3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router3__istream_msg[1U][4U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_msg
        [2U][4U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router0__istream_msg[2U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_msg
        [0U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router0__istream_msg[2U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_msg
        [0U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router0__istream_msg[2U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_msg
        [0U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router0__istream_msg[2U][3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_msg
        [0U][3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router0__istream_msg[2U][4U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_msg
        [0U][4U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router1__istream_msg[2U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_msg
        [1U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router1__istream_msg[2U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_msg
        [1U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router1__istream_msg[2U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_msg
        [1U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router1__istream_msg[2U][3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_msg
        [1U][3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router1__istream_msg[2U][4U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_msg
        [1U][4U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router2__istream_msg[2U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_msg
        [2U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router2__istream_msg[2U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_msg
        [2U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router2__istream_msg[2U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_msg
        [2U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router2__istream_msg[2U][3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_msg
        [2U][3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router2__istream_msg[2U][4U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_msg
        [2U][4U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router3__istream_msg[2U][0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_msg
        [3U][0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router3__istream_msg[2U][1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_msg
        [3U][1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router3__istream_msg[2U][2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_msg
        [3U][2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router3__istream_msg[2U][3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_msg
        [3U][3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router3__istream_msg[2U][4U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_msg
        [3U][4U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0_deq_rdy));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1_deq_rdy));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2_deq_rdy));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__next_state 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state;
    if ((0U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet_ostream_val
            [0U]) {
            if (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet_ostream_val
                [0U]) {
                vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 1U;
            }
        } else {
            vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0U;
        }
    }
    if ((1U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__next_state 
            = ((2U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out))
                ? 2U : ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__0)
                         ? ((0U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out))
                             ? 3U : 4U) : ((1U & ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__valid_way0)) 
                                                  | (~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__valid_way1))))
                                            ? 5U : 
                                           ((((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__victim_sel)) 
                                              & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__dirty_bits_way0__DOT__rfile
                                              [(7U 
                                                & (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                                                   >> 6U))]) 
                                             | ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__victim_sel) 
                                                & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__dirty_bits_way1__DOT__rfile
                                                [(7U 
                                                  & (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                                                     >> 6U))]))
                                             ? 8U : 5U))));
    }
    if ((0xbU == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacheresp2netmsg_ostream_rdy
            [0U]) {
            if (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacheresp2netmsg_ostream_rdy
                [0U]) {
                vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0U;
            }
        } else {
            vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0xbU;
        }
    }
    if ((2U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0xbU;
    }
    if ((3U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0xbU;
    }
    if ((4U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0xbU;
    }
    if ((8U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 9U;
    }
    if ((9U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreq2netmsg_ostream_rdy
            [0U]) {
            if (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreq2netmsg_ostream_rdy
                [0U]) {
                vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0xaU;
            }
        } else {
            vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 9U;
        }
    }
    if ((0xaU == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_val
            [0U]) {
            if (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_val
                [0U]) {
                vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 5U;
            }
        } else {
            vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0xaU;
        }
    }
    if ((5U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreq2netmsg_ostream_rdy
            [0U]) {
            if (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreq2netmsg_ostream_rdy
                [0U]) {
                vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 6U;
            }
        } else {
            vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 5U;
        }
    }
    if ((6U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_val
            [0U]) {
            if (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_val
                [0U]) {
                vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 7U;
            }
        } else {
            vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 6U;
        }
    }
    if ((7U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if ((0U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out))) {
            vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 3U;
        } else if ((1U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out))) {
            vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 4U;
        }
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__next_state 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state;
    if ((0U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet_ostream_val
            [1U]) {
            if (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet_ostream_val
                [1U]) {
                vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 1U;
            }
        } else {
            vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0U;
        }
    }
    if ((1U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__next_state 
            = ((2U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out))
                ? 2U : ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__0)
                         ? ((0U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out))
                             ? 3U : 4U) : ((1U & ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__valid_way0)) 
                                                  | (~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__valid_way1))))
                                            ? 5U : 
                                           ((((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__victim_sel)) 
                                              & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__dirty_bits_way0__DOT__rfile
                                              [(7U 
                                                & (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                                                   >> 6U))]) 
                                             | ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__victim_sel) 
                                                & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__dirty_bits_way1__DOT__rfile
                                                [(7U 
                                                  & (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                                                     >> 6U))]))
                                             ? 8U : 5U))));
    }
    if ((0xbU == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacheresp2netmsg_ostream_rdy
            [1U]) {
            if (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacheresp2netmsg_ostream_rdy
                [1U]) {
                vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0U;
            }
        } else {
            vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0xbU;
        }
    }
    if ((2U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0xbU;
    }
    if ((3U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0xbU;
    }
    if ((4U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0xbU;
    }
    if ((8U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 9U;
    }
    if ((9U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreq2netmsg_ostream_rdy
            [1U]) {
            if (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreq2netmsg_ostream_rdy
                [1U]) {
                vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0xaU;
            }
        } else {
            vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 9U;
        }
    }
    if ((0xaU == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_val
            [1U]) {
            if (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_val
                [1U]) {
                vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 5U;
            }
        } else {
            vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0xaU;
        }
    }
    if ((5U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreq2netmsg_ostream_rdy
            [1U]) {
            if (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreq2netmsg_ostream_rdy
                [1U]) {
                vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 6U;
            }
        } else {
            vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 5U;
        }
    }
    if ((6U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_val
            [1U]) {
            if (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_val
                [1U]) {
                vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 7U;
            }
        } else {
            vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 6U;
        }
    }
    if ((7U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if ((0U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out))) {
            vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 3U;
        } else if ((1U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out))) {
            vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 4U;
        }
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__next_state 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state;
    if ((0U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet_ostream_val
            [2U]) {
            if (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet_ostream_val
                [2U]) {
                vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 1U;
            }
        } else {
            vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0U;
        }
    }
    if ((1U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__next_state 
            = ((2U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out))
                ? 2U : ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__0)
                         ? ((0U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out))
                             ? 3U : 4U) : ((1U & ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__valid_way0)) 
                                                  | (~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__valid_way1))))
                                            ? 5U : 
                                           ((((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__victim_sel)) 
                                              & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__dirty_bits_way0__DOT__rfile
                                              [(7U 
                                                & (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                                                   >> 6U))]) 
                                             | ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__victim_sel) 
                                                & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__dirty_bits_way1__DOT__rfile
                                                [(7U 
                                                  & (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                                                     >> 6U))]))
                                             ? 8U : 5U))));
    }
    if ((0xbU == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacheresp2netmsg_ostream_rdy
            [2U]) {
            if (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacheresp2netmsg_ostream_rdy
                [2U]) {
                vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0U;
            }
        } else {
            vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0xbU;
        }
    }
    if ((2U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0xbU;
    }
    if ((3U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0xbU;
    }
    if ((4U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0xbU;
    }
    if ((8U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 9U;
    }
    if ((9U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreq2netmsg_ostream_rdy
            [2U]) {
            if (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreq2netmsg_ostream_rdy
                [2U]) {
                vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0xaU;
            }
        } else {
            vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 9U;
        }
    }
    if ((0xaU == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_val
            [2U]) {
            if (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_val
                [2U]) {
                vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 5U;
            }
        } else {
            vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0xaU;
        }
    }
    if ((5U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreq2netmsg_ostream_rdy
            [2U]) {
            if (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreq2netmsg_ostream_rdy
                [2U]) {
                vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 6U;
            }
        } else {
            vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 5U;
        }
    }
    if ((6U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_val
            [2U]) {
            if (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_val
                [2U]) {
                vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 7U;
            }
        } else {
            vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 6U;
        }
    }
    if ((7U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if ((0U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out))) {
            vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 3U;
        } else if ((1U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out))) {
            vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 4U;
        }
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__next_state 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state;
    if ((0U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet_ostream_val
            [3U]) {
            if (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet_ostream_val
                [3U]) {
                vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 1U;
            }
        } else {
            vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0U;
        }
    }
    if ((1U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__next_state 
            = ((2U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out))
                ? 2U : ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__0)
                         ? ((0U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out))
                             ? 3U : 4U) : ((1U & ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__valid_way0)) 
                                                  | (~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__valid_way1))))
                                            ? 5U : 
                                           ((((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__victim_sel)) 
                                              & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__dirty_bits_way0__DOT__rfile
                                              [(7U 
                                                & (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                                                   >> 6U))]) 
                                             | ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__victim_sel) 
                                                & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__dirty_bits_way1__DOT__rfile
                                                [(7U 
                                                  & (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                                                     >> 6U))]))
                                             ? 8U : 5U))));
    }
    if ((0xbU == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacheresp2netmsg_ostream_rdy
            [3U]) {
            if (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacheresp2netmsg_ostream_rdy
                [3U]) {
                vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0U;
            }
        } else {
            vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0xbU;
        }
    }
    if ((2U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0xbU;
    }
    if ((3U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0xbU;
    }
    if ((4U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0xbU;
    }
    if ((8U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 9U;
    }
    if ((9U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreq2netmsg_ostream_rdy
            [3U]) {
            if (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreq2netmsg_ostream_rdy
                [3U]) {
                vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0xaU;
            }
        } else {
            vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 9U;
        }
    }
    if ((0xaU == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_val
            [3U]) {
            if (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_val
                [3U]) {
                vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 5U;
            }
        } else {
            vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0xaU;
        }
    }
    if ((5U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreq2netmsg_ostream_rdy
            [3U]) {
            if (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreq2netmsg_ostream_rdy
                [3U]) {
                vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 6U;
            }
        } else {
            vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 5U;
        }
    }
    if ((6U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_val
            [3U]) {
            if (vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_val
                [3U]) {
                vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 7U;
            }
        } else {
            vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 6U;
        }
    }
    if ((7U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if ((0U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out))) {
            vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 3U;
        } else if ((1U == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out))) {
            vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 4U;
        }
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router0__istream_val[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_val
        [3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router1__istream_val[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_val
        [0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router2__istream_val[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_val
        [1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router3__istream_val[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_val
        [2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router0__istream_val[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_val
        [0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router1__istream_val[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_val
        [1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router2__istream_val[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_val
        [2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router3__istream_val[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_val
        [3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router0__istream_msg[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__channels_cw_msg
        [3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router1__istream_msg[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__channels_cw_msg
        [0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router2__istream_msg[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__channels_cw_msg
        [1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router3__istream_msg[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__channels_cw_msg
        [2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router0__istream_msg[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__channels_ccw_msg
        [0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router1__istream_msg[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__channels_ccw_msg
        [1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router2__istream_msg[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__channels_ccw_msg
        [2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router3__istream_msg[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__channels_ccw_msg
        [3U];
    MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHERESP__BRA__0__KET____DOT__netmsg2cacheresp__ostream_msg 
        = (0xffffffffffffULL & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet_ostream_msg
           [0U]);
    MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHERESP__BRA__0__KET____DOT__netmsg2cacheresp__ostream_msg 
        = (0xf0ffffffffffULL & MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHERESP__BRA__0__KET____DOT__netmsg2cacheresp__ostream_msg);
    MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHERESP__BRA__1__KET____DOT__netmsg2cacheresp__ostream_msg 
        = (0xffffffffffffULL & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet_ostream_msg
           [1U]);
    MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHERESP__BRA__1__KET____DOT__netmsg2cacheresp__ostream_msg 
        = (0xf0ffffffffffULL & MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHERESP__BRA__1__KET____DOT__netmsg2cacheresp__ostream_msg);
    MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHERESP__BRA__2__KET____DOT__netmsg2cacheresp__ostream_msg 
        = (0xffffffffffffULL & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet_ostream_msg
           [2U]);
    MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHERESP__BRA__2__KET____DOT__netmsg2cacheresp__ostream_msg 
        = (0xf0ffffffffffULL & MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHERESP__BRA__2__KET____DOT__netmsg2cacheresp__ostream_msg);
    MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHERESP__BRA__3__KET____DOT__netmsg2cacheresp__ostream_msg 
        = (0xffffffffffffULL & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet_ostream_msg
           [3U]);
    MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHERESP__BRA__3__KET____DOT__netmsg2cacheresp__ostream_msg 
        = (0xf0ffffffffffULL & MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHERESP__BRA__3__KET____DOT__netmsg2cacheresp__ostream_msg);
    vlSelf->MultiCoreDataCache_noparam__DOT____Vcellout__v__proc2cache_respstream_val[0U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet_ostream_val
        [0U];
    vlSelf->MultiCoreDataCache_noparam__DOT____Vcellout__v__proc2cache_respstream_val[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet_ostream_val
        [1U];
    vlSelf->MultiCoreDataCache_noparam__DOT____Vcellout__v__proc2cache_respstream_val[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet_ostream_val
        [2U];
    vlSelf->MultiCoreDataCache_noparam__DOT____Vcellout__v__proc2cache_respstream_val[3U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet_ostream_val
        [3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router0__istream_val[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__channels_cw_val
        [3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router1__istream_val[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__channels_cw_val
        [0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router2__istream_val[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__channels_cw_val
        [1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router3__istream_val[1U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__channels_cw_val
        [2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router0__istream_val[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__channels_ccw_val
        [0U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router1__istream_val[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__channels_ccw_val
        [1U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router2__istream_val[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__channels_ccw_val
        [2U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router3__istream_val[2U] 
        = vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__channels_ccw_val
        [3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0_deq_rdy));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1_deq_rdy));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2_deq_rdy));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0_deq_rdy));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1_deq_rdy));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2_deq_rdy));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0_deq_rdy));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1_deq_rdy));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2_deq_rdy));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0_deq_rdy));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1_deq_rdy));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2_deq_rdy));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->cache2mem_reqstream_msg[0U] = MultiCoreDataCache_noparam__DOT____Vcellout__v__cache2mem_reqstream_msg[0U];
    vlSelf->cache2mem_reqstream_msg[1U] = MultiCoreDataCache_noparam__DOT____Vcellout__v__cache2mem_reqstream_msg[1U];
    vlSelf->cache2mem_reqstream_msg[2U] = MultiCoreDataCache_noparam__DOT____Vcellout__v__cache2mem_reqstream_msg[2U];
    vlSelf->cache2mem_reqstream_msg[3U] = MultiCoreDataCache_noparam__DOT____Vcellout__v__cache2mem_reqstream_msg[3U];
    vlSelf->cache2mem_reqstream_msg[4U] = MultiCoreDataCache_noparam__DOT____Vcellout__v__cache2mem_reqstream_msg[4U];
    vlSelf->cache2mem_reqstream_msg[5U] = MultiCoreDataCache_noparam__DOT____Vcellout__v__cache2mem_reqstream_msg[5U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router0__istream_val
           [0U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router0__istream_val
           [1U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router0__istream_val
           [2U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router1__istream_val
           [0U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router1__istream_val
           [1U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router1__istream_val
           [2U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router2__istream_val
           [0U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router2__istream_val
           [1U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router2__istream_val
           [2U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router3__istream_val
           [0U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router3__istream_val
           [1U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router3__istream_val
           [2U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router0__istream_val
           [0U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router0__istream_val
           [1U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router0__istream_val
           [2U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router1__istream_val
           [0U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router1__istream_val
           [1U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router1__istream_val
           [2U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router2__istream_val
           [0U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router2__istream_val
           [1U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router2__istream_val
           [2U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router3__istream_val
           [0U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router3__istream_val
           [1U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router3__istream_val
           [2U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router0__istream_val
           [0U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router0__istream_val
           [1U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router0__istream_val
           [2U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router1__istream_val
           [0U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router1__istream_val
           [1U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router1__istream_val
           [2U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router2__istream_val
           [0U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router2__istream_val
           [1U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router2__istream_val
           [2U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router3__istream_val
           [0U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router3__istream_val
           [1U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router3__istream_val
           [2U]);
    vlSelf->MultiCoreDataCache_noparam__DOT____Vcellout__v__proc2cache_respstream_msg[0U] 
        = MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHERESP__BRA__0__KET____DOT__netmsg2cacheresp__ostream_msg;
    vlSelf->MultiCoreDataCache_noparam__DOT____Vcellout__v__proc2cache_respstream_msg[1U] 
        = MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHERESP__BRA__1__KET____DOT__netmsg2cacheresp__ostream_msg;
    vlSelf->MultiCoreDataCache_noparam__DOT____Vcellout__v__proc2cache_respstream_msg[2U] 
        = MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHERESP__BRA__2__KET____DOT__netmsg2cacheresp__ostream_msg;
    vlSelf->MultiCoreDataCache_noparam__DOT____Vcellout__v__proc2cache_respstream_msg[3U] 
        = MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHERESP__BRA__3__KET____DOT__netmsg2cacheresp__ostream_msg;
    vlSelf->proc2cache_respstream_val[0U] = vlSelf->MultiCoreDataCache_noparam__DOT____Vcellout__v__proc2cache_respstream_val
        [0U];
    vlSelf->proc2cache_respstream_val[1U] = vlSelf->MultiCoreDataCache_noparam__DOT____Vcellout__v__proc2cache_respstream_val
        [1U];
    vlSelf->proc2cache_respstream_val[2U] = vlSelf->MultiCoreDataCache_noparam__DOT____Vcellout__v__proc2cache_respstream_val
        [2U];
    vlSelf->proc2cache_respstream_val[3U] = vlSelf->MultiCoreDataCache_noparam__DOT____Vcellout__v__proc2cache_respstream_val
        [3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router0__istream_val
           [0U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router0__istream_val
           [1U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router0__istream_val
           [2U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router1__istream_val
           [0U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router1__istream_val
           [1U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router1__istream_val
           [2U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router2__istream_val
           [0U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router2__istream_val
           [1U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router2__istream_val
           [2U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router3__istream_val
           [0U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router3__istream_val
           [1U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router3__istream_val
           [2U]);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->proc2cache_respstream_msg[0U] = vlSelf->MultiCoreDataCache_noparam__DOT____Vcellout__v__proc2cache_respstream_msg
        [0U];
    vlSelf->proc2cache_respstream_msg[1U] = vlSelf->MultiCoreDataCache_noparam__DOT____Vcellout__v__proc2cache_respstream_msg
        [1U];
    vlSelf->proc2cache_respstream_msg[2U] = vlSelf->MultiCoreDataCache_noparam__DOT____Vcellout__v__proc2cache_respstream_msg
        [2U];
    vlSelf->proc2cache_respstream_msg[3U] = vlSelf->MultiCoreDataCache_noparam__DOT____Vcellout__v__proc2cache_respstream_msg
        [3U];
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
}

VL_ATTR_COLD void VMultiCoreDataCache_noparam___024root___eval_triggers__stl(VMultiCoreDataCache_noparam___024root* vlSelf);
VL_ATTR_COLD void VMultiCoreDataCache_noparam___024root___eval_stl(VMultiCoreDataCache_noparam___024root* vlSelf);

VL_ATTR_COLD bool VMultiCoreDataCache_noparam___024root___eval_phase__stl(VMultiCoreDataCache_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMultiCoreDataCache_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VMultiCoreDataCache_noparam___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VMultiCoreDataCache_noparam___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMultiCoreDataCache_noparam___024root___dump_triggers__ico(VMultiCoreDataCache_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMultiCoreDataCache_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void VMultiCoreDataCache_noparam___024root___dump_triggers__act(VMultiCoreDataCache_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMultiCoreDataCache_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void VMultiCoreDataCache_noparam___024root___dump_triggers__nba(VMultiCoreDataCache_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMultiCoreDataCache_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root___dump_triggers__nba\n"); );
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

VL_ATTR_COLD void VMultiCoreDataCache_noparam___024root___ctor_var_reset(VMultiCoreDataCache_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMultiCoreDataCache_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(176, vlSelf->cache2mem_reqstream_msg);
    vlSelf->cache2mem_reqstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->cache2mem_reqstream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(146, vlSelf->cache2mem_respstream_msg);
    vlSelf->cache2mem_respstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->cache2mem_respstream_val = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(78, vlSelf->proc2cache_reqstream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->proc2cache_reqstream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->proc2cache_reqstream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->proc2cache_respstream_msg[__Vi0] = VL_RAND_RESET_Q(48);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->proc2cache_respstream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->proc2cache_respstream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT____Vcellout__v__proc2cache_respstream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT____Vcellinp__v__proc2cache_respstream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT____Vcellout__v__proc2cache_respstream_msg[__Vi0] = VL_RAND_RESET_Q(48);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT____Vcellinp__v__proc2cache_reqstream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT____Vcellout__v__proc2cache_reqstream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(78, vlSelf->MultiCoreDataCache_noparam__DOT____Vcellinp__v__proc2cache_reqstream_msg[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT____Vcellout__DCACHE__BRA__0__KET____DOT__dcache__cache2mem_respstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT____Vcellout__DCACHE__BRA__0__KET____DOT__dcache__cache2mem_reqstream_val = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT____Vcellout__DCACHE__BRA__0__KET____DOT__dcache__proc2cache_respstream_val = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT____Vcellout__DCACHE__BRA__0__KET____DOT__dcache__proc2cache_reqstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT____Vcellout__DCACHE__BRA__1__KET____DOT__dcache__cache2mem_respstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT____Vcellout__DCACHE__BRA__1__KET____DOT__dcache__cache2mem_reqstream_val = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT____Vcellout__DCACHE__BRA__1__KET____DOT__dcache__proc2cache_respstream_val = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT____Vcellout__DCACHE__BRA__1__KET____DOT__dcache__proc2cache_reqstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT____Vcellout__DCACHE__BRA__2__KET____DOT__dcache__cache2mem_respstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT____Vcellout__DCACHE__BRA__2__KET____DOT__dcache__cache2mem_reqstream_val = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT____Vcellout__DCACHE__BRA__2__KET____DOT__dcache__proc2cache_respstream_val = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT____Vcellout__DCACHE__BRA__2__KET____DOT__dcache__proc2cache_reqstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT____Vcellout__DCACHE__BRA__3__KET____DOT__dcache__cache2mem_respstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT____Vcellout__DCACHE__BRA__3__KET____DOT__dcache__cache2mem_reqstream_val = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT____Vcellout__DCACHE__BRA__3__KET____DOT__dcache__proc2cache_respstream_val = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT____Vcellout__DCACHE__BRA__3__KET____DOT__dcache__proc2cache_reqstream_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereq2netmsg_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereq2netmsg_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereq2netmsg_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacheresp2netmsg_ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacheresp2netmsg_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacheresp2netmsg_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet_ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    VL_RAND_RESET_W(78, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHEREQ__BRA__0__KET____DOT__netmsg2cachereq__ostream_msg);
    VL_RAND_RESET_W(78, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHEREQ__BRA__1__KET____DOT__netmsg2cachereq__ostream_msg);
    VL_RAND_RESET_W(78, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHEREQ__BRA__2__KET____DOT__netmsg2cachereq__ostream_msg);
    VL_RAND_RESET_W(78, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT____Vcellout__NETMSG2CACHEREQ__BRA__3__KET____DOT__netmsg2cachereq__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_cw_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_cw_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_cw_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_ccw_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_ccw_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__channels_ccw_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router0__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router0__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router0__ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router0__istream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router1__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router1__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router1__ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router1__istream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router2__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router2__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router2__ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router2__istream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router3__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router3__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router3__ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellout__router3__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router3__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router3__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__runit0__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__runit1__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__runit2__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__ostream0_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__runit1__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__runit2__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__ostream0_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__ostream1_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__ostream2_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__runit0__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__runit1__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__runit2__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__ostream0_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__ostream1_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__ostream2_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cachereqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__channels_cw_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__channels_cw_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__channels_cw_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__channels_ccw_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__channels_ccw_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__channels_ccw_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router0__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router0__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router0__ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router0__istream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router1__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router1__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router1__ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router1__istream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router2__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router2__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router2__ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router2__istream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router3__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router3__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router3__ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellout__router3__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router3__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router3__istream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__routeunit0_ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__routeunit1_ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__routeunit2_ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg = VL_RAND_RESET_Q(60);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg = VL_RAND_RESET_Q(60);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg = VL_RAND_RESET_Q(60);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__routeunit0_ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__routeunit1_ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__routeunit2_ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg = VL_RAND_RESET_Q(60);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg = VL_RAND_RESET_Q(60);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg = VL_RAND_RESET_Q(60);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__routeunit0_ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__routeunit1_ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__routeunit2_ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg = VL_RAND_RESET_Q(60);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg = VL_RAND_RESET_Q(60);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg = VL_RAND_RESET_Q(60);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__routeunit0_ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__routeunit1_ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__routeunit2_ostream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg = VL_RAND_RESET_Q(60);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg = VL_RAND_RESET_Q(60);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg = VL_RAND_RESET_Q(60);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0] = VL_RAND_RESET_Q(60);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__cachenet__DOT__cacherespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreq2netmsg_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreq2netmsg_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreq2netmsg_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memresp2netmsg_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memresp2netmsg_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memresp2netmsg_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    VL_RAND_RESET_W(176, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellinp__MEMREQ2NETMSG__BRA__0__KET____DOT__memreq2netmsg__istream_msg);
    VL_RAND_RESET_W(176, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellinp__MEMREQ2NETMSG__BRA__1__KET____DOT__memreq2netmsg__istream_msg);
    VL_RAND_RESET_W(176, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellinp__MEMREQ2NETMSG__BRA__2__KET____DOT__memreq2netmsg__istream_msg);
    VL_RAND_RESET_W(176, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellinp__MEMREQ2NETMSG__BRA__3__KET____DOT__memreq2netmsg__istream_msg);
    VL_RAND_RESET_W(146, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellout__NETMSG2MEMRESP__BRA__0__KET____DOT__netmsg2memresp__ostream_msg);
    VL_RAND_RESET_W(146, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellout__NETMSG2MEMRESP__BRA__1__KET____DOT__netmsg2memresp__ostream_msg);
    VL_RAND_RESET_W(146, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellout__NETMSG2MEMRESP__BRA__2__KET____DOT__netmsg2memresp__ostream_msg);
    VL_RAND_RESET_W(146, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT____Vcellout__NETMSG2MEMRESP__BRA__3__KET____DOT__netmsg2memresp__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_cw_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__channels_ccw_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router0__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router0__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router0__ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router0__istream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router1__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router1__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router1__ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router1__istream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router2__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router2__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router2__ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router2__istream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router3__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router3__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router3__ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellout__router3__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router3__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router3__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__runit0__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__runit1__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__runit2__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__ostream0_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(188, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memreqnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_cw_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__channels_ccw_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router0__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router0__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router0__ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router0__istream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router1__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router1__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router1__ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router1__istream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router2__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router2__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router2__ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router2__istream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router3__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router3__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router3__ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellout__router3__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router3__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router3__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__runit0__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__runit1__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__runit2__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__ostream0_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__ostream1_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__ostream2_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__runit0__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__runit1__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__runit2__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__ostream0_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__ostream1_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__ostream2_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_msg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(158, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__0__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__1__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__2__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__cw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__memnet__DOT__memrespnet__DOT__CHANNEL_TRACE__BRA__3__KET____DOT__ccw_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__cachereq_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__memresp_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__write_data_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__wben_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__data_array_ren = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__data_array_wen = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__tag_array_ren = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__tag_array_wen_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__tag_array_wen_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__read_data_reg_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__read_data_zero_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__evict_addr_reg_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__mem_req_addr_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__cacheresp_type = VL_RAND_RESET_I(4);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__memreq_type = VL_RAND_RESET_I(4);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state = VL_RAND_RESET_I(5);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__next_state = VL_RAND_RESET_I(5);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__valid_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__valid_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wen_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wen_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__hit_w1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wdata = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wen = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__victim_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__hit_out = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__hit_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__valid_bits_way0__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__valid_bits_way1__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__dirty_bits_way0__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__dirty_bits_way1__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__use_bits__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__cachereq_opaque_reg_out = VL_RAND_RESET_I(8);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out = VL_RAND_RESET_I(4);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__cachereq_data_reg_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__wben_mux_out = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(128, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__memresp_data_reg_out);
    VL_RAND_RESET_W(128, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__tag_array0_out = VL_RAND_RESET_I(24);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__tag_array1_out = VL_RAND_RESET_I(24);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__evict_addr_reg_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__active_way = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT____Vcellinp__data_array_way0__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT____Vcellinp__data_array_way1__write_en = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__read_data_reg_out);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__tag_array_way0__DOT__mem[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__tag_array_way1__DOT__mem[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__data_array_way0__DOT__mem[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__data_array_way1__DOT__mem[__Vi0]);
    }
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__data = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cachereq_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__memresp_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__write_data_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__wben_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__data_array_ren = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__data_array_wen = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__tag_array_ren = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__tag_array_wen_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__tag_array_wen_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__read_data_reg_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__read_data_zero_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__evict_addr_reg_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__mem_req_addr_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cacheresp_type = VL_RAND_RESET_I(4);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__memreq_type = VL_RAND_RESET_I(4);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state = VL_RAND_RESET_I(5);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__next_state = VL_RAND_RESET_I(5);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__valid_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__valid_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wen_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wen_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__hit_w1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wdata = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wen = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__victim_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__hit_out = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__hit_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__valid_bits_way0__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__valid_bits_way1__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__dirty_bits_way0__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__dirty_bits_way1__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__use_bits__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__cachereq_opaque_reg_out = VL_RAND_RESET_I(8);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out = VL_RAND_RESET_I(4);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__cachereq_data_reg_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__wben_mux_out = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(128, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__memresp_data_reg_out);
    VL_RAND_RESET_W(128, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__tag_array0_out = VL_RAND_RESET_I(24);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__tag_array1_out = VL_RAND_RESET_I(24);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__evict_addr_reg_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__active_way = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT____Vcellinp__data_array_way0__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT____Vcellinp__data_array_way1__write_en = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__read_data_reg_out);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__tag_array_way0__DOT__mem[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__tag_array_way1__DOT__mem[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__data_array_way0__DOT__mem[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__data_array_way1__DOT__mem[__Vi0]);
    }
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__data = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cachereq_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__memresp_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__write_data_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__wben_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__data_array_ren = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__data_array_wen = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__tag_array_ren = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__tag_array_wen_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__tag_array_wen_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__read_data_reg_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__read_data_zero_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__evict_addr_reg_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__mem_req_addr_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cacheresp_type = VL_RAND_RESET_I(4);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__memreq_type = VL_RAND_RESET_I(4);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state = VL_RAND_RESET_I(5);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__next_state = VL_RAND_RESET_I(5);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__valid_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__valid_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wen_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wen_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__hit_w1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wdata = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wen = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__victim_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__hit_out = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__hit_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__valid_bits_way0__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__valid_bits_way1__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__dirty_bits_way0__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__dirty_bits_way1__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__use_bits__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__cachereq_opaque_reg_out = VL_RAND_RESET_I(8);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out = VL_RAND_RESET_I(4);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__cachereq_data_reg_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__wben_mux_out = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(128, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__memresp_data_reg_out);
    VL_RAND_RESET_W(128, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__tag_array0_out = VL_RAND_RESET_I(24);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__tag_array1_out = VL_RAND_RESET_I(24);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__evict_addr_reg_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__active_way = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT____Vcellinp__data_array_way0__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT____Vcellinp__data_array_way1__write_en = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__read_data_reg_out);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__tag_array_way0__DOT__mem[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__tag_array_way1__DOT__mem[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__data_array_way0__DOT__mem[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__data_array_way1__DOT__mem[__Vi0]);
    }
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__data = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cachereq_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__memresp_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__write_data_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__wben_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__data_array_ren = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__data_array_wen = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__tag_array_ren = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__tag_array_wen_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__tag_array_wen_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__read_data_reg_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__read_data_zero_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__evict_addr_reg_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__mem_req_addr_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cacheresp_type = VL_RAND_RESET_I(4);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__memreq_type = VL_RAND_RESET_I(4);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state = VL_RAND_RESET_I(5);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__next_state = VL_RAND_RESET_I(5);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__valid_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__valid_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wen_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wen_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__hit_w1 = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wdata = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wen = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__victim_sel = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__hit_out = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__hit_next = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__valid_bits_way0__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__valid_bits_way1__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__dirty_bits_way0__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__dirty_bits_way1__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__use_bits__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__cachereq_opaque_reg_out = VL_RAND_RESET_I(8);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out = VL_RAND_RESET_I(4);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__cachereq_data_reg_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__wben_mux_out = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(128, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__memresp_data_reg_out);
    VL_RAND_RESET_W(128, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__tag_array0_out = VL_RAND_RESET_I(24);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__tag_array1_out = VL_RAND_RESET_I(24);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__evict_addr_reg_out = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__active_way = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT____Vcellinp__data_array_way0__write_en = VL_RAND_RESET_I(1);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT____Vcellinp__data_array_way1__write_en = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__read_data_reg_out);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__tag_array_way0__DOT__mem[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__tag_array_way1__DOT__mem[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__data_array_way0__DOT__mem[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__data_array_way1__DOT__mem[__Vi0]);
    }
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__data = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__str);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->__Vdpi_export_trigger = 0;
    vlSelf->__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__cs__2479__cs_cacheresp_type = VL_RAND_RESET_I(4);
    vlSelf->__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__cs__2545__cs_cacheresp_type = VL_RAND_RESET_I(4);
    vlSelf->__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__cs__2611__cs_cacheresp_type = VL_RAND_RESET_I(4);
    vlSelf->__Vtask_MultiCoreDataCache_noparam__DOT__v__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__cs__2677__cs_cacheresp_type = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = VL_RAND_RESET_I(1);
}
