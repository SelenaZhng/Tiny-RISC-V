// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCacheAlt___05Fp_num_banks_1.h for the primary calling header

#include "VCacheAlt___05Fp_num_banks_1__pch.h"
#include "VCacheAlt___05Fp_num_banks_1___024root.h"

VL_ATTR_COLD void VCacheAlt___05Fp_num_banks_1___024root___eval_static(VCacheAlt___05Fp_num_banks_1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCacheAlt___05Fp_num_banks_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheAlt___05Fp_num_banks_1___024root___eval_static\n"); );
}

VL_ATTR_COLD void VCacheAlt___05Fp_num_banks_1___024root___eval_initial__TOP(VCacheAlt___05Fp_num_banks_1___024root* vlSelf);

VL_ATTR_COLD void VCacheAlt___05Fp_num_banks_1___024root___eval_initial(VCacheAlt___05Fp_num_banks_1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCacheAlt___05Fp_num_banks_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheAlt___05Fp_num_banks_1___024root___eval_initial\n"); );
    // Body
    VCacheAlt___05Fp_num_banks_1___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
}

VL_ATTR_COLD void VCacheAlt___05Fp_num_banks_1___024root___eval_initial__TOP(VCacheAlt___05Fp_num_banks_1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCacheAlt___05Fp_num_banks_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheAlt___05Fp_num_banks_1___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__read_data_zero_mux_sel = 0U;
}

VL_ATTR_COLD void VCacheAlt___05Fp_num_banks_1___024root___eval_final(VCacheAlt___05Fp_num_banks_1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCacheAlt___05Fp_num_banks_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheAlt___05Fp_num_banks_1___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCacheAlt___05Fp_num_banks_1___024root___dump_triggers__stl(VCacheAlt___05Fp_num_banks_1___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VCacheAlt___05Fp_num_banks_1___024root___eval_phase__stl(VCacheAlt___05Fp_num_banks_1___024root* vlSelf);

VL_ATTR_COLD void VCacheAlt___05Fp_num_banks_1___024root___eval_settle(VCacheAlt___05Fp_num_banks_1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCacheAlt___05Fp_num_banks_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheAlt___05Fp_num_banks_1___024root___eval_settle\n"); );
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
            VCacheAlt___05Fp_num_banks_1___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("lab3_mem/CacheAlt.v", 260, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VCacheAlt___05Fp_num_banks_1___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCacheAlt___05Fp_num_banks_1___024root___dump_triggers__stl(VCacheAlt___05Fp_num_banks_1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCacheAlt___05Fp_num_banks_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheAlt___05Fp_num_banks_1___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VCacheAlt___05Fp_num_banks_1___024root___stl_sequent__TOP__0(VCacheAlt___05Fp_num_banks_1___024root* vlSelf);

VL_ATTR_COLD void VCacheAlt___05Fp_num_banks_1___024root___eval_stl(VCacheAlt___05Fp_num_banks_1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCacheAlt___05Fp_num_banks_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheAlt___05Fp_num_banks_1___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VCacheAlt___05Fp_num_banks_1___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VCacheAlt___05Fp_num_banks_1___024root___stl_sequent__TOP__0(VCacheAlt___05Fp_num_banks_1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCacheAlt___05Fp_num_banks_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheAlt___05Fp_num_banks_1___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__read_data_reg_en 
        = ((1U & (~ ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((8U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))
                                   ? ((1U & (~ ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                                                >> 2U))) 
                                      && ((1U & (~ 
                                                 ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                                                  >> 1U))) 
                                          && (1U & 
                                              (~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state)))))
                                   : ((4U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))
                                       ? ((1U & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state)))
                                       : ((1U & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))))));
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__evict_addr_reg_en 
        = ((1U & (~ ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                                         >> 3U)) && 
                                  ((1U & (~ ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                                             >> 2U))) 
                                   && ((1U & (~ ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                                                 >> 1U))) 
                                       && (1U & (~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state)))))));
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__memresp_en 
        = ((1U & (~ ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && ((1U & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & 
                                              (~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state)))))));
    vlSelf->proc2cache_reqstream_rdy = ((1U & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                                               >> 4U)) 
                                        || (1U & ((8U 
                                                   & (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))
                                                   ? 
                                                  ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                                                   >> 2U)
                                                   : 
                                                  ((1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                                                        >> 2U))) 
                                                   && ((1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                                                            >> 1U))) 
                                                       && (1U 
                                                           & (~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))))))));
    vlSelf->proc2cache_respstream_val = ((1U & (~ ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                                                   >> 4U))) 
                                         && ((1U & 
                                              ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                                               >> 3U)) 
                                             && ((1U 
                                                  & (~ 
                                                     ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                                                      >> 2U))) 
                                                 && ((1U 
                                                      & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                                                         >> 1U)) 
                                                     && (1U 
                                                         & (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))))));
    vlSelf->cache2mem_reqstream_val = ((1U & (~ ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                                                 >> 4U))) 
                                       && ((8U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))
                                            ? ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                                                    >> 2U))) 
                                               && ((1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                                                        >> 1U))) 
                                                   && (1U 
                                                       & (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))))
                                            : ((1U 
                                                & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                                                   >> 2U)) 
                                               && ((1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                                                        >> 1U))) 
                                                   && (1U 
                                                       & (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))))));
    vlSelf->cache2mem_respstream_rdy = ((1U & (~ ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                                                  >> 4U))) 
                                        && ((8U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))
                                             ? ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                                                     >> 2U))) 
                                                && ((1U 
                                                     & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                                                        >> 1U)) 
                                                    && (1U 
                                                        & (~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state)))))
                                             : ((1U 
                                                 & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                                                    >> 2U)) 
                                                && (1U 
                                                    & ((2U 
                                                        & (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))
                                                        ? 
                                                       (~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))
                                                        : (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))))));
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cachereq_en 
        = ((1U & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                  >> 4U)) || (1U & ((8U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))
                                     ? ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                                        >> 2U) : ((1U 
                                                   & (~ 
                                                      ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                                                       >> 2U))) 
                                                  && ((1U 
                                                       & (~ 
                                                          ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                                                           >> 1U))) 
                                                      && (1U 
                                                          & (~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))))))));
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__data_array_ren 
        = ((1U & (~ ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((8U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))
                                   ? ((1U & (~ ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                                                >> 2U))) 
                                      && ((1U & (~ 
                                                 ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                                                  >> 1U))) 
                                          && (1U & 
                                              (~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state)))))
                                   : ((4U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))
                                       ? ((1U & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state)))
                                       : ((1U & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))))));
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__tag_array_wen_way1 = 0U;
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__tag_array_wen_way0 = 0U;
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_wen_way1 = 0U;
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_wen_way0 = 0U;
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__wben_mux_sel 
        = ((1U & (~ ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && ((1U & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))))));
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__write_data_mux_sel 
        = ((1U & (~ ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && ((1U & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))))));
    if ((0x10U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))) {
        vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__memreq_type = 0U;
        vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cacheresp_type = 0U;
    } else if ((8U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))) {
        if ((4U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))) {
            vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__memreq_type = 0U;
            vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cacheresp_type = 0U;
        } else if ((2U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))) {
            vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__memreq_type = 0U;
            if ((1U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))) {
                vlSelf->__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__cs__18__cs_cacheresp_type 
                    = vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_type_reg_out;
                vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cacheresp_type 
                    = vlSelf->__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__cs__18__cs_cacheresp_type;
            } else {
                vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cacheresp_type = 0U;
            }
        } else {
            vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__memreq_type 
                = ((1U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))
                    ? 1U : 0U);
            vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cacheresp_type = 0U;
        }
    } else {
        vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__memreq_type = 0U;
        vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cacheresp_type 
            = ((4U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))
                ? ((2U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))
                    ? 0U : ((1U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))
                             ? 0U : 1U)) : ((2U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))
                                             ? ((1U 
                                                 & (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))
                                                 ? 0U
                                                 : 2U)
                                             : 0U));
    }
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__mem_req_addr_mux_sel 
        = ((1U & (~ ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && (1U & ((2U 
                                                 & (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))
                                                 ? 
                                                (~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))
                                                 : (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))))));
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__data_array_wen 
        = ((1U & (~ ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && (1U & ((4U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))
                                             ? ((2U 
                                                 & (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))
                                                 ? (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state)
                                                 : 
                                                (~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state)))
                                             : ((1U 
                                                 & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                                                    >> 1U)) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))))))));
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__data 
        = ((1U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_type_reg_out))
            ? 0U : ((8U & vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out)
                     ? ((4U & vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out)
                         ? vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__read_data_reg_out[3U]
                         : vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__read_data_reg_out[2U])
                     : ((4U & vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out)
                         ? vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__read_data_reg_out[1U]
                         : vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__read_data_reg_out[0U])));
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_way0 
        = vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits_way0__DOT__rfile
        [(7U & (vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                >> 4U))];
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_way1 
        = vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits_way1__DOT__rfile
        [(7U & (vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                >> 4U))];
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__tag_array_ren 
        = ((1U & (~ ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                     >> 4U))) && (1U & ((8U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))
                                         ? ((1U & (~ 
                                                   ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                                                    >> 2U))) 
                                            && ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                                                     >> 1U))) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state)))))
                                         : ((4U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))
                                             ? ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state) 
                                                     >> 1U))) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))))
                                             : (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state)))));
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__wben_mux_out 
        = (0xffffU & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__wben_mux_sel)
                       ? ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__wben_mux_sel)
                           ? 0xffffU : 0U) : ((IData)(0xfU) 
                                              << (0xcU 
                                                  & vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out))));
    if (vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__write_data_mux_sel) {
        if (vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__write_data_mux_sel) {
            vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__write_data_mux_out[0U] 
                = vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__memresp_data_reg_out[0U];
            vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__write_data_mux_out[1U] 
                = vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__memresp_data_reg_out[1U];
            vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__write_data_mux_out[2U] 
                = vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__memresp_data_reg_out[2U];
            vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__write_data_mux_out[3U] 
                = vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__memresp_data_reg_out[3U];
        } else {
            vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__write_data_mux_out[0U] = 0U;
            vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__write_data_mux_out[1U] = 0U;
            vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__write_data_mux_out[2U] = 0U;
            vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__write_data_mux_out[3U] = 0U;
        }
    } else {
        vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__write_data_mux_out[0U] 
            = vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_data_reg_out;
        vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__write_data_mux_out[1U] 
            = vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_data_reg_out;
        vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__write_data_mux_out[2U] 
            = vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_data_reg_out;
        vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__write_data_mux_out[3U] 
            = vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_data_reg_out;
    }
    vlSelf->cache2mem_reqstream_msg[0U] = vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__read_data_reg_out[0U];
    vlSelf->cache2mem_reqstream_msg[1U] = vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__read_data_reg_out[1U];
    vlSelf->cache2mem_reqstream_msg[2U] = vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__read_data_reg_out[2U];
    vlSelf->cache2mem_reqstream_msg[3U] = vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__read_data_reg_out[3U];
    vlSelf->cache2mem_reqstream_msg[4U] = (((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__mem_req_addr_mux_sel)
                                             ? ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__mem_req_addr_mux_sel)
                                                 ? 
                                                (0x7ffffff0U 
                                                 & vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out)
                                                 : 0U)
                                             : vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__evict_addr_reg_out) 
                                           << 4U);
    vlSelf->cache2mem_reqstream_msg[5U] = (((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__memreq_type) 
                                            << 0xcU) 
                                           | (((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__mem_req_addr_mux_sel)
                                                ? ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__mem_req_addr_mux_sel)
                                                    ? 
                                                   (0x7ffffff0U 
                                                    & vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out)
                                                    : 0U)
                                                : vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__evict_addr_reg_out) 
                                              >> 0x1cU));
    vlSelf->proc2cache_respstream_msg = (((QData)((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cacheresp_type)) 
                                          << 0x2cU) 
                                         | (((QData)((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_opaque_reg_out)) 
                                             << 0x24U) 
                                            | (((QData)((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__hit_out)) 
                                                << 0x22U) 
                                               | (QData)((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__data)))));
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__victim_sel 
        = ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_way0) 
           && ((1U & (~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_way1))) 
               || vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__use_bits__DOT__rfile
               [(7U & (vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                       >> 4U))]));
    if (vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__tag_array_ren) {
        vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__tag_array0_out 
            = vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__tag_array_way0__DOT__mem
            [(7U & (vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                    >> 4U))];
        vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__tag_array1_out 
            = vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__tag_array_way1__DOT__mem
            [(7U & (vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                    >> 4U))];
    } else {
        vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__tag_array0_out = 0U;
        vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__tag_array1_out = 0U;
    }
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__active_way 
        = (((8U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state)) 
            | ((9U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state)) 
               | ((0xaU == (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state)) 
                  | (7U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state)))))
            ? (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__victim_sel)
            : (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__way_sel_reg_out));
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__hit_w0 
        = ((vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__tag_array0_out 
            == (0xffffffU & (vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                             >> 7U))) & vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits_way0__DOT__rfile
           [(7U & (vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                   >> 4U))]);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__hit_w1 
        = ((vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__tag_array1_out 
            == (0xffffffU & (vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                             >> 7U))) & vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits_way1__DOT__rfile
           [(7U & (vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                   >> 4U))]);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT____Vcellinp__data_array_way0__write_en 
        = ((~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__active_way)) 
           & (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__data_array_wen));
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT____Vcellinp__data_array_way1__write_en 
        = ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__data_array_wen) 
           & (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__active_way));
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__use_bit_wen = 0U;
    if (((3U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__hit_w1)))) {
        vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__use_bit_wen = 1U;
        vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__use_bit_wdata = 0U;
        vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__use_bit_wdata 
            = vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__hit_w0;
    } else {
        vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__use_bit_wdata = 0U;
    }
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__dirty_wdata_way1 = 0U;
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__dirty_wdata_way0 = 0U;
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__dirty_wen_way1 = 0U;
    if (((4U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__hit_w1)))) {
        vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__use_bit_wen = 1U;
        vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__use_bit_wdata 
            = vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__hit_w0;
    }
    if ((2U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))) {
        if (vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__way_sel_reg_out) {
            vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__tag_array_wen_way1 = 1U;
            vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_wen_way1 = 1U;
            vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__dirty_wdata_way1 = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__tag_array_wen_way0 = 1U;
            vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_wen_way0 = 1U;
        }
    }
    if (((4U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__hit_w1)))) {
        if ((1U & (~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__hit_w0)))) {
            vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__dirty_wdata_way1 = 1U;
        }
    }
    if ((2U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))) {
        if ((1U & (~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__dirty_wdata_way0 = 0U;
        }
    }
    if (((4U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__hit_w1)))) {
        if (vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__hit_w0) {
            vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__dirty_wdata_way0 = 1U;
        }
    }
    if ((2U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))) {
        if (vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__way_sel_reg_out) {
            vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__dirty_wen_way1 = 1U;
        }
    }
    if (((4U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__hit_w1)))) {
        if ((1U & (~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__hit_w0)))) {
            vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__dirty_wen_way1 = 1U;
        }
    }
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__dirty_wen_way0 = 0U;
    if ((2U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))) {
        if ((1U & (~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__dirty_wen_way0 = 1U;
        }
    }
    if (((4U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__hit_w1)))) {
        if (vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__hit_w0) {
            vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__dirty_wen_way0 = 1U;
        }
    }
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__0 
        = ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__hit_w0) 
           | (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__hit_w1));
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__hit_next 
        = vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__hit_out;
    if ((1U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))) {
        vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__hit_next 
            = ((2U != (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_type_reg_out)) 
               && (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__0));
    }
    if ((0U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))) {
        vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__hit_next = 0U;
        vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__next_state 
            = vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state;
        if (vlSelf->proc2cache_reqstream_val) {
            if (vlSelf->proc2cache_reqstream_val) {
                vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__next_state = 1U;
            }
        } else {
            vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__next_state = 0U;
        }
    } else {
        vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__next_state 
            = vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state;
    }
    if ((1U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))) {
        vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__next_state 
            = ((2U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_type_reg_out))
                ? 2U : ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__0)
                         ? ((0U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_type_reg_out))
                             ? 3U : 4U) : ((1U & ((~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_way0)) 
                                                  | (~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_way1))))
                                            ? 5U : 
                                           ((((~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__victim_sel)) 
                                              & vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__dirty_bits_way0__DOT__rfile
                                              [(7U 
                                                & (vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                                                   >> 4U))]) 
                                             | ((IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__victim_sel) 
                                                & vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__dirty_bits_way1__DOT__rfile
                                                [(7U 
                                                  & (vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                                                     >> 4U))]))
                                             ? 8U : 5U))));
    }
    if ((0xbU == (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))) {
        if (vlSelf->proc2cache_respstream_rdy) {
            if (vlSelf->proc2cache_respstream_rdy) {
                vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__next_state = 0U;
            }
        } else {
            vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__next_state = 0xbU;
        }
    }
    if ((2U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))) {
        vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__next_state = 0xbU;
    }
    if ((3U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))) {
        vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__next_state = 0xbU;
    }
    if ((4U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))) {
        vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__next_state = 0xbU;
    }
    if ((8U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))) {
        vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__next_state = 9U;
    }
    if ((9U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))) {
        if (vlSelf->cache2mem_reqstream_rdy) {
            if (vlSelf->cache2mem_reqstream_rdy) {
                vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__next_state = 0xaU;
            }
        } else {
            vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__next_state = 9U;
        }
    }
    if ((0xaU == (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))) {
        if (vlSelf->cache2mem_respstream_val) {
            if (vlSelf->cache2mem_respstream_val) {
                vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__next_state = 5U;
            }
        } else {
            vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__next_state = 0xaU;
        }
    }
    if ((5U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))) {
        if (vlSelf->cache2mem_reqstream_rdy) {
            if (vlSelf->cache2mem_reqstream_rdy) {
                vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__next_state = 6U;
            }
        } else {
            vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__next_state = 5U;
        }
    }
    if ((6U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))) {
        if (vlSelf->cache2mem_respstream_val) {
            if (vlSelf->cache2mem_respstream_val) {
                vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__next_state = 7U;
            }
        } else {
            vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__next_state = 6U;
        }
    }
    if ((7U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))) {
        if (vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__way_sel_reg_out) {
            vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__tag_array_wen_way1 = 1U;
            vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_wen_way1 = 1U;
            vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__dirty_wdata_way1 = 0U;
            vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__dirty_wen_way1 = 1U;
        }
        if ((1U & (~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__tag_array_wen_way0 = 1U;
            vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_wen_way0 = 1U;
            vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__dirty_wdata_way0 = 0U;
            vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__dirty_wen_way0 = 1U;
            vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__use_bit_wen = 1U;
            vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__use_bit_wdata = 1U;
        } else {
            vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__use_bit_wen = 1U;
            vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__use_bit_wdata = 0U;
        }
        vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__hit_next = 0U;
        if ((0U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_type_reg_out))) {
            vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__next_state = 3U;
        } else if ((1U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_type_reg_out))) {
            vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__next_state = 4U;
        }
    }
}

VL_ATTR_COLD void VCacheAlt___05Fp_num_banks_1___024root___eval_triggers__stl(VCacheAlt___05Fp_num_banks_1___024root* vlSelf);

VL_ATTR_COLD bool VCacheAlt___05Fp_num_banks_1___024root___eval_phase__stl(VCacheAlt___05Fp_num_banks_1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCacheAlt___05Fp_num_banks_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheAlt___05Fp_num_banks_1___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VCacheAlt___05Fp_num_banks_1___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VCacheAlt___05Fp_num_banks_1___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCacheAlt___05Fp_num_banks_1___024root___dump_triggers__ico(VCacheAlt___05Fp_num_banks_1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCacheAlt___05Fp_num_banks_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheAlt___05Fp_num_banks_1___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void VCacheAlt___05Fp_num_banks_1___024root___dump_triggers__act(VCacheAlt___05Fp_num_banks_1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCacheAlt___05Fp_num_banks_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheAlt___05Fp_num_banks_1___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: Internal 'act' trigger - DPI export trigger\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk or posedge reset)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VCacheAlt___05Fp_num_banks_1___024root___dump_triggers__nba(VCacheAlt___05Fp_num_banks_1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCacheAlt___05Fp_num_banks_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheAlt___05Fp_num_banks_1___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: Internal 'nba' trigger - DPI export trigger\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk or posedge reset)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VCacheAlt___05Fp_num_banks_1___024root___ctor_var_reset(VCacheAlt___05Fp_num_banks_1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCacheAlt___05Fp_num_banks_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheAlt___05Fp_num_banks_1___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(176, vlSelf->cache2mem_reqstream_msg);
    vlSelf->cache2mem_reqstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->cache2mem_reqstream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(146, vlSelf->cache2mem_respstream_msg);
    vlSelf->cache2mem_respstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->cache2mem_respstream_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(78, vlSelf->proc2cache_reqstream_msg);
    vlSelf->proc2cache_reqstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->proc2cache_reqstream_val = VL_RAND_RESET_I(1);
    vlSelf->proc2cache_respstream_msg = VL_RAND_RESET_Q(48);
    vlSelf->proc2cache_respstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->proc2cache_respstream_val = VL_RAND_RESET_I(1);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cachereq_en = VL_RAND_RESET_I(1);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__memresp_en = VL_RAND_RESET_I(1);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__write_data_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__wben_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__data_array_ren = VL_RAND_RESET_I(1);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__data_array_wen = VL_RAND_RESET_I(1);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__tag_array_ren = VL_RAND_RESET_I(1);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__tag_array_wen_way0 = VL_RAND_RESET_I(1);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__tag_array_wen_way1 = VL_RAND_RESET_I(1);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__read_data_reg_en = VL_RAND_RESET_I(1);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__read_data_zero_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__evict_addr_reg_en = VL_RAND_RESET_I(1);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__mem_req_addr_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cacheresp_type = VL_RAND_RESET_I(4);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__memreq_type = VL_RAND_RESET_I(4);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state = VL_RAND_RESET_I(5);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__next_state = VL_RAND_RESET_I(5);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_way0 = VL_RAND_RESET_I(1);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_way1 = VL_RAND_RESET_I(1);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_wen_way0 = VL_RAND_RESET_I(1);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_wen_way1 = VL_RAND_RESET_I(1);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__dirty_wen_way0 = VL_RAND_RESET_I(1);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__dirty_wen_way1 = VL_RAND_RESET_I(1);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__dirty_wdata_way0 = VL_RAND_RESET_I(1);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__dirty_wdata_way1 = VL_RAND_RESET_I(1);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__hit_w0 = VL_RAND_RESET_I(1);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__hit_w1 = VL_RAND_RESET_I(1);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__use_bit_wdata = VL_RAND_RESET_I(1);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__use_bit_wen = VL_RAND_RESET_I(1);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__victim_sel = VL_RAND_RESET_I(1);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__hit_out = VL_RAND_RESET_I(1);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__hit_next = VL_RAND_RESET_I(1);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__way_sel_reg_out = VL_RAND_RESET_I(1);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits_way0__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits_way1__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__dirty_bits_way0__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__dirty_bits_way1__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__use_bits__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_opaque_reg_out = VL_RAND_RESET_I(8);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_type_reg_out = VL_RAND_RESET_I(4);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out = VL_RAND_RESET_I(32);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_data_reg_out = VL_RAND_RESET_I(32);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__wben_mux_out = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(128, vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__memresp_data_reg_out);
    VL_RAND_RESET_W(128, vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__write_data_mux_out);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__tag_array0_out = VL_RAND_RESET_I(24);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__tag_array1_out = VL_RAND_RESET_I(24);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__evict_addr_reg_out = VL_RAND_RESET_I(32);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__active_way = VL_RAND_RESET_I(1);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT____Vcellinp__data_array_way0__write_en = VL_RAND_RESET_I(1);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT____Vcellinp__data_array_way1__write_en = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__read_data_reg_out);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__tag_array_way0__DOT__mem[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__tag_array_way1__DOT__mem[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem[__Vi0]);
    }
    VL_RAND_RESET_W(4096, vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__str);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__data = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__str);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__str);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__str);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__cs__18__cs_cacheresp_type = VL_RAND_RESET_I(4);
    vlSelf->__Vdpi_export_trigger = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = VL_RAND_RESET_I(1);
}
