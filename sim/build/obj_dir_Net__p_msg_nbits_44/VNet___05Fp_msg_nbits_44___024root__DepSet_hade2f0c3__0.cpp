// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNet___05Fp_msg_nbits_44.h for the primary calling header

#include "VNet___05Fp_msg_nbits_44__pch.h"
#include "VNet___05Fp_msg_nbits_44___024root.h"

void VNet___05Fp_msg_nbits_44___024root___ico_sequent__TOP__0(VNet___05Fp_msg_nbits_44___024root* vlSelf);

void VNet___05Fp_msg_nbits_44___024root___eval_ico(VNet___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNet___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VNet___05Fp_msg_nbits_44___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VNet___05Fp_msg_nbits_44___024root___ico_sequent__TOP__0(VNet___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNet___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    // Body
    vlSelf->Net___05Fp_msg_nbits_44__DOT____Vcellinp__v__istream_msg[0U] 
        = vlSelf->istream_msg[0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT____Vcellinp__v__istream_msg[1U] 
        = vlSelf->istream_msg[1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT____Vcellinp__v__istream_msg[2U] 
        = vlSelf->istream_msg[2U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT____Vcellinp__v__istream_msg[3U] 
        = vlSelf->istream_msg[3U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT____Vcellinp__v__istream_val[0U] 
        = vlSelf->istream_val[0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT____Vcellinp__v__istream_val[1U] 
        = vlSelf->istream_val[1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT____Vcellinp__v__istream_val[2U] 
        = vlSelf->istream_val[2U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT____Vcellinp__v__istream_val[3U] 
        = vlSelf->istream_val[3U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT____Vcellinp__v__ostream_rdy[0U] 
        = vlSelf->ostream_rdy[0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT____Vcellinp__v__ostream_rdy[1U] 
        = vlSelf->ostream_rdy[1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT____Vcellinp__v__ostream_rdy[2U] 
        = vlSelf->ostream_rdy[2U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT____Vcellinp__v__ostream_rdy[3U] 
        = vlSelf->ostream_rdy[3U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router0__istream_msg[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT____Vcellinp__v__istream_msg
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router1__istream_msg[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT____Vcellinp__v__istream_msg
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router2__istream_msg[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT____Vcellinp__v__istream_msg
        [2U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router3__istream_msg[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT____Vcellinp__v__istream_msg
        [3U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router0__istream_val[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT____Vcellinp__v__istream_val
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router1__istream_val[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT____Vcellinp__v__istream_val
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router2__istream_val[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT____Vcellinp__v__istream_val
        [2U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router3__istream_val[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT____Vcellinp__v__istream_val
        [3U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router0__ostream_rdy[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT____Vcellinp__v__ostream_rdy
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router1__ostream_rdy[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT____Vcellinp__v__ostream_rdy
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router2__ostream_rdy[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT____Vcellinp__v__ostream_rdy
        [2U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router3__ostream_rdy[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT____Vcellinp__v__ostream_rdy
        [3U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router0__istream_val
           [0U]);
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router0__istream_val
           [1U]);
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router0__istream_val
           [2U]);
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router1__istream_val
           [0U]);
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router1__istream_val
           [1U]);
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router1__istream_val
           [2U]);
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router2__istream_val
           [0U]);
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router2__istream_val
           [1U]);
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router2__istream_val
           [2U]);
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router3__istream_val
           [0U]);
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router3__istream_val
           [1U]);
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router3__istream_val
           [2U]);
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router0__ostream_rdy
            [0U];
    } else if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router0__ostream_rdy
            [0U];
    } else if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router0__ostream_rdy
            [0U];
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router0__ostream_rdy
            [1U];
    } else if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router0__ostream_rdy
            [1U];
    } else if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router0__ostream_rdy
            [1U];
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router0__ostream_rdy
            [2U];
    } else if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router0__ostream_rdy
            [2U];
    } else if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router0__ostream_rdy
            [2U];
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router1__ostream_rdy
            [0U];
    } else if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router1__ostream_rdy
            [0U];
    } else if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router1__ostream_rdy
            [0U];
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router1__ostream_rdy
            [1U];
    } else if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router1__ostream_rdy
            [1U];
    } else if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router1__ostream_rdy
            [1U];
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router1__ostream_rdy
            [2U];
    } else if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router1__ostream_rdy
            [2U];
    } else if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router1__ostream_rdy
            [2U];
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router2__ostream_rdy
            [0U];
    } else if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router2__ostream_rdy
            [0U];
    } else if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router2__ostream_rdy
            [0U];
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router2__ostream_rdy
            [1U];
    } else if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router2__ostream_rdy
            [1U];
    } else if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router2__ostream_rdy
            [1U];
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router2__ostream_rdy
            [2U];
    } else if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router2__ostream_rdy
            [2U];
    } else if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router2__ostream_rdy
            [2U];
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router3__ostream_rdy
            [0U];
    } else if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router3__ostream_rdy
            [0U];
    } else if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router3__ostream_rdy
            [0U];
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router3__ostream_rdy
            [1U];
    } else if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router3__ostream_rdy
            [1U];
    } else if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router3__ostream_rdy
            [1U];
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router3__ostream_rdy
            [2U];
    } else if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router3__ostream_rdy
            [2U];
    } else if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router3__ostream_rdy
            [2U];
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit0_ostream_rdy[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit0__istream_rdy
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit1_ostream_rdy[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit0__istream_rdy
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit2_ostream_rdy[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit0__istream_rdy
        [2U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit0_ostream_rdy[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit1__istream_rdy
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit1_ostream_rdy[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit1__istream_rdy
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit2_ostream_rdy[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit1__istream_rdy
        [2U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit0_ostream_rdy[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit2__istream_rdy
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit1_ostream_rdy[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit2__istream_rdy
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit2_ostream_rdy[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit2__istream_rdy
        [2U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit0_ostream_rdy[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit0__istream_rdy
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit1_ostream_rdy[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit0__istream_rdy
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit2_ostream_rdy[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit0__istream_rdy
        [2U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit0_ostream_rdy[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit1__istream_rdy
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit1_ostream_rdy[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit1__istream_rdy
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit2_ostream_rdy[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit1__istream_rdy
        [2U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit0_ostream_rdy[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit2__istream_rdy
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit1_ostream_rdy[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit2__istream_rdy
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit2_ostream_rdy[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit2__istream_rdy
        [2U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit0_ostream_rdy[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit0__istream_rdy
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit1_ostream_rdy[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit0__istream_rdy
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit2_ostream_rdy[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit0__istream_rdy
        [2U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit0_ostream_rdy[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit1__istream_rdy
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit1_ostream_rdy[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit1__istream_rdy
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit2_ostream_rdy[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit1__istream_rdy
        [2U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit0_ostream_rdy[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit2__istream_rdy
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit1_ostream_rdy[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit2__istream_rdy
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit2_ostream_rdy[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit2__istream_rdy
        [2U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit0_ostream_rdy[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit0__istream_rdy
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit1_ostream_rdy[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit0__istream_rdy
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit2_ostream_rdy[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit0__istream_rdy
        [2U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit0_ostream_rdy[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit1__istream_rdy
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit1_ostream_rdy[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit1__istream_rdy
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit2_ostream_rdy[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit1__istream_rdy
        [2U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit0_ostream_rdy[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit2__istream_rdy
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit1_ostream_rdy[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit2__istream_rdy
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit2_ostream_rdy[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit2__istream_rdy
        [2U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0_deq_rdy 
            = ((0U == (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__runit0__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1_deq_rdy 
            = ((0U == (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__runit1__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2_deq_rdy 
            = ((0U == (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__runit2__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0_deq_rdy 
            = ((1U == (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1_deq_rdy 
            = ((1U == (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2_deq_rdy 
            = ((1U == (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0_deq_rdy 
            = ((2U == (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1_deq_rdy 
            = ((2U == (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2_deq_rdy 
            = ((2U == (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0_deq_rdy 
            = ((3U == (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1_deq_rdy 
            = ((3U == (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2_deq_rdy 
            = ((3U == (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0_deq_rdy));
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1_deq_rdy));
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2_deq_rdy));
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0_deq_rdy));
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1_deq_rdy));
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2_deq_rdy));
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0_deq_rdy));
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1_deq_rdy));
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2_deq_rdy));
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0_deq_rdy));
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1_deq_rdy));
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2_deq_rdy));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
}

void VNet___05Fp_msg_nbits_44___024root___eval_triggers__ico(VNet___05Fp_msg_nbits_44___024root* vlSelf);

bool VNet___05Fp_msg_nbits_44___024root___eval_phase__ico(VNet___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNet___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VNet___05Fp_msg_nbits_44___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VNet___05Fp_msg_nbits_44___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VNet___05Fp_msg_nbits_44___024root___eval_act(VNet___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNet___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root___eval_act\n"); );
}

void VNet___05Fp_msg_nbits_44___024root___nba_sequent__TOP__0(VNet___05Fp_msg_nbits_44___024root* vlSelf);

void VNet___05Fp_msg_nbits_44___024root___eval_nba(VNet___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNet___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VNet___05Fp_msg_nbits_44___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VNet___05Fp_msg_nbits_44___024root___nba_sequent__TOP__0(VNet___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNet___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root___nba_sequent__TOP__0\n"); );
    // Init
    QData/*43:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0_deq_msg;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0_deq_msg = 0;
    QData/*43:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1_deq_msg;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1_deq_msg = 0;
    QData/*43:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2_deq_msg;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2_deq_msg = 0;
    CData/*0:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    QData/*43:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0_deq_msg;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0_deq_msg = 0;
    QData/*43:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1_deq_msg;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1_deq_msg = 0;
    QData/*43:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2_deq_msg;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2_deq_msg = 0;
    CData/*0:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    QData/*43:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0_deq_msg;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0_deq_msg = 0;
    QData/*43:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1_deq_msg;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1_deq_msg = 0;
    QData/*43:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2_deq_msg;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2_deq_msg = 0;
    CData/*0:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    QData/*43:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0_deq_msg;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0_deq_msg = 0;
    QData/*43:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1_deq_msg;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1_deq_msg = 0;
    QData/*43:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2_deq_msg;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2_deq_msg = 0;
    CData/*0:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    QData/*43:0*/ __VdlyVal__Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyVal__Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*1:0*/ __VdlyDim0__Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyDim0__Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    QData/*43:0*/ __VdlyVal__Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyVal__Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*1:0*/ __VdlyDim0__Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyDim0__Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    QData/*43:0*/ __VdlyVal__Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyVal__Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*1:0*/ __VdlyDim0__Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyDim0__Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    QData/*43:0*/ __VdlyVal__Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyVal__Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*1:0*/ __VdlyDim0__Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyDim0__Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    QData/*43:0*/ __VdlyVal__Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyVal__Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*1:0*/ __VdlyDim0__Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyDim0__Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    QData/*43:0*/ __VdlyVal__Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyVal__Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*1:0*/ __VdlyDim0__Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyDim0__Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    QData/*43:0*/ __VdlyVal__Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyVal__Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*1:0*/ __VdlyDim0__Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyDim0__Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    QData/*43:0*/ __VdlyVal__Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyVal__Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*1:0*/ __VdlyDim0__Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyDim0__Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    QData/*43:0*/ __VdlyVal__Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyVal__Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*1:0*/ __VdlyDim0__Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyDim0__Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    QData/*43:0*/ __VdlyVal__Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyVal__Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*1:0*/ __VdlyDim0__Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyDim0__Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    QData/*43:0*/ __VdlyVal__Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyVal__Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*1:0*/ __VdlyDim0__Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyDim0__Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    QData/*43:0*/ __VdlyVal__Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyVal__Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*1:0*/ __VdlyDim0__Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlyDim0__Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*0:0*/ __VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*0:0*/ __VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*0:0*/ __VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*0:0*/ __VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*0:0*/ __VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*0:0*/ __VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*0:0*/ __VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*0:0*/ __VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*0:0*/ __VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*0:0*/ __VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*0:0*/ __VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    CData/*0:0*/ __VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    __VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0;
    // Body
    __VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0U;
    __VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0U;
    __VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0U;
    __VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0U;
    __VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0U;
    __VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0U;
    __VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0U;
    __VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0U;
    __VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0U;
    __VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0U;
    __VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0U;
    __VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0U;
    if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en) {
        __VdlyVal__Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router3__istream_msg
            [2U];
        __VdlyDim0__Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr;
        __VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 1U;
    }
    if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en) {
        __VdlyVal__Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router3__istream_msg
            [1U];
        __VdlyDim0__Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr;
        __VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 1U;
    }
    if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en) {
        __VdlyVal__Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router3__istream_msg
            [0U];
        __VdlyDim0__Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr;
        __VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 1U;
    }
    if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en) {
        __VdlyVal__Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router2__istream_msg
            [2U];
        __VdlyDim0__Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr;
        __VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 1U;
    }
    if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en) {
        __VdlyVal__Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router2__istream_msg
            [1U];
        __VdlyDim0__Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr;
        __VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 1U;
    }
    if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en) {
        __VdlyVal__Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router2__istream_msg
            [0U];
        __VdlyDim0__Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr;
        __VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 1U;
    }
    if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en) {
        __VdlyVal__Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router1__istream_msg
            [2U];
        __VdlyDim0__Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr;
        __VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 1U;
    }
    if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en) {
        __VdlyVal__Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router1__istream_msg
            [1U];
        __VdlyDim0__Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr;
        __VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 1U;
    }
    if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en) {
        __VdlyVal__Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router1__istream_msg
            [0U];
        __VdlyDim0__Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr;
        __VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 1U;
    }
    if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en) {
        __VdlyVal__Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router0__istream_msg
            [2U];
        __VdlyDim0__Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr;
        __VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 1U;
    }
    if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en) {
        __VdlyVal__Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router0__istream_msg
            [1U];
        __VdlyDim0__Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr;
        __VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 1U;
    }
    if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en) {
        __VdlyVal__Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router0__istream_msg
            [0U];
        __VdlyDim0__Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr;
        __VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = 0U;
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = 0U;
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = 0U;
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = 0U;
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = 0U;
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = 0U;
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = 0U;
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = 0U;
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = 0U;
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = 0U;
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = 0U;
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = 0U;
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = 0U;
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = 0U;
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = 0U;
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = 0U;
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = 0U;
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = 0U;
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = 0U;
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = 0U;
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = 0U;
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = 0U;
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = 0U;
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = 0U;
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = 0U;
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = 0U;
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = 0U;
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = 0U;
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = 0U;
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = 0U;
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = 0U;
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = 0U;
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = 0U;
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = 0U;
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = 0U;
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = 0U;
    } else {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full 
            = (1U & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next));
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full 
            = (1U & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next));
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full 
            = (1U & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next));
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full 
            = (1U & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next));
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full 
            = (1U & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next));
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full 
            = (1U & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next));
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full 
            = (1U & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next));
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full 
            = (1U & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next));
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full 
            = (1U & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next));
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full 
            = (1U & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next));
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full 
            = (1U & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next));
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full 
            = (1U & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next));
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr 
            = (3U & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next));
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr 
            = (3U & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next));
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr 
            = (3U & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next));
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr 
            = (3U & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next));
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr 
            = (3U & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next));
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr 
            = (3U & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next));
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr 
            = (3U & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next));
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr 
            = (3U & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next));
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr 
            = (3U & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next));
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr 
            = (3U & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next));
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr 
            = (3U & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next));
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr 
            = (3U & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next));
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr 
            = (3U & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next));
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr 
            = (3U & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next));
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr 
            = (3U & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next));
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr 
            = (3U & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next));
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr 
            = (3U & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next));
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr 
            = (3U & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next));
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr 
            = (3U & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next));
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr 
            = (3U & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next));
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr 
            = (3U & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next));
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr 
            = (3U & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next));
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr 
            = (3U & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next));
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr 
            = (3U & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next));
    }
    if (__VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0] 
            = __VdlyVal__Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    }
    if (__VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0] 
            = __VdlyVal__Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    }
    if (__VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0] 
            = __VdlyVal__Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    }
    if (__VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0] 
            = __VdlyVal__Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    }
    if (__VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0] 
            = __VdlyVal__Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    }
    if (__VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0] 
            = __VdlyVal__Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    }
    if (__VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0] 
            = __VdlyVal__Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    }
    if (__VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0] 
            = __VdlyVal__Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    }
    if (__VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0] 
            = __VdlyVal__Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    }
    if (__VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0] 
            = __VdlyVal__Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    }
    if (__VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0] 
            = __VdlyVal__Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    }
    if (__VdlySet__Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__VdlyDim0__Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0] 
            = __VdlyVal__Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router3__istream_rdy[2U] 
        = (1U & (~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router3__istream_rdy[1U] 
        = (1U & (~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router3__istream_rdy[0U] 
        = (1U & (~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router2__istream_rdy[2U] 
        = (1U & (~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router2__istream_rdy[1U] 
        = (1U & (~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router2__istream_rdy[0U] 
        = (1U & (~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router1__istream_rdy[2U] 
        = (1U & (~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router1__istream_rdy[1U] 
        = (1U & (~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router1__istream_rdy[0U] 
        = (1U & (~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router0__istream_rdy[2U] 
        = (1U & (~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router0__istream_rdy[1U] 
        = (1U & (~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router0__istream_rdy[0U] 
        = (1U & (~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2_deq_msg 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__istream_msg_hdr 
        = (0xfffU & (IData)((vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr] 
                             >> 0x20U)));
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1_deq_msg 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__istream_msg_hdr 
        = (0xfffU & (IData)((vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr] 
                             >> 0x20U)));
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0_deq_msg 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__istream_msg_hdr 
        = (0xfffU & (IData)((vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr] 
                             >> 0x20U)));
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2_deq_msg 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__istream_msg_hdr 
        = (0xfffU & (IData)((vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr] 
                             >> 0x20U)));
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1_deq_msg 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__istream_msg_hdr 
        = (0xfffU & (IData)((vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr] 
                             >> 0x20U)));
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0_deq_msg 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__istream_msg_hdr 
        = (0xfffU & (IData)((vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr] 
                             >> 0x20U)));
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2_deq_msg 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__istream_msg_hdr 
        = (0xfffU & (IData)((vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr] 
                             >> 0x20U)));
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1_deq_msg 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__istream_msg_hdr 
        = (0xfffU & (IData)((vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr] 
                             >> 0x20U)));
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0_deq_msg 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__istream_msg_hdr 
        = (0xfffU & (IData)((vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr] 
                             >> 0x20U)));
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2_deq_msg 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__runit2__DOT__istream_msg_hdr 
        = (0xfffU & (IData)((vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr] 
                             >> 0x20U)));
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1_deq_msg 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__runit1__DOT__istream_msg_hdr 
        = (0xfffU & (IData)((vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr] 
                             >> 0x20U)));
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0_deq_msg 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__runit0__DOT__istream_msg_hdr 
        = (0xfffU & (IData)((vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr] 
                             >> 0x20U)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT____Vcellout__v__istream_rdy[3U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router3__istream_rdy
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_cw_rdy[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router3__istream_rdy
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_ccw_rdy[3U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router3__istream_rdy
        [2U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT____Vcellout__v__istream_rdy[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router2__istream_rdy
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_cw_rdy[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router2__istream_rdy
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_ccw_rdy[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router2__istream_rdy
        [2U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT____Vcellout__v__istream_rdy[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router1__istream_rdy
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_cw_rdy[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router1__istream_rdy
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_ccw_rdy[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router1__istream_rdy
        [2U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT____Vcellout__v__istream_rdy[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router0__istream_rdy
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_cw_rdy[3U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router0__istream_rdy
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_ccw_rdy[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router0__istream_rdy
        [2U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->istream_rdy[0U] = vlSelf->Net___05Fp_msg_nbits_44__DOT____Vcellout__v__istream_rdy
        [0U];
    vlSelf->istream_rdy[1U] = vlSelf->Net___05Fp_msg_nbits_44__DOT____Vcellout__v__istream_rdy
        [1U];
    vlSelf->istream_rdy[2U] = vlSelf->Net___05Fp_msg_nbits_44__DOT____Vcellout__v__istream_rdy
        [2U];
    vlSelf->istream_rdy[3U] = vlSelf->Net___05Fp_msg_nbits_44__DOT____Vcellout__v__istream_rdy
        [3U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router0__ostream_rdy[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_cw_rdy
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router1__ostream_rdy[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_cw_rdy
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router2__ostream_rdy[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_cw_rdy
        [2U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router3__ostream_rdy[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_cw_rdy
        [3U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router0__ostream_rdy[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_ccw_rdy
        [3U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router1__ostream_rdy[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_ccw_rdy
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router2__ostream_rdy[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_ccw_rdy
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router3__ostream_rdy[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_ccw_rdy
        [2U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inq2_num_free_entries 
        = ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit2_ostream_msg[0U] = 0ULL;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit2_ostream_msg[1U] = 0ULL;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit2_ostream_msg[2U] = 0ULL;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit2_ostream_val[0U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit2_ostream_val[1U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit2_ostream_val[2U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inq1_num_free_entries 
        = ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit1_ostream_msg[0U] = 0ULL;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit1_ostream_msg[1U] = 0ULL;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit1_ostream_msg[2U] = 0ULL;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit1_ostream_val[0U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit1_ostream_val[1U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit1_ostream_val[2U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inq0_num_free_entries 
        = ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit0_ostream_msg[0U] = 0ULL;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit0_ostream_msg[1U] = 0ULL;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit0_ostream_msg[2U] = 0ULL;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit0_ostream_val[0U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit0_ostream_val[1U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit0_ostream_val[2U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inq2_num_free_entries 
        = ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit2_ostream_msg[0U] = 0ULL;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit2_ostream_msg[1U] = 0ULL;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit2_ostream_msg[2U] = 0ULL;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit2_ostream_val[0U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit2_ostream_val[1U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit2_ostream_val[2U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inq1_num_free_entries 
        = ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit1_ostream_msg[0U] = 0ULL;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit1_ostream_msg[1U] = 0ULL;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit1_ostream_msg[2U] = 0ULL;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit1_ostream_val[0U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit1_ostream_val[1U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit1_ostream_val[2U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inq0_num_free_entries 
        = ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit0_ostream_msg[0U] = 0ULL;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit0_ostream_msg[1U] = 0ULL;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit0_ostream_msg[2U] = 0ULL;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit0_ostream_val[0U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit0_ostream_val[1U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit0_ostream_val[2U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inq2_num_free_entries 
        = ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit2_ostream_msg[0U] = 0ULL;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit2_ostream_msg[1U] = 0ULL;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit2_ostream_msg[2U] = 0ULL;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit2_ostream_val[0U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit2_ostream_val[1U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit2_ostream_val[2U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inq1_num_free_entries 
        = ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit1_ostream_msg[0U] = 0ULL;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit1_ostream_msg[1U] = 0ULL;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit1_ostream_msg[2U] = 0ULL;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit1_ostream_val[0U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit1_ostream_val[1U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit1_ostream_val[2U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inq0_num_free_entries 
        = ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit0_ostream_msg[0U] = 0ULL;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit0_ostream_msg[1U] = 0ULL;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit0_ostream_msg[2U] = 0ULL;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit0_ostream_val[0U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit0_ostream_val[1U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit0_ostream_val[2U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inq2_num_free_entries 
        = ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit2_ostream_msg[0U] = 0ULL;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit2_ostream_msg[1U] = 0ULL;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit2_ostream_msg[2U] = 0ULL;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit2_ostream_val[0U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit2_ostream_val[1U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit2_ostream_val[2U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inq1_num_free_entries 
        = ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit1_ostream_msg[0U] = 0ULL;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit1_ostream_msg[1U] = 0ULL;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit1_ostream_msg[2U] = 0ULL;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit1_ostream_val[0U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit1_ostream_val[1U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit1_ostream_val[2U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inq0_num_free_entries 
        = ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit0_ostream_msg[0U] = 0ULL;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit0_ostream_msg[1U] = 0ULL;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit0_ostream_msg[2U] = 0ULL;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit0_ostream_val[0U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit0_ostream_val[1U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit0_ostream_val[2U] = 0U;
    if ((1U & (~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((3U == (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit2_ostream_msg[0U] 
                = Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2_deq_msg;
            vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit2_ostream_val[0U] = 1U;
        } else {
            vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit2_ostream_msg[1U] 
                = Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2_deq_msg;
            vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit2_ostream_val[1U] = 1U;
        }
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[2U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit2_ostream_msg
            [0U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[2U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit2_ostream_msg
            [1U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[2U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit2_ostream_msg
            [2U];
    } else {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[2U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit2_ostream_msg
            [0U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[2U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit2_ostream_msg
            [1U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[2U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit2_ostream_msg
            [2U];
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit0__istream_val[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit2_ostream_val
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit1__istream_val[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit2_ostream_val
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit2__istream_val[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit2_ostream_val
        [2U];
    if ((1U & (~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((3U == (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit1_ostream_msg[0U] 
                = Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1_deq_msg;
            vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit1_ostream_val[0U] = 1U;
        } else {
            vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit1_ostream_msg[1U] 
                = Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1_deq_msg;
            vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit1_ostream_val[1U] = 1U;
        }
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[1U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit1_ostream_msg
            [0U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[1U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit1_ostream_msg
            [1U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[1U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit1_ostream_msg
            [2U];
    } else {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[1U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit1_ostream_msg
            [0U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[1U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit1_ostream_msg
            [1U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[1U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit1_ostream_msg
            [2U];
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit0__istream_val[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit1_ostream_val
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit1__istream_val[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit1_ostream_val
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit2__istream_val[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit1_ostream_val
        [2U];
    if ((1U & (~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((3U == (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit0_ostream_msg[0U] 
                = Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0_deq_msg;
            vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit0_ostream_val[0U] = 1U;
        } else {
            vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit0_ostream_msg[1U] 
                = Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0_deq_msg;
            vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit0_ostream_val[1U] = 1U;
        }
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[0U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit0_ostream_msg
            [0U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[0U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit0_ostream_msg
            [1U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[0U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit0_ostream_msg
            [2U];
    } else {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit0__istream_msg[0U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit0_ostream_msg
            [0U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit1__istream_msg[0U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit0_ostream_msg
            [1U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit2__istream_msg[0U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit0_ostream_msg
            [2U];
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit0__istream_val[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit0_ostream_val
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit1__istream_val[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit0_ostream_val
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit2__istream_val[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit0_ostream_val
        [2U];
    if ((1U & (~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((2U == (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit2_ostream_msg[0U] 
                = Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2_deq_msg;
            vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit2_ostream_val[0U] = 1U;
        } else {
            vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit2_ostream_msg[1U] 
                = Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2_deq_msg;
            vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit2_ostream_val[1U] = 1U;
        }
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[2U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit2_ostream_msg
            [0U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[2U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit2_ostream_msg
            [1U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[2U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit2_ostream_msg
            [2U];
    } else {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[2U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit2_ostream_msg
            [0U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[2U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit2_ostream_msg
            [1U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[2U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit2_ostream_msg
            [2U];
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit0__istream_val[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit2_ostream_val
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit1__istream_val[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit2_ostream_val
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit2__istream_val[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit2_ostream_val
        [2U];
    if ((1U & (~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((2U == (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit1_ostream_msg[0U] 
                = Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1_deq_msg;
            vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit1_ostream_val[0U] = 1U;
        } else {
            vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit1_ostream_msg[1U] 
                = Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1_deq_msg;
            vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit1_ostream_val[1U] = 1U;
        }
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[1U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit1_ostream_msg
            [0U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[1U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit1_ostream_msg
            [1U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[1U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit1_ostream_msg
            [2U];
    } else {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[1U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit1_ostream_msg
            [0U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[1U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit1_ostream_msg
            [1U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[1U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit1_ostream_msg
            [2U];
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit0__istream_val[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit1_ostream_val
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit1__istream_val[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit1_ostream_val
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit2__istream_val[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit1_ostream_val
        [2U];
    if ((1U & (~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((2U == (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit0_ostream_msg[0U] 
                = Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0_deq_msg;
            vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit0_ostream_val[0U] = 1U;
        } else {
            vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit0_ostream_msg[1U] 
                = Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0_deq_msg;
            vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit0_ostream_val[1U] = 1U;
        }
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[0U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit0_ostream_msg
            [0U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[0U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit0_ostream_msg
            [1U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[0U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit0_ostream_msg
            [2U];
    } else {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit0__istream_msg[0U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit0_ostream_msg
            [0U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit1__istream_msg[0U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit0_ostream_msg
            [1U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit2__istream_msg[0U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit0_ostream_msg
            [2U];
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit0__istream_val[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit0_ostream_val
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit1__istream_val[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit0_ostream_val
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit2__istream_val[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit0_ostream_val
        [2U];
    if ((1U & (~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((1U == (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit2_ostream_msg[0U] 
                = Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2_deq_msg;
            vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit2_ostream_val[0U] = 1U;
        } else {
            vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit2_ostream_msg[1U] 
                = Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2_deq_msg;
            vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit2_ostream_val[1U] = 1U;
        }
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[2U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit2_ostream_msg
            [0U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[2U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit2_ostream_msg
            [1U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[2U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit2_ostream_msg
            [2U];
    } else {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[2U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit2_ostream_msg
            [0U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[2U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit2_ostream_msg
            [1U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[2U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit2_ostream_msg
            [2U];
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit0__istream_val[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit2_ostream_val
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit1__istream_val[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit2_ostream_val
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit2__istream_val[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit2_ostream_val
        [2U];
    if ((1U & (~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((1U == (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit1_ostream_msg[0U] 
                = Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1_deq_msg;
            vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit1_ostream_val[0U] = 1U;
        } else {
            vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit1_ostream_msg[1U] 
                = Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1_deq_msg;
            vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit1_ostream_val[1U] = 1U;
        }
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[1U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit1_ostream_msg
            [0U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[1U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit1_ostream_msg
            [1U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[1U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit1_ostream_msg
            [2U];
    } else {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[1U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit1_ostream_msg
            [0U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[1U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit1_ostream_msg
            [1U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[1U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit1_ostream_msg
            [2U];
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit0__istream_val[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit1_ostream_val
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit1__istream_val[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit1_ostream_val
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit2__istream_val[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit1_ostream_val
        [2U];
    if ((1U & (~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((1U == (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit0_ostream_msg[0U] 
                = Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0_deq_msg;
            vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit0_ostream_val[0U] = 1U;
        } else {
            vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit0_ostream_msg[1U] 
                = Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0_deq_msg;
            vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit0_ostream_val[1U] = 1U;
        }
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[0U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit0_ostream_msg
            [0U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[0U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit0_ostream_msg
            [1U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[0U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit0_ostream_msg
            [2U];
    } else {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit0__istream_msg[0U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit0_ostream_msg
            [0U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit1__istream_msg[0U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit0_ostream_msg
            [1U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit2__istream_msg[0U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit0_ostream_msg
            [2U];
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit0__istream_val[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit0_ostream_val
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit1__istream_val[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit0_ostream_val
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit2__istream_val[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit0_ostream_val
        [2U];
    if ((1U & (~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((0U == (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__runit2__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit2_ostream_msg[0U] 
                = Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2_deq_msg;
            vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit2_ostream_val[0U] = 1U;
        } else {
            vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit2_ostream_msg[1U] 
                = Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2_deq_msg;
            vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit2_ostream_val[1U] = 1U;
        }
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[2U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit2_ostream_msg
            [0U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[2U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit2_ostream_msg
            [1U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[2U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit2_ostream_msg
            [2U];
    } else {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[2U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit2_ostream_msg
            [0U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[2U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit2_ostream_msg
            [1U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[2U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit2_ostream_msg
            [2U];
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit0__istream_val[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit2_ostream_val
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit1__istream_val[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit2_ostream_val
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit2__istream_val[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit2_ostream_val
        [2U];
    if ((1U & (~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((0U == (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__runit1__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit1_ostream_msg[0U] 
                = Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1_deq_msg;
            vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit1_ostream_val[0U] = 1U;
        } else {
            vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit1_ostream_msg[1U] 
                = Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1_deq_msg;
            vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit1_ostream_val[1U] = 1U;
        }
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[1U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit1_ostream_msg
            [0U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[1U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit1_ostream_msg
            [1U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[1U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit1_ostream_msg
            [2U];
    } else {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[1U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit1_ostream_msg
            [0U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[1U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit1_ostream_msg
            [1U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[1U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit1_ostream_msg
            [2U];
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit0__istream_val[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit1_ostream_val
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit1__istream_val[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit1_ostream_val
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit2__istream_val[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit1_ostream_val
        [2U];
    if ((1U & (~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if ((0U == (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__runit0__DOT__istream_msg_hdr) 
                          >> 8U)))) {
            vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit0_ostream_msg[0U] 
                = Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0_deq_msg;
            vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit0_ostream_val[0U] = 1U;
        } else {
            vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit0_ostream_msg[1U] 
                = Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0_deq_msg;
            vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit0_ostream_val[1U] = 1U;
        }
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[0U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit0_ostream_msg
            [0U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[0U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit0_ostream_msg
            [1U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[0U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit0_ostream_msg
            [2U];
    } else {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit0__istream_msg[0U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit0_ostream_msg
            [0U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit1__istream_msg[0U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit0_ostream_msg
            [1U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit2__istream_msg[0U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit0_ostream_msg
            [2U];
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit0__istream_val[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit0_ostream_val
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit1__istream_val[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit0_ostream_val
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit2__istream_val[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit0_ostream_val
        [2U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit0__ostream_msg = 0ULL;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit0__ostream_val = 0U;
    if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router3__ostream_rdy
            [0U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit0__ostream_msg 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit0__istream_msg
            [1U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit0__ostream_val = 1U;
    } else if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router3__ostream_rdy
            [0U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit0__ostream_msg 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit0__istream_msg
            [2U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit0__ostream_val = 1U;
    } else if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router3__ostream_rdy
            [0U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit0__ostream_msg 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit0__istream_msg
            [0U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit0__ostream_val = 1U;
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit1__ostream_msg = 0ULL;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit1__ostream_val = 0U;
    if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router3__ostream_rdy
            [1U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit1__ostream_msg 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit1__istream_msg
            [1U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit1__ostream_val = 1U;
    } else if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router3__ostream_rdy
            [1U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit1__ostream_msg 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit1__istream_msg
            [2U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit1__ostream_val = 1U;
    } else if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router3__ostream_rdy
            [1U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit1__ostream_msg 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit1__istream_msg
            [0U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit1__ostream_val = 1U;
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit2__ostream_msg = 0ULL;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit2__ostream_val = 0U;
    if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router3__ostream_rdy
            [2U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit2__ostream_msg 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit2__istream_msg
            [1U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit2__ostream_val = 1U;
    } else if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router3__ostream_rdy
            [2U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit2__ostream_msg 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit2__istream_msg
            [2U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit2__ostream_val = 1U;
    } else if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router3__ostream_rdy
            [2U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit2__ostream_msg 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellinp__sunit2__istream_msg
            [0U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit2__ostream_val = 1U;
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit0__ostream_msg = 0ULL;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit0__ostream_val = 0U;
    if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router2__ostream_rdy
            [0U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit0__ostream_msg 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit0__istream_msg
            [1U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit0__ostream_val = 1U;
    } else if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router2__ostream_rdy
            [0U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit0__ostream_msg 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit0__istream_msg
            [2U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit0__ostream_val = 1U;
    } else if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router2__ostream_rdy
            [0U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit0__ostream_msg 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit0__istream_msg
            [0U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit0__ostream_val = 1U;
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit1__ostream_msg = 0ULL;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit1__ostream_val = 0U;
    if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router2__ostream_rdy
            [1U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit1__ostream_msg 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit1__istream_msg
            [1U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit1__ostream_val = 1U;
    } else if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router2__ostream_rdy
            [1U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit1__ostream_msg 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit1__istream_msg
            [2U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit1__ostream_val = 1U;
    } else if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router2__ostream_rdy
            [1U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit1__ostream_msg 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit1__istream_msg
            [0U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit1__ostream_val = 1U;
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit2__ostream_msg = 0ULL;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit2__ostream_val = 0U;
    if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router2__ostream_rdy
            [2U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit2__ostream_msg 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit2__istream_msg
            [1U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit2__ostream_val = 1U;
    } else if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router2__ostream_rdy
            [2U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit2__ostream_msg 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit2__istream_msg
            [2U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit2__ostream_val = 1U;
    } else if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router2__ostream_rdy
            [2U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit2__ostream_msg 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellinp__sunit2__istream_msg
            [0U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit2__ostream_val = 1U;
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit0__ostream_msg = 0ULL;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit0__ostream_val = 0U;
    if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router1__ostream_rdy
            [0U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit0__ostream_msg 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit0__istream_msg
            [1U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit0__ostream_val = 1U;
    } else if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router1__ostream_rdy
            [0U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit0__ostream_msg 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit0__istream_msg
            [2U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit0__ostream_val = 1U;
    } else if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router1__ostream_rdy
            [0U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit0__ostream_msg 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit0__istream_msg
            [0U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit0__ostream_val = 1U;
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit1__ostream_msg = 0ULL;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit1__ostream_val = 0U;
    if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router1__ostream_rdy
            [1U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit1__ostream_msg 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit1__istream_msg
            [1U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit1__ostream_val = 1U;
    } else if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router1__ostream_rdy
            [1U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit1__ostream_msg 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit1__istream_msg
            [2U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit1__ostream_val = 1U;
    } else if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router1__ostream_rdy
            [1U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit1__ostream_msg 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit1__istream_msg
            [0U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit1__ostream_val = 1U;
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit2__ostream_msg = 0ULL;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit2__ostream_val = 0U;
    if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router1__ostream_rdy
            [2U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit2__ostream_msg 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit2__istream_msg
            [1U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit2__ostream_val = 1U;
    } else if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router1__ostream_rdy
            [2U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit2__ostream_msg 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit2__istream_msg
            [2U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit2__ostream_val = 1U;
    } else if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router1__ostream_rdy
            [2U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit2__ostream_msg 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellinp__sunit2__istream_msg
            [0U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit2__ostream_val = 1U;
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit0__ostream_msg = 0ULL;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit0__ostream_val = 0U;
    if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router0__ostream_rdy
            [0U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit0__ostream_msg 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit0__istream_msg
            [1U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit0__ostream_val = 1U;
    } else if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router0__ostream_rdy
            [0U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit0__ostream_msg 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit0__istream_msg
            [2U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit0__ostream_val = 1U;
    } else if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router0__ostream_rdy
            [0U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit0__ostream_msg 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit0__istream_msg
            [0U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit0__ostream_val = 1U;
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit1__ostream_msg = 0ULL;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit1__ostream_val = 0U;
    if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router0__ostream_rdy
            [1U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit1__ostream_msg 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit1__istream_msg
            [1U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit1__ostream_val = 1U;
    } else if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router0__ostream_rdy
            [1U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit1__ostream_msg 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit1__istream_msg
            [2U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit1__ostream_val = 1U;
    } else if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router0__ostream_rdy
            [1U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit1__ostream_msg 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit1__istream_msg
            [0U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit1__ostream_val = 1U;
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit2__ostream_msg = 0ULL;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit2__ostream_val = 0U;
    if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router0__ostream_rdy
            [2U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit2__ostream_msg 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit2__istream_msg
            [1U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit2__ostream_val = 1U;
    } else if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router0__ostream_rdy
            [2U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit2__ostream_msg 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit2__istream_msg
            [2U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit2__ostream_val = 1U;
    } else if (vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router0__ostream_rdy
            [2U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit2__ostream_msg 
            = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellinp__sunit2__istream_msg
            [0U];
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit2__ostream_val = 1U;
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit0_ostream_rdy[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit0__istream_rdy
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit1_ostream_rdy[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit0__istream_rdy
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit2_ostream_rdy[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit0__istream_rdy
        [2U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router3__ostream_msg[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit0__ostream_msg;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router3__ostream_val[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit0__ostream_val;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit0_ostream_rdy[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit1__istream_rdy
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit1_ostream_rdy[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit1__istream_rdy
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit2_ostream_rdy[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit1__istream_rdy
        [2U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router3__ostream_msg[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit1__ostream_msg;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router3__ostream_val[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit1__ostream_val;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit0_ostream_rdy[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit2__istream_rdy
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit1_ostream_rdy[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit2__istream_rdy
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit2_ostream_rdy[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit2__istream_rdy
        [2U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router3__ostream_msg[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit2__ostream_msg;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router3__ostream_val[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT____Vcellout__sunit2__ostream_val;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit0_ostream_rdy[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit0__istream_rdy
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit1_ostream_rdy[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit0__istream_rdy
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit2_ostream_rdy[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit0__istream_rdy
        [2U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router2__ostream_msg[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit0__ostream_msg;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router2__ostream_val[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit0__ostream_val;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit0_ostream_rdy[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit1__istream_rdy
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit1_ostream_rdy[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit1__istream_rdy
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit2_ostream_rdy[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit1__istream_rdy
        [2U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router2__ostream_msg[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit1__ostream_msg;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router2__ostream_val[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit1__ostream_val;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit0_ostream_rdy[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit2__istream_rdy
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit1_ostream_rdy[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit2__istream_rdy
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit2_ostream_rdy[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit2__istream_rdy
        [2U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router2__ostream_msg[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit2__ostream_msg;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router2__ostream_val[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT____Vcellout__sunit2__ostream_val;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit0_ostream_rdy[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit0__istream_rdy
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit1_ostream_rdy[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit0__istream_rdy
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit2_ostream_rdy[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit0__istream_rdy
        [2U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router1__ostream_msg[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit0__ostream_msg;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router1__ostream_val[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit0__ostream_val;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit0_ostream_rdy[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit1__istream_rdy
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit1_ostream_rdy[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit1__istream_rdy
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit2_ostream_rdy[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit1__istream_rdy
        [2U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router1__ostream_msg[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit1__ostream_msg;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router1__ostream_val[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit1__ostream_val;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit0_ostream_rdy[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit2__istream_rdy
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit1_ostream_rdy[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit2__istream_rdy
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit2_ostream_rdy[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit2__istream_rdy
        [2U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router1__ostream_msg[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit2__ostream_msg;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router1__ostream_val[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT____Vcellout__sunit2__ostream_val;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit0_ostream_rdy[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit0__istream_rdy
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit1_ostream_rdy[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit0__istream_rdy
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit2_ostream_rdy[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit0__istream_rdy
        [2U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router0__ostream_msg[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit0__ostream_msg;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router0__ostream_val[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit0__ostream_val;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit0_ostream_rdy[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit1__istream_rdy
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit1_ostream_rdy[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit1__istream_rdy
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit2_ostream_rdy[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit1__istream_rdy
        [2U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router0__ostream_msg[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit1__ostream_msg;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router0__ostream_val[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit1__ostream_val;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit0_ostream_rdy[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit2__istream_rdy
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit1_ostream_rdy[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit2__istream_rdy
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit2_ostream_rdy[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit2__istream_rdy
        [2U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router0__ostream_msg[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit2__ostream_msg;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router0__ostream_val[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT____Vcellout__sunit2__ostream_val;
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0_deq_rdy 
            = ((3U == (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit0__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1_deq_rdy 
            = ((3U == (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit1__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2_deq_rdy 
            = ((3U == (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__runit2__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_cw_msg[3U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router3__ostream_msg
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_ccw_msg[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router3__ostream_msg
        [2U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT____Vcellout__v__ostream_msg[3U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router3__ostream_msg
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT____Vcellout__v__ostream_val[3U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router3__ostream_val
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_cw_val[3U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router3__ostream_val
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_ccw_val[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router3__ostream_val
        [2U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0_deq_rdy 
            = ((2U == (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit0__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1_deq_rdy 
            = ((2U == (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit1__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2_deq_rdy 
            = ((2U == (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__runit2__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_cw_msg[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router2__ostream_msg
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_ccw_msg[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router2__ostream_msg
        [2U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT____Vcellout__v__ostream_msg[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router2__ostream_msg
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT____Vcellout__v__ostream_val[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router2__ostream_val
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_cw_val[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router2__ostream_val
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_ccw_val[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router2__ostream_val
        [2U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0_deq_rdy 
            = ((1U == (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit0__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1_deq_rdy 
            = ((1U == (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit1__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2_deq_rdy 
            = ((1U == (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__runit2__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_cw_msg[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router1__ostream_msg
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_ccw_msg[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router1__ostream_msg
        [2U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT____Vcellout__v__ostream_msg[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router1__ostream_msg
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT____Vcellout__v__ostream_val[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router1__ostream_val
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_cw_val[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router1__ostream_val
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_ccw_val[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router1__ostream_val
        [2U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0_deq_rdy 
            = ((0U == (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__runit0__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1_deq_rdy 
            = ((0U == (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__runit1__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2_deq_rdy 
            = ((0U == (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__runit2__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_cw_msg[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router0__ostream_msg
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_ccw_msg[3U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router0__ostream_msg
        [2U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT____Vcellout__v__ostream_msg[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router0__ostream_msg
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT____Vcellout__v__ostream_val[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router0__ostream_val
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_cw_val[0U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router0__ostream_val
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_ccw_val[3U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__router0__ostream_val
        [2U];
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0_deq_rdy));
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1_deq_rdy));
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2_deq_rdy));
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0_deq_rdy));
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1_deq_rdy));
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2_deq_rdy));
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0_deq_rdy));
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1_deq_rdy));
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2_deq_rdy));
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0_deq_rdy));
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1_deq_rdy));
    Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2_deq_rdy));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router0__istream_msg[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_cw_msg
        [3U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router1__istream_msg[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_cw_msg
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router2__istream_msg[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_cw_msg
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router3__istream_msg[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_cw_msg
        [2U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router0__istream_msg[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_ccw_msg
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router1__istream_msg[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_ccw_msg
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router2__istream_msg[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_ccw_msg
        [2U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router3__istream_msg[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_ccw_msg
        [3U];
    vlSelf->ostream_msg[0U] = vlSelf->Net___05Fp_msg_nbits_44__DOT____Vcellout__v__ostream_msg
        [0U];
    vlSelf->ostream_msg[1U] = vlSelf->Net___05Fp_msg_nbits_44__DOT____Vcellout__v__ostream_msg
        [1U];
    vlSelf->ostream_msg[2U] = vlSelf->Net___05Fp_msg_nbits_44__DOT____Vcellout__v__ostream_msg
        [2U];
    vlSelf->ostream_msg[3U] = vlSelf->Net___05Fp_msg_nbits_44__DOT____Vcellout__v__ostream_msg
        [3U];
    vlSelf->ostream_val[0U] = vlSelf->Net___05Fp_msg_nbits_44__DOT____Vcellout__v__ostream_val
        [0U];
    vlSelf->ostream_val[1U] = vlSelf->Net___05Fp_msg_nbits_44__DOT____Vcellout__v__ostream_val
        [1U];
    vlSelf->ostream_val[2U] = vlSelf->Net___05Fp_msg_nbits_44__DOT____Vcellout__v__ostream_val
        [2U];
    vlSelf->ostream_val[3U] = vlSelf->Net___05Fp_msg_nbits_44__DOT____Vcellout__v__ostream_val
        [3U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router0__istream_val[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_cw_val
        [3U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router1__istream_val[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_cw_val
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router2__istream_val[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_cw_val
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router3__istream_val[1U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_cw_val
        [2U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router0__istream_val[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_ccw_val
        [0U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router1__istream_val[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_ccw_val
        [1U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router2__istream_val[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_ccw_val
        [2U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router3__istream_val[2U] 
        = vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__channels_ccw_val
        [3U];
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router0__istream_val
           [0U]);
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router0__istream_val
           [1U]);
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router0__istream_val
           [2U]);
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router1__istream_val
           [0U]);
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router1__istream_val
           [1U]);
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router1__istream_val
           [2U]);
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router2__istream_val
           [0U]);
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router2__istream_val
           [1U]);
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router2__istream_val
           [2U]);
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router3__istream_val
           [0U]);
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router3__istream_val
           [1U]);
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__router3__istream_val
           [2U]);
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->Net___05Fp_msg_nbits_44__DOT__v__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
}

void VNet___05Fp_msg_nbits_44___024root___eval_triggers__act(VNet___05Fp_msg_nbits_44___024root* vlSelf);

bool VNet___05Fp_msg_nbits_44___024root___eval_phase__act(VNet___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNet___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VNet___05Fp_msg_nbits_44___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VNet___05Fp_msg_nbits_44___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VNet___05Fp_msg_nbits_44___024root___eval_phase__nba(VNet___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNet___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VNet___05Fp_msg_nbits_44___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VNet___05Fp_msg_nbits_44___024root___dump_triggers__ico(VNet___05Fp_msg_nbits_44___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VNet___05Fp_msg_nbits_44___024root___dump_triggers__nba(VNet___05Fp_msg_nbits_44___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VNet___05Fp_msg_nbits_44___024root___dump_triggers__act(VNet___05Fp_msg_nbits_44___024root* vlSelf);
#endif  // VL_DEBUG

void VNet___05Fp_msg_nbits_44___024root___eval(VNet___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNet___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root___eval\n"); );
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
            VNet___05Fp_msg_nbits_44___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("lab4_sys/Net.v", 183, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VNet___05Fp_msg_nbits_44___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VNet___05Fp_msg_nbits_44___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("lab4_sys/Net.v", 183, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VNet___05Fp_msg_nbits_44___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("lab4_sys/Net.v", 183, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VNet___05Fp_msg_nbits_44___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VNet___05Fp_msg_nbits_44___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VNet___05Fp_msg_nbits_44___024root___eval_debug_assertions(VNet___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNet___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
