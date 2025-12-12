// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNetRouter___05Fp_msg_nbits_44.h for the primary calling header

#include "VNetRouter___05Fp_msg_nbits_44__pch.h"
#include "VNetRouter___05Fp_msg_nbits_44___024root.h"

VL_ATTR_COLD void VNetRouter___05Fp_msg_nbits_44___024root___eval_static__TOP(VNetRouter___05Fp_msg_nbits_44___024root* vlSelf);

VL_ATTR_COLD void VNetRouter___05Fp_msg_nbits_44___024root___eval_static(VNetRouter___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetRouter___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouter___05Fp_msg_nbits_44___024root___eval_static\n"); );
    // Body
    VNetRouter___05Fp_msg_nbits_44___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void VNetRouter___05Fp_msg_nbits_44___024root___eval_static__TOP(VNetRouter___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetRouter___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouter___05Fp_msg_nbits_44___024root___eval_static__TOP\n"); );
    // Init
    IData/*31:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__num_reqs;
    NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__num_reqs = 0;
    IData/*31:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__num_reqs;
    NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__num_reqs = 0;
    IData/*31:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__num_reqs;
    NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__num_reqs = 0;
    // Body
    NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__num_reqs = 0U;
    NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__num_reqs = 0U;
    NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__num_reqs = 0U;
}

VL_ATTR_COLD void VNetRouter___05Fp_msg_nbits_44___024root___eval_initial(VNetRouter___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetRouter___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouter___05Fp_msg_nbits_44___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void VNetRouter___05Fp_msg_nbits_44___024root___eval_final(VNetRouter___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetRouter___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouter___05Fp_msg_nbits_44___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VNetRouter___05Fp_msg_nbits_44___024root___dump_triggers__stl(VNetRouter___05Fp_msg_nbits_44___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VNetRouter___05Fp_msg_nbits_44___024root___eval_phase__stl(VNetRouter___05Fp_msg_nbits_44___024root* vlSelf);

VL_ATTR_COLD void VNetRouter___05Fp_msg_nbits_44___024root___eval_settle(VNetRouter___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetRouter___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouter___05Fp_msg_nbits_44___024root___eval_settle\n"); );
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
            VNetRouter___05Fp_msg_nbits_44___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("lab4_sys/NetRouter.v", 284, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VNetRouter___05Fp_msg_nbits_44___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VNetRouter___05Fp_msg_nbits_44___024root___dump_triggers__stl(VNetRouter___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetRouter___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouter___05Fp_msg_nbits_44___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VNetRouter___05Fp_msg_nbits_44___024root___stl_sequent__TOP__0(VNetRouter___05Fp_msg_nbits_44___024root* vlSelf);

VL_ATTR_COLD void VNetRouter___05Fp_msg_nbits_44___024root___eval_stl(VNetRouter___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetRouter___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouter___05Fp_msg_nbits_44___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VNetRouter___05Fp_msg_nbits_44___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VNetRouter___05Fp_msg_nbits_44___024root___stl_sequent__TOP__0(VNetRouter___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetRouter___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouter___05Fp_msg_nbits_44___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    // Body
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT____Vcellinp__v__istream_msg[0U] 
        = vlSelf->istream_msg[0U];
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT____Vcellinp__v__istream_msg[1U] 
        = vlSelf->istream_msg[1U];
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT____Vcellinp__v__istream_msg[2U] 
        = vlSelf->istream_msg[2U];
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT____Vcellout__v__istream_rdy[0U] 
        = (1U & (~ (IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT____Vcellout__v__istream_rdy[1U] 
        = (1U & (~ (IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT____Vcellout__v__istream_rdy[2U] 
        = (1U & (~ (IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT____Vcellinp__v__istream_val[0U] 
        = vlSelf->istream_val[0U];
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT____Vcellinp__v__istream_val[1U] 
        = vlSelf->istream_val[1U];
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT____Vcellinp__v__istream_val[2U] 
        = vlSelf->istream_val[2U];
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0_deq_msg 
        = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr];
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1_deq_msg 
        = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr];
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2_deq_msg 
        = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr];
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT____Vcellinp__v__ostream_rdy[0U] 
        = vlSelf->ostream_rdy[0U];
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT____Vcellinp__v__ostream_rdy[1U] 
        = vlSelf->ostream_rdy[1U];
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT____Vcellinp__v__ostream_rdy[2U] 
        = vlSelf->ostream_rdy[2U];
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__istream_msg_hdr 
        = (0xfffU & (IData)((vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr] 
                             >> 0x20U)));
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__istream_msg_hdr 
        = (0xfffU & (IData)((vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr] 
                             >> 0x20U)));
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__istream_msg_hdr 
        = (0xfffU & (IData)((vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
                             [vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr] 
                             >> 0x20U)));
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->istream_rdy[0U] = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT____Vcellout__v__istream_rdy
        [0U];
    vlSelf->istream_rdy[1U] = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT____Vcellout__v__istream_rdy
        [1U];
    vlSelf->istream_rdy[2U] = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT____Vcellout__v__istream_rdy
        [2U];
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->NetRouter___05Fp_msg_nbits_44__DOT____Vcellinp__v__istream_val
           [0U]);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->NetRouter___05Fp_msg_nbits_44__DOT____Vcellinp__v__istream_val
           [1U]);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->NetRouter___05Fp_msg_nbits_44__DOT____Vcellinp__v__istream_val
           [2U]);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inq0_num_free_entries 
        = ((IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit0_ostream_msg[0U] = 0ULL;
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit0_ostream_msg[1U] = 0ULL;
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit0_ostream_msg[2U] = 0ULL;
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit0_ostream_val[0U] = 0U;
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit0_ostream_val[1U] = 0U;
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit0_ostream_val[2U] = 0U;
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inq1_num_free_entries 
        = ((IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit1_ostream_msg[0U] = 0ULL;
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit1_ostream_msg[1U] = 0ULL;
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit1_ostream_msg[2U] = 0ULL;
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit1_ostream_val[0U] = 0U;
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit1_ostream_val[1U] = 0U;
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit1_ostream_val[2U] = 0U;
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inq2_num_free_entries 
        = ((IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)
                     ? 4U : (7U & (((IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(4U) 
                                       - ((IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit2_ostream_msg[0U] = 0ULL;
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit2_ostream_msg[1U] = 0ULL;
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit2_ostream_msg[2U] = 0ULL;
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit2_ostream_val[0U] = 0U;
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit2_ostream_val[1U] = 0U;
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit2_ostream_val[2U] = 0U;
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    if ((1U & (~ (IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if (((3U & ((IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__istream_msg_hdr) 
                    >> 8U)) == (3U & (IData)(vlSelf->router_id)))) {
            vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit0_ostream_msg[0U] 
                = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0_deq_msg;
            vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit0_ostream_val[0U] = 1U;
        } else {
            vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit0_ostream_msg[1U] 
                = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0_deq_msg;
            vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit0_ostream_val[1U] = 1U;
        }
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit0__istream_msg[0U] 
            = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit0_ostream_msg
            [0U];
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit1__istream_msg[0U] 
            = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit0_ostream_msg
            [1U];
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit2__istream_msg[0U] 
            = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit0_ostream_msg
            [2U];
    } else {
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit0__istream_msg[0U] 
            = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit0_ostream_msg
            [0U];
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit1__istream_msg[0U] 
            = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit0_ostream_msg
            [1U];
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit2__istream_msg[0U] 
            = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit0_ostream_msg
            [2U];
    }
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit0__istream_val[0U] 
        = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit0_ostream_val
        [0U];
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit1__istream_val[0U] 
        = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit0_ostream_val
        [1U];
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit2__istream_val[0U] 
        = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit0_ostream_val
        [2U];
    if ((1U & (~ (IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if (((3U & ((IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__istream_msg_hdr) 
                    >> 8U)) == (3U & (IData)(vlSelf->router_id)))) {
            vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit1_ostream_msg[0U] 
                = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1_deq_msg;
            vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit1_ostream_val[0U] = 1U;
        } else {
            vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit1_ostream_msg[1U] 
                = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1_deq_msg;
            vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit1_ostream_val[1U] = 1U;
        }
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit0__istream_msg[1U] 
            = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit1_ostream_msg
            [0U];
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit1__istream_msg[1U] 
            = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit1_ostream_msg
            [1U];
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit2__istream_msg[1U] 
            = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit1_ostream_msg
            [2U];
    } else {
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit0__istream_msg[1U] 
            = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit1_ostream_msg
            [0U];
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit1__istream_msg[1U] 
            = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit1_ostream_msg
            [1U];
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit2__istream_msg[1U] 
            = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit1_ostream_msg
            [2U];
    }
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit0__istream_val[1U] 
        = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit1_ostream_val
        [0U];
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit1__istream_val[1U] 
        = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit1_ostream_val
        [1U];
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit2__istream_val[1U] 
        = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit1_ostream_val
        [2U];
    if ((1U & (~ (IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        if (((3U & ((IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__istream_msg_hdr) 
                    >> 8U)) == (3U & (IData)(vlSelf->router_id)))) {
            vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit2_ostream_msg[0U] 
                = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2_deq_msg;
            vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit2_ostream_val[0U] = 1U;
        } else {
            vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit2_ostream_msg[1U] 
                = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2_deq_msg;
            vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit2_ostream_val[1U] = 1U;
        }
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit0__istream_msg[2U] 
            = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit2_ostream_msg
            [0U];
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit1__istream_msg[2U] 
            = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit2_ostream_msg
            [1U];
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit2__istream_msg[2U] 
            = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit2_ostream_msg
            [2U];
    } else {
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit0__istream_msg[2U] 
            = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit2_ostream_msg
            [0U];
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit1__istream_msg[2U] 
            = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit2_ostream_msg
            [1U];
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit2__istream_msg[2U] 
            = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit2_ostream_msg
            [2U];
    }
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit0__istream_val[2U] 
        = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit2_ostream_val
        [0U];
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit1__istream_val[2U] 
        = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit2_ostream_val
        [1U];
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit2__istream_val[2U] 
        = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit2_ostream_val
        [2U];
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit0__ostream_val = 0U;
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit0__ostream_msg = 0ULL;
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    if (vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit0__ostream_val = 1U;
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit0__ostream_msg 
            = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit0__istream_msg
            [1U];
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT____Vcellinp__v__ostream_rdy
            [0U];
    } else if (vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit0__ostream_val = 1U;
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit0__ostream_msg 
            = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit0__istream_msg
            [2U];
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT____Vcellinp__v__ostream_rdy
            [0U];
    } else if (vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit0__ostream_val = 1U;
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit0__ostream_msg 
            = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit0__istream_msg
            [0U];
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT____Vcellinp__v__ostream_rdy
            [0U];
    }
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit1__ostream_val = 0U;
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit1__ostream_msg = 0ULL;
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    if (vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit1__ostream_val = 1U;
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit1__ostream_msg 
            = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit1__istream_msg
            [1U];
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT____Vcellinp__v__ostream_rdy
            [1U];
    } else if (vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit1__ostream_val = 1U;
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit1__ostream_msg 
            = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit1__istream_msg
            [2U];
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT____Vcellinp__v__ostream_rdy
            [1U];
    } else if (vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit1__ostream_val = 1U;
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit1__ostream_msg 
            = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit1__istream_msg
            [0U];
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT____Vcellinp__v__ostream_rdy
            [1U];
    }
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit2__ostream_val = 0U;
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit2__ostream_msg = 0ULL;
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    if (vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit2__ostream_val = 1U;
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit2__ostream_msg 
            = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit2__istream_msg
            [1U];
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT____Vcellinp__v__ostream_rdy
            [2U];
    } else if (vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit2__ostream_val = 1U;
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit2__ostream_msg 
            = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit2__istream_msg
            [2U];
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT____Vcellinp__v__ostream_rdy
            [2U];
    } else if (vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit2__ostream_val = 1U;
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit2__ostream_msg 
            = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit2__istream_msg
            [0U];
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT____Vcellinp__v__ostream_rdy
            [2U];
    }
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT____Vcellout__v__ostream_val[0U] 
        = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit0__ostream_val;
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT____Vcellout__v__ostream_msg[0U] 
        = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit0__ostream_msg;
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit0_ostream_rdy[0U] 
        = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit0__istream_rdy
        [0U];
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit1_ostream_rdy[0U] 
        = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit0__istream_rdy
        [1U];
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit2_ostream_rdy[0U] 
        = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit0__istream_rdy
        [2U];
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT____Vcellout__v__ostream_val[1U] 
        = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit1__ostream_val;
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT____Vcellout__v__ostream_msg[1U] 
        = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit1__ostream_msg;
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit0_ostream_rdy[1U] 
        = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit1__istream_rdy
        [0U];
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit1_ostream_rdy[1U] 
        = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit1__istream_rdy
        [1U];
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit2_ostream_rdy[1U] 
        = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit1__istream_rdy
        [2U];
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT____Vcellout__v__ostream_val[2U] 
        = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit2__ostream_val;
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT____Vcellout__v__ostream_msg[2U] 
        = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit2__ostream_msg;
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit0_ostream_rdy[2U] 
        = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit2__istream_rdy
        [0U];
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit1_ostream_rdy[2U] 
        = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit2__istream_rdy
        [1U];
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit2_ostream_rdy[2U] 
        = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit2__istream_rdy
        [2U];
    vlSelf->ostream_val[0U] = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT____Vcellout__v__ostream_val
        [0U];
    vlSelf->ostream_val[1U] = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT____Vcellout__v__ostream_val
        [1U];
    vlSelf->ostream_val[2U] = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT____Vcellout__v__ostream_val
        [2U];
    vlSelf->ostream_msg[0U] = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT____Vcellout__v__ostream_msg
        [0U];
    vlSelf->ostream_msg[1U] = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT____Vcellout__v__ostream_msg
        [1U];
    vlSelf->ostream_msg[2U] = vlSelf->NetRouter___05Fp_msg_nbits_44__DOT____Vcellout__v__ostream_msg
        [2U];
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0_deq_rdy 
            = (((3U & ((IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__istream_msg_hdr) 
                       >> 8U)) == (3U & (IData)(vlSelf->router_id)))
                ? vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1_deq_rdy 
            = (((3U & ((IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__istream_msg_hdr) 
                       >> 8U)) == (3U & (IData)(vlSelf->router_id)))
                ? vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2_deq_rdy 
            = (((3U & ((IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__istream_msg_hdr) 
                       >> 8U)) == (3U & (IData)(vlSelf->router_id)))
                ? vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0_deq_rdy));
    NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1_deq_rdy));
    NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2_deq_rdy));
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
}

VL_ATTR_COLD void VNetRouter___05Fp_msg_nbits_44___024root___eval_triggers__stl(VNetRouter___05Fp_msg_nbits_44___024root* vlSelf);

VL_ATTR_COLD bool VNetRouter___05Fp_msg_nbits_44___024root___eval_phase__stl(VNetRouter___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetRouter___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouter___05Fp_msg_nbits_44___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VNetRouter___05Fp_msg_nbits_44___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VNetRouter___05Fp_msg_nbits_44___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VNetRouter___05Fp_msg_nbits_44___024root___dump_triggers__ico(VNetRouter___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetRouter___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouter___05Fp_msg_nbits_44___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void VNetRouter___05Fp_msg_nbits_44___024root___dump_triggers__act(VNetRouter___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetRouter___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouter___05Fp_msg_nbits_44___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void VNetRouter___05Fp_msg_nbits_44___024root___dump_triggers__nba(VNetRouter___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetRouter___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouter___05Fp_msg_nbits_44___024root___dump_triggers__nba\n"); );
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

VL_ATTR_COLD void VNetRouter___05Fp_msg_nbits_44___024root___ctor_var_reset(VNetRouter___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetRouter___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouter___05Fp_msg_nbits_44___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->router_id = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->istream_msg[__Vi0] = VL_RAND_RESET_Q(44);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
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
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT____Vcellout__v__ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT____Vcellinp__v__ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT____Vcellout__v__ostream_msg[__Vi0] = VL_RAND_RESET_Q(44);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT____Vcellinp__v__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT____Vcellout__v__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT____Vcellinp__v__istream_msg[__Vi0] = VL_RAND_RESET_Q(44);
    }
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inq0_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0_deq_msg = VL_RAND_RESET_Q(44);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inq1_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1_deq_msg = VL_RAND_RESET_Q(44);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1_deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inq2_num_free_entries = VL_RAND_RESET_I(3);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2_deq_msg = VL_RAND_RESET_Q(44);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2_deq_rdy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit0_ostream_msg[__Vi0] = VL_RAND_RESET_Q(44);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit0_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit0_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit1_ostream_msg[__Vi0] = VL_RAND_RESET_Q(44);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit1_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit1_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit2_ostream_msg[__Vi0] = VL_RAND_RESET_Q(44);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit2_ostream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit2_ostream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit0__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit0__ostream_msg = VL_RAND_RESET_Q(44);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit0__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit0__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit0__istream_msg[__Vi0] = VL_RAND_RESET_Q(44);
    }
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit1__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit1__ostream_msg = VL_RAND_RESET_Q(44);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit1__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit1__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit1__istream_msg[__Vi0] = VL_RAND_RESET_Q(44);
    }
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit2__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit2__ostream_msg = VL_RAND_RESET_Q(44);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit2__istream_rdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit2__istream_val[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit2__istream_msg[__Vi0] = VL_RAND_RESET_Q(44);
    }
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0] = VL_RAND_RESET_Q(44);
    }
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0] = VL_RAND_RESET_Q(44);
    }
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(2);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(2);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(2);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0] = VL_RAND_RESET_Q(44);
    }
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__str);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__str);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__istream_msg_hdr = VL_RAND_RESET_I(12);
    VL_RAND_RESET_W(4096, vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__str);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__str);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__str);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__str);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->__Vdpi_export_trigger = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
