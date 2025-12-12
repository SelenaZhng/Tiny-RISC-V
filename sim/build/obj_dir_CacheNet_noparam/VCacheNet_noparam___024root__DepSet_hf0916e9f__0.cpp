// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCacheNet_noparam.h for the primary calling header

#include "VCacheNet_noparam__pch.h"
#include "VCacheNet_noparam___024root.h"

void VCacheNet_noparam___024root___ico_sequent__TOP__0(VCacheNet_noparam___024root* vlSelf);

void VCacheNet_noparam___024root___eval_ico(VCacheNet_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCacheNet_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VCacheNet_noparam___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VCacheNet_noparam___024root___ico_sequent__TOP__0(VCacheNet_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCacheNet_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
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
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router0__ostream_rdy
            [0U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router0__ostream_rdy
            [0U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router0__ostream_rdy
            [0U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router0__ostream_rdy
            [1U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router0__ostream_rdy
            [1U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router0__ostream_rdy
            [1U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router0__ostream_rdy
            [2U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router0__ostream_rdy
            [2U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router0__ostream_rdy
            [2U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router1__ostream_rdy
            [0U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router1__ostream_rdy
            [0U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router1__ostream_rdy
            [0U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router1__ostream_rdy
            [1U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router1__ostream_rdy
            [1U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router1__ostream_rdy
            [1U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router1__ostream_rdy
            [2U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router1__ostream_rdy
            [2U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router1__ostream_rdy
            [2U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router2__ostream_rdy
            [0U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router2__ostream_rdy
            [0U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router2__ostream_rdy
            [0U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router2__ostream_rdy
            [1U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router2__ostream_rdy
            [1U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router2__ostream_rdy
            [1U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router2__ostream_rdy
            [2U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router2__ostream_rdy
            [2U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router2__ostream_rdy
            [2U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router3__ostream_rdy
            [0U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router3__ostream_rdy
            [0U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router3__ostream_rdy
            [0U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router3__ostream_rdy
            [1U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router3__ostream_rdy
            [1U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router3__ostream_rdy
            [1U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router3__ostream_rdy
            [2U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router3__ostream_rdy
            [2U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router3__ostream_rdy
            [2U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__ostream_rdy
            [0U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__ostream_rdy
            [0U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__ostream_rdy
            [0U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__ostream_rdy
            [1U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__ostream_rdy
            [1U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__ostream_rdy
            [1U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__ostream_rdy
            [2U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__ostream_rdy
            [2U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__ostream_rdy
            [2U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__ostream_rdy
            [0U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__ostream_rdy
            [0U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__ostream_rdy
            [0U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__ostream_rdy
            [1U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__ostream_rdy
            [1U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__ostream_rdy
            [1U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__ostream_rdy
            [2U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__ostream_rdy
            [2U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__ostream_rdy
            [2U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__ostream_rdy
            [0U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__ostream_rdy
            [0U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__ostream_rdy
            [0U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__ostream_rdy
            [1U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__ostream_rdy
            [1U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__ostream_rdy
            [1U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__ostream_rdy
            [2U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__ostream_rdy
            [2U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__ostream_rdy
            [2U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__ostream_rdy
            [0U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__ostream_rdy
            [0U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__ostream_rdy
            [0U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__ostream_rdy
            [1U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__ostream_rdy
            [1U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__ostream_rdy
            [1U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__ostream_rdy
            [2U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__ostream_rdy
            [2U];
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__ostream_rdy
            [2U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
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
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
}

void VCacheNet_noparam___024root___eval_triggers__ico(VCacheNet_noparam___024root* vlSelf);

bool VCacheNet_noparam___024root___eval_phase__ico(VCacheNet_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCacheNet_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VCacheNet_noparam___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VCacheNet_noparam___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VCacheNet_noparam___024root___eval_act(VCacheNet_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCacheNet_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root___eval_act\n"); );
}

void VCacheNet_noparam___024root___nba_sequent__TOP__0(VCacheNet_noparam___024root* vlSelf);

void VCacheNet_noparam___024root___eval_nba(VCacheNet_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCacheNet_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VCacheNet_noparam___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VCacheNet_noparam___024root___nba_sequent__TOP__0(VCacheNet_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCacheNet_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheNet_noparam___024root___nba_sequent__TOP__0\n"); );
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
    VlWide<3>/*89:0*/ __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    VL_ZERO_W(90, __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0);
    CData/*1:0*/ __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    VlWide<3>/*89:0*/ __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    VL_ZERO_W(90, __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0);
    CData/*1:0*/ __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    VlWide<3>/*89:0*/ __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    VL_ZERO_W(90, __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0);
    CData/*1:0*/ __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    VlWide<3>/*89:0*/ __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    VL_ZERO_W(90, __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0);
    CData/*1:0*/ __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    VlWide<3>/*89:0*/ __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    VL_ZERO_W(90, __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0);
    CData/*1:0*/ __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    VlWide<3>/*89:0*/ __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    VL_ZERO_W(90, __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0);
    CData/*1:0*/ __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    VlWide<3>/*89:0*/ __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    VL_ZERO_W(90, __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0);
    CData/*1:0*/ __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    VlWide<3>/*89:0*/ __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    VL_ZERO_W(90, __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0);
    CData/*1:0*/ __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    VlWide<3>/*89:0*/ __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    VL_ZERO_W(90, __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0);
    CData/*1:0*/ __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    VlWide<3>/*89:0*/ __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    VL_ZERO_W(90, __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0);
    CData/*1:0*/ __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    VlWide<3>/*89:0*/ __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    VL_ZERO_W(90, __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0);
    CData/*1:0*/ __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    VlWide<3>/*89:0*/ __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    VL_ZERO_W(90, __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0);
    CData/*1:0*/ __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    QData/*59:0*/ __VdlyVal__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyVal__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*1:0*/ __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    QData/*59:0*/ __VdlyVal__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyVal__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*1:0*/ __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    QData/*59:0*/ __VdlyVal__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyVal__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*1:0*/ __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    QData/*59:0*/ __VdlyVal__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyVal__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*1:0*/ __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    QData/*59:0*/ __VdlyVal__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyVal__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*1:0*/ __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    QData/*59:0*/ __VdlyVal__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyVal__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*1:0*/ __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    QData/*59:0*/ __VdlyVal__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyVal__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*1:0*/ __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    QData/*59:0*/ __VdlyVal__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyVal__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*1:0*/ __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    QData/*59:0*/ __VdlyVal__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyVal__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*1:0*/ __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    QData/*59:0*/ __VdlyVal__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyVal__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*1:0*/ __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    QData/*59:0*/ __VdlyVal__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyVal__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*1:0*/ __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    QData/*59:0*/ __VdlyVal__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyVal__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*1:0*/ __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*0:0*/ __VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*0:0*/ __VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*0:0*/ __VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*0:0*/ __VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*0:0*/ __VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*0:0*/ __VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*0:0*/ __VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*0:0*/ __VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*0:0*/ __VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*0:0*/ __VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*0:0*/ __VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*0:0*/ __VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*0:0*/ __VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*0:0*/ __VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*0:0*/ __VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*0:0*/ __VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*0:0*/ __VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*0:0*/ __VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*0:0*/ __VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*0:0*/ __VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*0:0*/ __VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*0:0*/ __VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*0:0*/ __VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*0:0*/ __VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    // Body
    __VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0U;
    __VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0U;
    __VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0U;
    __VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0U;
    __VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0U;
    __VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0U;
    __VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0U;
    __VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0U;
    __VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0U;
    __VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0U;
    __VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0U;
    __VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0U;
    __VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0U;
    __VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0U;
    __VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0U;
    __VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0U;
    __VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0U;
    __VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0U;
    __VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0U;
    __VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0U;
    __VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0U;
    __VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0U;
    __VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0U;
    __VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en) {
        __VdlyVal__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router3__istream_msg
            [2U];
        __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr;
        __VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 1U;
    }
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en) {
        __VdlyVal__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router3__istream_msg
            [1U];
        __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr;
        __VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 1U;
    }
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en) {
        __VdlyVal__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router3__istream_msg
            [0U];
        __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr;
        __VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 1U;
    }
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en) {
        __VdlyVal__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router2__istream_msg
            [2U];
        __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr;
        __VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 1U;
    }
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en) {
        __VdlyVal__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router2__istream_msg
            [1U];
        __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr;
        __VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 1U;
    }
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en) {
        __VdlyVal__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router2__istream_msg
            [0U];
        __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr;
        __VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 1U;
    }
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en) {
        __VdlyVal__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router1__istream_msg
            [2U];
        __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr;
        __VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 1U;
    }
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en) {
        __VdlyVal__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router1__istream_msg
            [1U];
        __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr;
        __VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 1U;
    }
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en) {
        __VdlyVal__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router1__istream_msg
            [0U];
        __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr;
        __VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 1U;
    }
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en) {
        __VdlyVal__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router0__istream_msg
            [2U];
        __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr;
        __VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 1U;
    }
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en) {
        __VdlyVal__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router0__istream_msg
            [1U];
        __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr;
        __VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 1U;
    }
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en) {
        __VdlyVal__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router0__istream_msg
            [0U];
        __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr;
        __VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 1U;
    }
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en) {
        __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__istream_msg
            [2U][0U];
        __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__istream_msg
            [2U][1U];
        __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__istream_msg
            [2U][2U];
        __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr;
        __VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 1U;
    }
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en) {
        __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__istream_msg
            [1U][0U];
        __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__istream_msg
            [1U][1U];
        __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__istream_msg
            [1U][2U];
        __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr;
        __VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 1U;
    }
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en) {
        __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__istream_msg
            [0U][0U];
        __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__istream_msg
            [0U][1U];
        __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__istream_msg
            [0U][2U];
        __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr;
        __VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 1U;
    }
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en) {
        __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__istream_msg
            [2U][0U];
        __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__istream_msg
            [2U][1U];
        __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__istream_msg
            [2U][2U];
        __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr;
        __VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 1U;
    }
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en) {
        __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__istream_msg
            [1U][0U];
        __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__istream_msg
            [1U][1U];
        __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__istream_msg
            [1U][2U];
        __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr;
        __VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 1U;
    }
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en) {
        __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__istream_msg
            [0U][0U];
        __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__istream_msg
            [0U][1U];
        __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__istream_msg
            [0U][2U];
        __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr;
        __VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 1U;
    }
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en) {
        __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__istream_msg
            [2U][0U];
        __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__istream_msg
            [2U][1U];
        __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__istream_msg
            [2U][2U];
        __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr;
        __VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 1U;
    }
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en) {
        __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__istream_msg
            [1U][0U];
        __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__istream_msg
            [1U][1U];
        __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__istream_msg
            [1U][2U];
        __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr;
        __VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 1U;
    }
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en) {
        __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__istream_msg
            [0U][0U];
        __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__istream_msg
            [0U][1U];
        __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__istream_msg
            [0U][2U];
        __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr;
        __VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 1U;
    }
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en) {
        __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__istream_msg
            [2U][0U];
        __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__istream_msg
            [2U][1U];
        __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__istream_msg
            [2U][2U];
        __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr;
        __VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 1U;
    }
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en) {
        __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__istream_msg
            [1U][0U];
        __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__istream_msg
            [1U][1U];
        __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__istream_msg
            [1U][2U];
        __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr;
        __VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 1U;
    }
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en) {
        __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__istream_msg
            [0U][0U];
        __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__istream_msg
            [0U][1U];
        __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__istream_msg
            [0U][2U];
        __VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr;
        __VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = 0U;
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = 0U;
    } else {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full 
            = (1U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full 
            = (1U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full 
            = (1U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full 
            = (1U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full 
            = (1U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full 
            = (1U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full 
            = (1U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full 
            = (1U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full 
            = (1U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full 
            = (1U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full 
            = (1U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full 
            = (1U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full 
            = (1U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full 
            = (1U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full 
            = (1U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full 
            = (1U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full 
            = (1U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full 
            = (1U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full 
            = (1U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full 
            = (1U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full 
            = (1U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full 
            = (1U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full 
            = (1U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full 
            = (1U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr 
            = (3U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr 
            = (3U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr 
            = (3U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr 
            = (3U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr 
            = (3U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr 
            = (3U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr 
            = (3U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr 
            = (3U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr 
            = (3U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr 
            = (3U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr 
            = (3U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr 
            = (3U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr 
            = (3U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr 
            = (3U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr 
            = (3U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr 
            = (3U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr 
            = (3U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr 
            = (3U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr 
            = (3U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr 
            = (3U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr 
            = (3U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr 
            = (3U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr 
            = (3U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr 
            = (3U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr 
            = (3U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr 
            = (3U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr 
            = (3U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr 
            = (3U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr 
            = (3U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr 
            = (3U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr 
            = (3U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr 
            = (3U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr 
            = (3U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr 
            = (3U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr 
            = (3U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr 
            = (3U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr 
            = (3U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr 
            = (3U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr 
            = (3U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr 
            = (3U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr 
            = (3U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr 
            = (3U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr 
            = (3U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr 
            = (3U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr 
            = (3U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr 
            = (3U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr 
            = (3U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next));
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr 
            = (3U & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next));
    }
    if (__VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0] 
            = __VdlyVal__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    }
    if (__VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0] 
            = __VdlyVal__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    }
    if (__VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0] 
            = __VdlyVal__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    }
    if (__VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0] 
            = __VdlyVal__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    }
    if (__VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0] 
            = __VdlyVal__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    }
    if (__VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0] 
            = __VdlyVal__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    }
    if (__VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0] 
            = __VdlyVal__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    }
    if (__VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0] 
            = __VdlyVal__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    }
    if (__VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0] 
            = __VdlyVal__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    }
    if (__VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0] 
            = __VdlyVal__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    }
    if (__VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0] 
            = __VdlyVal__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    }
    if (__VdlySet__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0] 
            = __VdlyVal__CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    }
    if (__VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0][0U] 
            = __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0][1U] 
            = __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0][2U] 
            = __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[2U];
    }
    if (__VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0][0U] 
            = __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0][1U] 
            = __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0][2U] 
            = __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[2U];
    }
    if (__VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0][0U] 
            = __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0][1U] 
            = __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0][2U] 
            = __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[2U];
    }
    if (__VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0][0U] 
            = __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0][1U] 
            = __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0][2U] 
            = __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[2U];
    }
    if (__VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0][0U] 
            = __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0][1U] 
            = __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0][2U] 
            = __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[2U];
    }
    if (__VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0][0U] 
            = __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0][1U] 
            = __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0][2U] 
            = __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[2U];
    }
    if (__VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0][0U] 
            = __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0][1U] 
            = __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0][2U] 
            = __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[2U];
    }
    if (__VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0][0U] 
            = __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0][1U] 
            = __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0][2U] 
            = __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[2U];
    }
    if (__VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0][0U] 
            = __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0][1U] 
            = __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0][2U] 
            = __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[2U];
    }
    if (__VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0][0U] 
            = __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0][1U] 
            = __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0][2U] 
            = __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[2U];
    }
    if (__VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0][0U] 
            = __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0][1U] 
            = __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0][2U] 
            = __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[2U];
    }
    if (__VdlySet__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0][0U] 
            = __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0][1U] 
            = __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0][2U] 
            = __VdlyVal__CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0[2U];
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router3__istream_rdy[2U] 
        = (1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router3__istream_rdy[1U] 
        = (1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router3__istream_rdy[0U] 
        = (1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router2__istream_rdy[2U] 
        = (1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router2__istream_rdy[1U] 
        = (1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router2__istream_rdy[0U] 
        = (1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router1__istream_rdy[2U] 
        = (1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router1__istream_rdy[1U] 
        = (1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router1__istream_rdy[0U] 
        = (1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router0__istream_rdy[2U] 
        = (1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router0__istream_rdy[1U] 
        = (1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router0__istream_rdy[0U] 
        = (1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router3__istream_rdy[2U] 
        = (1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router3__istream_rdy[1U] 
        = (1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router3__istream_rdy[0U] 
        = (1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router2__istream_rdy[2U] 
        = (1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router2__istream_rdy[1U] 
        = (1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router2__istream_rdy[0U] 
        = (1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router1__istream_rdy[2U] 
        = (1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router1__istream_rdy[1U] 
        = (1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router1__istream_rdy[0U] 
        = (1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router0__istream_rdy[2U] 
        = (1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router0__istream_rdy[1U] 
        = (1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router0__istream_rdy[0U] 
        = (1U & (~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2_deq_msg 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__runit2__DOT__istream_msg_hdr 
        = (0xfffU & (IData)((vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr] 
                             >> 0x30U)));
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1_deq_msg 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__runit1__DOT__istream_msg_hdr 
        = (0xfffU & (IData)((vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr] 
                             >> 0x30U)));
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0_deq_msg 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__runit0__DOT__istream_msg_hdr 
        = (0xfffU & (IData)((vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr] 
                             >> 0x30U)));
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2_deq_msg 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__runit2__DOT__istream_msg_hdr 
        = (0xfffU & (IData)((vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr] 
                             >> 0x30U)));
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1_deq_msg 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__runit1__DOT__istream_msg_hdr 
        = (0xfffU & (IData)((vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr] 
                             >> 0x30U)));
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0_deq_msg 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__runit0__DOT__istream_msg_hdr 
        = (0xfffU & (IData)((vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr] 
                             >> 0x30U)));
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2_deq_msg 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit2__DOT__istream_msg_hdr 
        = (0xfffU & (IData)((vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr] 
                             >> 0x30U)));
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1_deq_msg 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit1__DOT__istream_msg_hdr 
        = (0xfffU & (IData)((vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr] 
                             >> 0x30U)));
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0_deq_msg 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__runit0__DOT__istream_msg_hdr 
        = (0xfffU & (IData)((vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr] 
                             >> 0x30U)));
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2_deq_msg 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit2__DOT__istream_msg_hdr 
        = (0xfffU & (IData)((vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr] 
                             >> 0x30U)));
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1_deq_msg 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit1__DOT__istream_msg_hdr 
        = (0xfffU & (IData)((vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr] 
                             >> 0x30U)));
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0_deq_msg 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__runit0__DOT__istream_msg_hdr 
        = (0xfffU & (IData)((vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr] 
                             >> 0x30U)));
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2_deq_msg[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2_deq_msg[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2_deq_msg[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__runit2__DOT__istream_msg_hdr 
        = (0xfffU & (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U] 
                     >> 0xeU));
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1_deq_msg[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1_deq_msg[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1_deq_msg[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__runit1__DOT__istream_msg_hdr 
        = (0xfffU & (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U] 
                     >> 0xeU));
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0_deq_msg[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0_deq_msg[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0_deq_msg[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__runit0__DOT__istream_msg_hdr 
        = (0xfffU & (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U] 
                     >> 0xeU));
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2_deq_msg[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2_deq_msg[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2_deq_msg[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit2__DOT__istream_msg_hdr 
        = (0xfffU & (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U] 
                     >> 0xeU));
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1_deq_msg[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1_deq_msg[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1_deq_msg[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit1__DOT__istream_msg_hdr 
        = (0xfffU & (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U] 
                     >> 0xeU));
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0_deq_msg[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0_deq_msg[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0_deq_msg[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__istream_msg_hdr 
        = (0xfffU & (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U] 
                     >> 0xeU));
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2_deq_msg[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2_deq_msg[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2_deq_msg[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__istream_msg_hdr 
        = (0xfffU & (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U] 
                     >> 0xeU));
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1_deq_msg[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1_deq_msg[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1_deq_msg[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__istream_msg_hdr 
        = (0xfffU & (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U] 
                     >> 0xeU));
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0_deq_msg[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0_deq_msg[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0_deq_msg[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__istream_msg_hdr 
        = (0xfffU & (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U] 
                     >> 0xeU));
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2_deq_msg[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2_deq_msg[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2_deq_msg[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__runit2__DOT__istream_msg_hdr 
        = (0xfffU & (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U] 
                     >> 0xeU));
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1_deq_msg[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1_deq_msg[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1_deq_msg[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__runit1__DOT__istream_msg_hdr 
        = (0xfffU & (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U] 
                     >> 0xeU));
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0_deq_msg[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0_deq_msg[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0_deq_msg[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__runit0__DOT__istream_msg_hdr 
        = (0xfffU & (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                     [vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U] 
                     >> 0xeU));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacheresp2netmsg_ostream_rdy[3U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router3__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_cw_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router3__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_ccw_rdy[3U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router3__istream_rdy
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
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacheresp2netmsg_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router1__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_cw_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router1__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__channels_ccw_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router1__istream_rdy
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
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereq2netmsg_ostream_rdy[3U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router3__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_cw_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router3__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_ccw_rdy[3U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router3__istream_rdy
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
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereq2netmsg_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router1__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_cw_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router1__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_ccw_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router1__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereq2netmsg_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router0__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_cw_rdy[3U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router0__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__channels_ccw_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router0__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
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
    vlSelf->net2cache_respstream_rdy[0U] = vlSelf->CacheNet_noparam__DOT____Vcellout__v__net2cache_respstream_rdy
        [0U];
    vlSelf->net2cache_respstream_rdy[1U] = vlSelf->CacheNet_noparam__DOT____Vcellout__v__net2cache_respstream_rdy
        [1U];
    vlSelf->net2cache_respstream_rdy[2U] = vlSelf->CacheNet_noparam__DOT____Vcellout__v__net2cache_respstream_rdy
        [2U];
    vlSelf->net2cache_respstream_rdy[3U] = vlSelf->CacheNet_noparam__DOT____Vcellout__v__net2cache_respstream_rdy
        [3U];
    vlSelf->proc2net_reqstream_rdy[0U] = vlSelf->CacheNet_noparam__DOT____Vcellout__v__proc2net_reqstream_rdy
        [0U];
    vlSelf->proc2net_reqstream_rdy[1U] = vlSelf->CacheNet_noparam__DOT____Vcellout__v__proc2net_reqstream_rdy
        [1U];
    vlSelf->proc2net_reqstream_rdy[2U] = vlSelf->CacheNet_noparam__DOT____Vcellout__v__proc2net_reqstream_rdy
        [2U];
    vlSelf->proc2net_reqstream_rdy[3U] = vlSelf->CacheNet_noparam__DOT____Vcellout__v__proc2net_reqstream_rdy
        [3U];
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
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_val = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router3__ostream_rdy
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_val = 1U;
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router3__ostream_rdy
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg
            [2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_val = 1U;
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router3__ostream_rdy
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_msg
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_val = 1U;
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_val = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router3__ostream_rdy
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_val = 1U;
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router3__ostream_rdy
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg
            [2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_val = 1U;
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router3__ostream_rdy
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_msg
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_val = 1U;
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_val = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router3__ostream_rdy
            [2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_val = 1U;
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router3__ostream_rdy
            [2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg
            [2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_val = 1U;
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router3__ostream_rdy
            [2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_msg
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_val = 1U;
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_val = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router2__ostream_rdy
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_val = 1U;
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router2__ostream_rdy
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg
            [2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_val = 1U;
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router2__ostream_rdy
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_msg
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_val = 1U;
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_val = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router2__ostream_rdy
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_val = 1U;
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router2__ostream_rdy
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg
            [2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_val = 1U;
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router2__ostream_rdy
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_msg
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_val = 1U;
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_val = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router2__ostream_rdy
            [2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_val = 1U;
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router2__ostream_rdy
            [2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg
            [2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_val = 1U;
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router2__ostream_rdy
            [2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_msg
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_val = 1U;
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_val = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router1__ostream_rdy
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_val = 1U;
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router1__ostream_rdy
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg
            [2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_val = 1U;
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router1__ostream_rdy
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_msg
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_val = 1U;
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_val = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router1__ostream_rdy
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_val = 1U;
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router1__ostream_rdy
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg
            [2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_val = 1U;
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router1__ostream_rdy
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_msg
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_val = 1U;
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_val = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router1__ostream_rdy
            [2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_val = 1U;
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router1__ostream_rdy
            [2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg
            [2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_val = 1U;
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router1__ostream_rdy
            [2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_msg
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_val = 1U;
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_val = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router0__ostream_rdy
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_val = 1U;
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router0__ostream_rdy
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg
            [2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_val = 1U;
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router0__ostream_rdy
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_msg
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_val = 1U;
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_val = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router0__ostream_rdy
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_val = 1U;
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router0__ostream_rdy
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg
            [2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_val = 1U;
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router0__ostream_rdy
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_msg
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_val = 1U;
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg = 0ULL;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_val = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router0__ostream_rdy
            [2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg
            [1U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_val = 1U;
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router0__ostream_rdy
            [2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg
            [2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_val = 1U;
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellinp__router0__ostream_rdy
            [2U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_msg
            [0U];
        vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_val = 1U;
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_val = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__ostream_rdy
            [0U];
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
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__ostream_rdy
            [0U];
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
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__ostream_rdy
            [0U];
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
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_val = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__ostream_rdy
            [1U];
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
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__ostream_rdy
            [1U];
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
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__ostream_rdy
            [1U];
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
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_val = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__ostream_rdy
            [2U];
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
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__ostream_rdy
            [2U];
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
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router3__ostream_rdy
            [2U];
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
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_val = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__ostream_rdy
            [0U];
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
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__ostream_rdy
            [0U];
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
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__ostream_rdy
            [0U];
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
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_val = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__ostream_rdy
            [1U];
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
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__ostream_rdy
            [1U];
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
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__ostream_rdy
            [1U];
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
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_val = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__ostream_rdy
            [2U];
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
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__ostream_rdy
            [2U];
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
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router2__ostream_rdy
            [2U];
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
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_val = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__ostream_rdy
            [0U];
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
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__ostream_rdy
            [0U];
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
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__ostream_rdy
            [0U];
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
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_val = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__ostream_rdy
            [1U];
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
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__ostream_rdy
            [1U];
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
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__ostream_rdy
            [1U];
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
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_val = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__ostream_rdy
            [2U];
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
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__ostream_rdy
            [2U];
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
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router1__ostream_rdy
            [2U];
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
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_val = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__ostream_rdy
            [0U];
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
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__ostream_rdy
            [0U];
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
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__ostream_rdy
            [0U];
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
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_val = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__ostream_rdy
            [1U];
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
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__ostream_rdy
            [1U];
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
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__ostream_rdy
            [1U];
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
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[0U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[1U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[2U] = 0U;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_val = 0U;
    if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__ostream_rdy
            [2U];
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
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__ostream_rdy
            [2U];
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
    } else if (vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellinp__router0__ostream_rdy
            [2U];
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
    }
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit0_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit1_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit2_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router3__ostream_msg[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router3__ostream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit0__ostream_val;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit0_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit1_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit2_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router3__ostream_msg[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router3__ostream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit1__ostream_val;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit0_ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit1_ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__routeunit2_ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router3__ostream_msg[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router3__ostream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT____Vcellout__sunit2__ostream_val;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit0_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit1_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit2_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router2__ostream_msg[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router2__ostream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit0__ostream_val;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit0_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit1_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit2_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router2__ostream_msg[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router2__ostream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit1__ostream_val;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit0_ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit1_ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__routeunit2_ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router2__ostream_msg[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router2__ostream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT____Vcellout__sunit2__ostream_val;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit0_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit1_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit2_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router1__ostream_msg[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router1__ostream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit0__ostream_val;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit0_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit1_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit2_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router1__ostream_msg[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router1__ostream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit1__ostream_val;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit0_ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit1_ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__routeunit2_ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router1__ostream_msg[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router1__ostream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT____Vcellout__sunit2__ostream_val;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit0_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit1_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit2_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router0__ostream_msg[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router0__ostream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit0__ostream_val;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit0_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit1_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit2_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router0__ostream_msg[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router0__ostream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit1__ostream_val;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit0_ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit1_ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__routeunit2_ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router0__ostream_msg[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT____Vcellout__router0__ostream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT____Vcellout__sunit2__ostream_val;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router3__ostream_msg[0U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router3__ostream_msg[0U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router3__ostream_msg[0U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_msg[2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router3__ostream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__ostream_val;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router3__ostream_msg[1U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router3__ostream_msg[1U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router3__ostream_msg[1U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_msg[2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router3__ostream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__ostream_val;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router3__ostream_msg[2U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router3__ostream_msg[2U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router3__ostream_msg[2U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_msg[2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router3__ostream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__ostream_val;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router2__ostream_msg[0U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router2__ostream_msg[0U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router2__ostream_msg[0U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_msg[2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router2__ostream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__ostream_val;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router2__ostream_msg[1U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router2__ostream_msg[1U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router2__ostream_msg[1U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_msg[2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router2__ostream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__ostream_val;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router2__ostream_msg[2U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router2__ostream_msg[2U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router2__ostream_msg[2U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_msg[2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router2__ostream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__ostream_val;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router1__ostream_msg[0U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router1__ostream_msg[0U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router1__ostream_msg[0U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_msg[2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router1__ostream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__ostream_val;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router1__ostream_msg[1U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router1__ostream_msg[1U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router1__ostream_msg[1U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_msg[2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router1__ostream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__ostream_val;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router1__ostream_msg[2U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router1__ostream_msg[2U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router1__ostream_msg[2U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_msg[2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router1__ostream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__ostream_val;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_rdy[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router0__ostream_msg[0U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router0__ostream_msg[0U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router0__ostream_msg[0U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_msg[2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router0__ostream_val[0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__ostream_val;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_rdy[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router0__ostream_msg[1U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router0__ostream_msg[1U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router0__ostream_msg[1U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_msg[2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router0__ostream_val[1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__ostream_val;
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy
        [0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy
        [1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_rdy[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy
        [2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router0__ostream_msg[2U][0U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[0U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router0__ostream_msg[2U][1U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[1U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router0__ostream_msg[2U][2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_msg[2U];
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT____Vcellout__router0__ostream_val[2U] 
        = vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__ostream_val;
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
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0_deq_rdy));
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1_deq_rdy));
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2_deq_rdy));
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0_deq_rdy));
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1_deq_rdy));
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2_deq_rdy));
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0_deq_rdy));
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1_deq_rdy));
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2_deq_rdy));
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0_deq_rdy));
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1_deq_rdy));
    CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2_deq_rdy));
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
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0_deq_rdy));
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1_deq_rdy));
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2_deq_rdy));
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0_deq_rdy));
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1_deq_rdy));
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2_deq_rdy));
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0_deq_rdy));
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1_deq_rdy));
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2_deq_rdy));
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0_deq_rdy));
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1_deq_rdy));
    CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2_deq_rdy));
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
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
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
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(CacheNet_noparam__DOT__v__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
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
}
