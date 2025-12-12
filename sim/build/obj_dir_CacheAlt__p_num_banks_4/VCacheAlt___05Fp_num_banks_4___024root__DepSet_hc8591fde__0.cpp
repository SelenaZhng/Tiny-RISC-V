// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCacheAlt___05Fp_num_banks_4.h for the primary calling header

#include "VCacheAlt___05Fp_num_banks_4__pch.h"
#include "VCacheAlt___05Fp_num_banks_4___024root.h"

void VCacheAlt___05Fp_num_banks_4___024root___ico_sequent__TOP__0(VCacheAlt___05Fp_num_banks_4___024root* vlSelf);

void VCacheAlt___05Fp_num_banks_4___024root___eval_ico(VCacheAlt___05Fp_num_banks_4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCacheAlt___05Fp_num_banks_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheAlt___05Fp_num_banks_4___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VCacheAlt___05Fp_num_banks_4___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VCacheAlt___05Fp_num_banks_4___024root___ico_sequent__TOP__0(VCacheAlt___05Fp_num_banks_4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCacheAlt___05Fp_num_banks_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheAlt___05Fp_num_banks_4___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__next_state 
        = vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state;
    if ((0U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))) {
        if (vlSelf->proc2cache_reqstream_val) {
            if (vlSelf->proc2cache_reqstream_val) {
                vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__next_state = 1U;
            }
        } else {
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__next_state = 0U;
        }
    }
    if ((1U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__next_state 
            = ((2U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_type_reg_out))
                ? 2U : ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__0)
                         ? ((0U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_type_reg_out))
                             ? 3U : 4U) : ((1U & ((~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__valid_way0)) 
                                                  | (~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__valid_way1))))
                                            ? 5U : 
                                           ((((~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__victim_sel)) 
                                              & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_bits_way0__DOT__rfile
                                              [(7U 
                                                & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                                                   >> 6U))]) 
                                             | ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__victim_sel) 
                                                & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_bits_way1__DOT__rfile
                                                [(7U 
                                                  & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                                                     >> 6U))]))
                                             ? 8U : 5U))));
    }
    if ((0xbU == (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))) {
        if (vlSelf->proc2cache_respstream_rdy) {
            if (vlSelf->proc2cache_respstream_rdy) {
                vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__next_state = 0U;
            }
        } else {
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__next_state = 0xbU;
        }
    }
    if ((2U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__next_state = 0xbU;
    }
    if ((3U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__next_state = 0xbU;
    }
    if ((4U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__next_state = 0xbU;
    }
    if ((8U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__next_state = 9U;
    }
    if ((9U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))) {
        if (vlSelf->cache2mem_reqstream_rdy) {
            if (vlSelf->cache2mem_reqstream_rdy) {
                vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__next_state = 0xaU;
            }
        } else {
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__next_state = 9U;
        }
    }
    if ((0xaU == (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))) {
        if (vlSelf->cache2mem_respstream_val) {
            if (vlSelf->cache2mem_respstream_val) {
                vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__next_state = 5U;
            }
        } else {
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__next_state = 0xaU;
        }
    }
    if ((5U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))) {
        if (vlSelf->cache2mem_reqstream_rdy) {
            if (vlSelf->cache2mem_reqstream_rdy) {
                vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__next_state = 6U;
            }
        } else {
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__next_state = 5U;
        }
    }
    if ((6U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))) {
        if (vlSelf->cache2mem_respstream_val) {
            if (vlSelf->cache2mem_respstream_val) {
                vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__next_state = 7U;
            }
        } else {
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__next_state = 6U;
        }
    }
    if ((7U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))) {
        if ((0U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_type_reg_out))) {
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__next_state = 3U;
        } else if ((1U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_type_reg_out))) {
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__next_state = 4U;
        }
    }
}

void VCacheAlt___05Fp_num_banks_4___024root___eval_triggers__ico(VCacheAlt___05Fp_num_banks_4___024root* vlSelf);

bool VCacheAlt___05Fp_num_banks_4___024root___eval_phase__ico(VCacheAlt___05Fp_num_banks_4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCacheAlt___05Fp_num_banks_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheAlt___05Fp_num_banks_4___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VCacheAlt___05Fp_num_banks_4___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VCacheAlt___05Fp_num_banks_4___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VCacheAlt___05Fp_num_banks_4___024root___eval_act(VCacheAlt___05Fp_num_banks_4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCacheAlt___05Fp_num_banks_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheAlt___05Fp_num_banks_4___024root___eval_act\n"); );
}

void VCacheAlt___05Fp_num_banks_4___024root___nba_sequent__TOP__0(VCacheAlt___05Fp_num_banks_4___024root* vlSelf);
void VCacheAlt___05Fp_num_banks_4___024root___nba_sequent__TOP__1(VCacheAlt___05Fp_num_banks_4___024root* vlSelf);
void VCacheAlt___05Fp_num_banks_4___024root___nba_comb__TOP__0(VCacheAlt___05Fp_num_banks_4___024root* vlSelf);

void VCacheAlt___05Fp_num_banks_4___024root___eval_nba(VCacheAlt___05Fp_num_banks_4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCacheAlt___05Fp_num_banks_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheAlt___05Fp_num_banks_4___024root___eval_nba\n"); );
    // Body
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VCacheAlt___05Fp_num_banks_4___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VCacheAlt___05Fp_num_banks_4___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((6ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VCacheAlt___05Fp_num_banks_4___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VCacheAlt___05Fp_num_banks_4___024root___nba_sequent__TOP__0(VCacheAlt___05Fp_num_banks_4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCacheAlt___05Fp_num_banks_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheAlt___05Fp_num_banks_4___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*2:0*/ __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__valid_bits_way0__DOT__rfile__v0;
    __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__valid_bits_way0__DOT__rfile__v0 = 0;
    CData/*2:0*/ __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__valid_bits_way1__DOT__rfile__v0;
    __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__valid_bits_way1__DOT__rfile__v0 = 0;
    CData/*0:0*/ __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_bits_way0__DOT__rfile__v0;
    __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_bits_way0__DOT__rfile__v0 = 0;
    CData/*2:0*/ __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_bits_way0__DOT__rfile__v0;
    __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_bits_way0__DOT__rfile__v0 = 0;
    CData/*0:0*/ __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_bits_way1__DOT__rfile__v0;
    __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_bits_way1__DOT__rfile__v0 = 0;
    CData/*2:0*/ __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_bits_way1__DOT__rfile__v0;
    __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_bits_way1__DOT__rfile__v0 = 0;
    CData/*0:0*/ __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__use_bits__DOT__rfile__v0;
    __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__use_bits__DOT__rfile__v0 = 0;
    CData/*2:0*/ __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__use_bits__DOT__rfile__v0;
    __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__use_bits__DOT__rfile__v0 = 0;
    CData/*7:0*/ __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v0;
    __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v0 = 0;
    CData/*2:0*/ __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v0;
    __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v1;
    __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v1 = 0;
    CData/*2:0*/ __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v1;
    __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v2;
    __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v2 = 0;
    CData/*2:0*/ __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v2;
    __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v3;
    __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v3 = 0;
    CData/*2:0*/ __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v3;
    __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v4;
    __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v4 = 0;
    CData/*2:0*/ __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v4;
    __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v4 = 0;
    CData/*7:0*/ __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v5;
    __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v5 = 0;
    CData/*2:0*/ __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v5;
    __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v5 = 0;
    CData/*7:0*/ __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v6;
    __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v6 = 0;
    CData/*2:0*/ __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v6;
    __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v6 = 0;
    CData/*7:0*/ __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v7;
    __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v7 = 0;
    CData/*2:0*/ __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v7;
    __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v7 = 0;
    CData/*7:0*/ __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v8;
    __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v8 = 0;
    CData/*2:0*/ __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v8;
    __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v8 = 0;
    CData/*7:0*/ __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v9;
    __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v9 = 0;
    CData/*2:0*/ __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v9;
    __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v9 = 0;
    CData/*7:0*/ __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v10;
    __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v10 = 0;
    CData/*2:0*/ __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v10;
    __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v10 = 0;
    CData/*7:0*/ __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v11;
    __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v11 = 0;
    CData/*2:0*/ __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v11;
    __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v11 = 0;
    CData/*7:0*/ __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v12;
    __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v12 = 0;
    CData/*2:0*/ __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v12;
    __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v12 = 0;
    CData/*7:0*/ __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v13;
    __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v13 = 0;
    CData/*2:0*/ __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v13;
    __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v13 = 0;
    CData/*7:0*/ __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v14;
    __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v14 = 0;
    CData/*2:0*/ __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v14;
    __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v14 = 0;
    CData/*7:0*/ __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v15;
    __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v15 = 0;
    CData/*2:0*/ __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v15;
    __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v15 = 0;
    CData/*7:0*/ __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v0;
    __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v0 = 0;
    CData/*2:0*/ __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v0;
    __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v1;
    __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v1 = 0;
    CData/*2:0*/ __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v1;
    __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v2;
    __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v2 = 0;
    CData/*2:0*/ __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v2;
    __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v3;
    __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v3 = 0;
    CData/*2:0*/ __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v3;
    __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v4;
    __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v4 = 0;
    CData/*2:0*/ __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v4;
    __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v4 = 0;
    CData/*7:0*/ __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v5;
    __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v5 = 0;
    CData/*2:0*/ __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v5;
    __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v5 = 0;
    CData/*7:0*/ __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v6;
    __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v6 = 0;
    CData/*2:0*/ __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v6;
    __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v6 = 0;
    CData/*7:0*/ __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v7;
    __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v7 = 0;
    CData/*2:0*/ __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v7;
    __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v7 = 0;
    CData/*7:0*/ __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v8;
    __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v8 = 0;
    CData/*2:0*/ __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v8;
    __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v8 = 0;
    CData/*7:0*/ __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v9;
    __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v9 = 0;
    CData/*2:0*/ __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v9;
    __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v9 = 0;
    CData/*7:0*/ __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v10;
    __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v10 = 0;
    CData/*2:0*/ __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v10;
    __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v10 = 0;
    CData/*7:0*/ __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v11;
    __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v11 = 0;
    CData/*2:0*/ __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v11;
    __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v11 = 0;
    CData/*7:0*/ __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v12;
    __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v12 = 0;
    CData/*2:0*/ __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v12;
    __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v12 = 0;
    CData/*7:0*/ __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v13;
    __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v13 = 0;
    CData/*2:0*/ __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v13;
    __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v13 = 0;
    CData/*7:0*/ __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v14;
    __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v14 = 0;
    CData/*2:0*/ __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v14;
    __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v14 = 0;
    CData/*7:0*/ __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v15;
    __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v15 = 0;
    CData/*2:0*/ __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v15;
    __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v15 = 0;
    CData/*0:0*/ __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__valid_bits_way0__DOT__rfile__v0;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__valid_bits_way0__DOT__rfile__v0 = 0;
    CData/*0:0*/ __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__valid_bits_way1__DOT__rfile__v0;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__valid_bits_way1__DOT__rfile__v0 = 0;
    CData/*0:0*/ __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_bits_way0__DOT__rfile__v0;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_bits_way0__DOT__rfile__v0 = 0;
    CData/*0:0*/ __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_bits_way1__DOT__rfile__v0;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_bits_way1__DOT__rfile__v0 = 0;
    CData/*0:0*/ __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__use_bits__DOT__rfile__v0;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__use_bits__DOT__rfile__v0 = 0;
    CData/*0:0*/ __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v0;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v1;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v2;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v3;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v4;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v4 = 0;
    CData/*0:0*/ __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v5;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v5 = 0;
    CData/*0:0*/ __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v6;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v6 = 0;
    CData/*0:0*/ __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v7;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v7 = 0;
    CData/*0:0*/ __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v8;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v8 = 0;
    CData/*0:0*/ __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v9;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v9 = 0;
    CData/*0:0*/ __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v10;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v10 = 0;
    CData/*0:0*/ __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v11;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v11 = 0;
    CData/*0:0*/ __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v12;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v12 = 0;
    CData/*0:0*/ __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v13;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v13 = 0;
    CData/*0:0*/ __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v14;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v14 = 0;
    CData/*0:0*/ __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v15;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v15 = 0;
    CData/*0:0*/ __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v0;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v1;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v2;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v3;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v4;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v4 = 0;
    CData/*0:0*/ __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v5;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v5 = 0;
    CData/*0:0*/ __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v6;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v6 = 0;
    CData/*0:0*/ __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v7;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v7 = 0;
    CData/*0:0*/ __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v8;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v8 = 0;
    CData/*0:0*/ __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v9;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v9 = 0;
    CData/*0:0*/ __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v10;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v10 = 0;
    CData/*0:0*/ __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v11;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v11 = 0;
    CData/*0:0*/ __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v12;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v12 = 0;
    CData/*0:0*/ __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v13;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v13 = 0;
    CData/*0:0*/ __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v14;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v14 = 0;
    CData/*0:0*/ __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v15;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v15 = 0;
    // Body
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_bits_way1__DOT__rfile__v0 = 0U;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_bits_way0__DOT__rfile__v0 = 0U;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__use_bits__DOT__rfile__v0 = 0U;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__valid_bits_way1__DOT__rfile__v0 = 0U;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__valid_bits_way0__DOT__rfile__v0 = 0U;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v0 = 0U;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v1 = 0U;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v2 = 0U;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v3 = 0U;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v4 = 0U;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v5 = 0U;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v6 = 0U;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v7 = 0U;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v8 = 0U;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v9 = 0U;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v10 = 0U;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v11 = 0U;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v12 = 0U;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v13 = 0U;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v14 = 0U;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v15 = 0U;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v0 = 0U;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v1 = 0U;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v2 = 0U;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v3 = 0U;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v4 = 0U;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v5 = 0U;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v6 = 0U;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v7 = 0U;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v8 = 0U;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v9 = 0U;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v10 = 0U;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v11 = 0U;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v12 = 0U;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v13 = 0U;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v14 = 0U;
    __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v15 = 0U;
    if (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__tag_array_wen_way0) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__tag_array_way0__DOT__mem[(7U 
                                                                                & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                                                                                >> 6U))] 
            = (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
               >> 9U);
    }
    if (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__tag_array_wen_way1) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__tag_array_way1__DOT__mem[(7U 
                                                                                & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                                                                                >> 6U))] 
            = (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
               >> 9U);
    }
    if (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_wen_way1) {
        __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_bits_way1__DOT__rfile__v0 
            = vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_wdata_way1;
        __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_bits_way1__DOT__rfile__v0 
            = (7U & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                     >> 6U));
        __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_bits_way1__DOT__rfile__v0 = 1U;
    }
    if (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_wen_way0) {
        __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_bits_way0__DOT__rfile__v0 
            = vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_wdata_way0;
        __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_bits_way0__DOT__rfile__v0 
            = (7U & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                     >> 6U));
        __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_bits_way0__DOT__rfile__v0 = 1U;
    }
    if (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__use_bit_wen) {
        __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__use_bits__DOT__rfile__v0 
            = vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__use_bit_wdata;
        __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__use_bits__DOT__rfile__v0 
            = (7U & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                     >> 6U));
        __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__use_bits__DOT__rfile__v0 = 1U;
    }
    if (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__valid_wen_way1) {
        __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__valid_bits_way1__DOT__rfile__v0 
            = (7U & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                     >> 6U));
        __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__valid_bits_way1__DOT__rfile__v0 = 1U;
    }
    if (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__valid_wen_way0) {
        __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__valid_bits_way0__DOT__rfile__v0 
            = (7U & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                     >> 6U));
        __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__valid_bits_way0__DOT__rfile__v0 = 1U;
    }
    if (((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT____Vcellinp__data_array_way1__write_en) 
         & (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__wben_mux_out))) {
        __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v0 
            = (0xffU & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__write_data_mux_out[0U]);
        __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v0 
            = (7U & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                     >> 6U));
        __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT____Vcellinp__data_array_way1__write_en) 
         & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__wben_mux_out) 
            >> 1U))) {
        __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v1 
            = (0xffU & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__write_data_mux_out[0U] 
                        >> 8U));
        __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v1 
            = (7U & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                     >> 6U));
        __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v1 = 1U;
    }
    if (((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT____Vcellinp__data_array_way1__write_en) 
         & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__wben_mux_out) 
            >> 2U))) {
        __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v2 
            = (0xffU & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__write_data_mux_out[0U] 
                        >> 0x10U));
        __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v2 
            = (7U & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                     >> 6U));
        __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v2 = 1U;
    }
    if (((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT____Vcellinp__data_array_way1__write_en) 
         & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__wben_mux_out) 
            >> 3U))) {
        __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v3 
            = (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__write_data_mux_out[0U] 
               >> 0x18U);
        __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v3 
            = (7U & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                     >> 6U));
        __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v3 = 1U;
    }
    if (((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT____Vcellinp__data_array_way1__write_en) 
         & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__wben_mux_out) 
            >> 4U))) {
        __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v4 
            = (0xffU & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__write_data_mux_out[1U]);
        __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v4 
            = (7U & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                     >> 6U));
        __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v4 = 1U;
    }
    if (((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT____Vcellinp__data_array_way1__write_en) 
         & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__wben_mux_out) 
            >> 5U))) {
        __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v5 
            = (0xffU & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__write_data_mux_out[1U] 
                        >> 8U));
        __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v5 
            = (7U & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                     >> 6U));
        __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v5 = 1U;
    }
    if (((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT____Vcellinp__data_array_way1__write_en) 
         & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__wben_mux_out) 
            >> 6U))) {
        __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v6 
            = (0xffU & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__write_data_mux_out[1U] 
                        >> 0x10U));
        __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v6 
            = (7U & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                     >> 6U));
        __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v6 = 1U;
    }
    if (((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT____Vcellinp__data_array_way1__write_en) 
         & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__wben_mux_out) 
            >> 7U))) {
        __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v7 
            = (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__write_data_mux_out[1U] 
               >> 0x18U);
        __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v7 
            = (7U & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                     >> 6U));
        __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v7 = 1U;
    }
    if (((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT____Vcellinp__data_array_way1__write_en) 
         & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__wben_mux_out) 
            >> 8U))) {
        __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v8 
            = (0xffU & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__write_data_mux_out[2U]);
        __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v8 
            = (7U & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                     >> 6U));
        __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v8 = 1U;
    }
    if (((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT____Vcellinp__data_array_way1__write_en) 
         & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__wben_mux_out) 
            >> 9U))) {
        __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v9 
            = (0xffU & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__write_data_mux_out[2U] 
                        >> 8U));
        __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v9 
            = (7U & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                     >> 6U));
        __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v9 = 1U;
    }
    if (((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT____Vcellinp__data_array_way1__write_en) 
         & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__wben_mux_out) 
            >> 0xaU))) {
        __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v10 
            = (0xffU & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__write_data_mux_out[2U] 
                        >> 0x10U));
        __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v10 
            = (7U & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                     >> 6U));
        __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v10 = 1U;
    }
    if (((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT____Vcellinp__data_array_way1__write_en) 
         & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__wben_mux_out) 
            >> 0xbU))) {
        __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v11 
            = (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__write_data_mux_out[2U] 
               >> 0x18U);
        __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v11 
            = (7U & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                     >> 6U));
        __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v11 = 1U;
    }
    if (((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT____Vcellinp__data_array_way1__write_en) 
         & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__wben_mux_out) 
            >> 0xcU))) {
        __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v12 
            = (0xffU & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__write_data_mux_out[3U]);
        __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v12 
            = (7U & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                     >> 6U));
        __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v12 = 1U;
    }
    if (((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT____Vcellinp__data_array_way1__write_en) 
         & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__wben_mux_out) 
            >> 0xdU))) {
        __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v13 
            = (0xffU & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__write_data_mux_out[3U] 
                        >> 8U));
        __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v13 
            = (7U & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                     >> 6U));
        __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v13 = 1U;
    }
    if (((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT____Vcellinp__data_array_way1__write_en) 
         & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__wben_mux_out) 
            >> 0xeU))) {
        __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v14 
            = (0xffU & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__write_data_mux_out[3U] 
                        >> 0x10U));
        __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v14 
            = (7U & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                     >> 6U));
        __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v14 = 1U;
    }
    if (((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT____Vcellinp__data_array_way1__write_en) 
         & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__wben_mux_out) 
            >> 0xfU))) {
        __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v15 
            = (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__write_data_mux_out[3U] 
               >> 0x18U);
        __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v15 
            = (7U & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                     >> 6U));
        __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v15 = 1U;
    }
    if (((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT____Vcellinp__data_array_way0__write_en) 
         & (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__wben_mux_out))) {
        __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v0 
            = (0xffU & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__write_data_mux_out[0U]);
        __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v0 
            = (7U & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                     >> 6U));
        __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT____Vcellinp__data_array_way0__write_en) 
         & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__wben_mux_out) 
            >> 1U))) {
        __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v1 
            = (0xffU & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__write_data_mux_out[0U] 
                        >> 8U));
        __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v1 
            = (7U & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                     >> 6U));
        __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v1 = 1U;
    }
    if (((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT____Vcellinp__data_array_way0__write_en) 
         & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__wben_mux_out) 
            >> 2U))) {
        __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v2 
            = (0xffU & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__write_data_mux_out[0U] 
                        >> 0x10U));
        __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v2 
            = (7U & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                     >> 6U));
        __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v2 = 1U;
    }
    if (((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT____Vcellinp__data_array_way0__write_en) 
         & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__wben_mux_out) 
            >> 3U))) {
        __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v3 
            = (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__write_data_mux_out[0U] 
               >> 0x18U);
        __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v3 
            = (7U & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                     >> 6U));
        __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v3 = 1U;
    }
    if (((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT____Vcellinp__data_array_way0__write_en) 
         & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__wben_mux_out) 
            >> 4U))) {
        __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v4 
            = (0xffU & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__write_data_mux_out[1U]);
        __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v4 
            = (7U & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                     >> 6U));
        __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v4 = 1U;
    }
    if (((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT____Vcellinp__data_array_way0__write_en) 
         & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__wben_mux_out) 
            >> 5U))) {
        __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v5 
            = (0xffU & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__write_data_mux_out[1U] 
                        >> 8U));
        __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v5 
            = (7U & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                     >> 6U));
        __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v5 = 1U;
    }
    if (((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT____Vcellinp__data_array_way0__write_en) 
         & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__wben_mux_out) 
            >> 6U))) {
        __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v6 
            = (0xffU & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__write_data_mux_out[1U] 
                        >> 0x10U));
        __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v6 
            = (7U & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                     >> 6U));
        __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v6 = 1U;
    }
    if (((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT____Vcellinp__data_array_way0__write_en) 
         & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__wben_mux_out) 
            >> 7U))) {
        __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v7 
            = (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__write_data_mux_out[1U] 
               >> 0x18U);
        __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v7 
            = (7U & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                     >> 6U));
        __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v7 = 1U;
    }
    if (((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT____Vcellinp__data_array_way0__write_en) 
         & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__wben_mux_out) 
            >> 8U))) {
        __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v8 
            = (0xffU & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__write_data_mux_out[2U]);
        __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v8 
            = (7U & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                     >> 6U));
        __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v8 = 1U;
    }
    if (((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT____Vcellinp__data_array_way0__write_en) 
         & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__wben_mux_out) 
            >> 9U))) {
        __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v9 
            = (0xffU & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__write_data_mux_out[2U] 
                        >> 8U));
        __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v9 
            = (7U & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                     >> 6U));
        __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v9 = 1U;
    }
    if (((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT____Vcellinp__data_array_way0__write_en) 
         & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__wben_mux_out) 
            >> 0xaU))) {
        __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v10 
            = (0xffU & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__write_data_mux_out[2U] 
                        >> 0x10U));
        __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v10 
            = (7U & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                     >> 6U));
        __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v10 = 1U;
    }
    if (((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT____Vcellinp__data_array_way0__write_en) 
         & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__wben_mux_out) 
            >> 0xbU))) {
        __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v11 
            = (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__write_data_mux_out[2U] 
               >> 0x18U);
        __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v11 
            = (7U & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                     >> 6U));
        __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v11 = 1U;
    }
    if (((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT____Vcellinp__data_array_way0__write_en) 
         & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__wben_mux_out) 
            >> 0xcU))) {
        __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v12 
            = (0xffU & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__write_data_mux_out[3U]);
        __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v12 
            = (7U & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                     >> 6U));
        __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v12 = 1U;
    }
    if (((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT____Vcellinp__data_array_way0__write_en) 
         & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__wben_mux_out) 
            >> 0xdU))) {
        __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v13 
            = (0xffU & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__write_data_mux_out[3U] 
                        >> 8U));
        __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v13 
            = (7U & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                     >> 6U));
        __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v13 = 1U;
    }
    if (((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT____Vcellinp__data_array_way0__write_en) 
         & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__wben_mux_out) 
            >> 0xeU))) {
        __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v14 
            = (0xffU & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__write_data_mux_out[3U] 
                        >> 0x10U));
        __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v14 
            = (7U & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                     >> 6U));
        __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v14 = 1U;
    }
    if (((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT____Vcellinp__data_array_way0__write_en) 
         & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__wben_mux_out) 
            >> 0xfU))) {
        __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v15 
            = (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__write_data_mux_out[3U] 
               >> 0x18U);
        __VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v15 
            = (7U & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                     >> 6U));
        __VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v15 = 1U;
    }
    if (((IData)(vlSelf->reset) | (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__memresp_en))) {
        if (vlSelf->reset) {
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__memresp_data_reg_out[0U] = 0U;
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__memresp_data_reg_out[1U] = 0U;
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__memresp_data_reg_out[2U] = 0U;
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__memresp_data_reg_out[3U] = 0U;
        } else {
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__memresp_data_reg_out[0U] 
                = vlSelf->cache2mem_respstream_msg[0U];
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__memresp_data_reg_out[1U] 
                = vlSelf->cache2mem_respstream_msg[1U];
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__memresp_data_reg_out[2U] 
                = vlSelf->cache2mem_respstream_msg[2U];
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__memresp_data_reg_out[3U] 
                = vlSelf->cache2mem_respstream_msg[3U];
        }
    }
    vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__hit_out 
        = ((IData)(vlSelf->reset) ? 0U : (1U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__hit_next)));
    if (((IData)(vlSelf->reset) | (1U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state)))) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__way_sel_reg_out 
            = ((IData)(vlSelf->reset) ? 0U : (1U & 
                                              ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__hit_w1) 
                                               | ((~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__hit_w0)) 
                                                  & ((2U 
                                                      == (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_type_reg_out))
                                                      ? 
                                                     ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__valid_way0) 
                                                      && (1U 
                                                          & (~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__valid_way1))))
                                                      : 
                                                     ((1U 
                                                       & (~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__hit_w0))) 
                                                      && ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__hit_w1) 
                                                          || (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__victim_sel))))))));
    }
    if (((IData)(vlSelf->reset) | (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__read_data_reg_en))) {
        if (vlSelf->reset) {
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__read_data_reg_out[0U] = 0U;
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__read_data_reg_out[1U] = 0U;
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__read_data_reg_out[2U] = 0U;
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__read_data_reg_out[3U] = 0U;
        } else if (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__read_data_zero_mux_sel) {
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__read_data_reg_out[0U] = 0U;
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__read_data_reg_out[1U] = 0U;
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__read_data_reg_out[2U] = 0U;
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__read_data_reg_out[3U] = 0U;
        } else if (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__active_way) {
            if (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__data_array_ren) {
                vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__read_data_reg_out[0U] 
                    = vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem
                    [(7U & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                            >> 6U))][0U];
                vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__read_data_reg_out[1U] 
                    = vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem
                    [(7U & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                            >> 6U))][1U];
                vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__read_data_reg_out[2U] 
                    = vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem
                    [(7U & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                            >> 6U))][2U];
                vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__read_data_reg_out[3U] 
                    = vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem
                    [(7U & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                            >> 6U))][3U];
            } else {
                vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__read_data_reg_out[0U] = 0U;
                vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__read_data_reg_out[1U] = 0U;
                vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__read_data_reg_out[2U] = 0U;
                vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__read_data_reg_out[3U] = 0U;
            }
        } else if (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__data_array_ren) {
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__read_data_reg_out[0U] 
                = vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem
                [(7U & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                        >> 6U))][0U];
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__read_data_reg_out[1U] 
                = vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem
                [(7U & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                        >> 6U))][1U];
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__read_data_reg_out[2U] 
                = vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem
                [(7U & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                        >> 6U))][2U];
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__read_data_reg_out[3U] 
                = vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem
                [(7U & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                        >> 6U))][3U];
        } else {
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__read_data_reg_out[0U] = 0U;
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__read_data_reg_out[1U] = 0U;
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__read_data_reg_out[2U] = 0U;
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__read_data_reg_out[3U] = 0U;
        }
    }
    if (((IData)(vlSelf->reset) | (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__evict_addr_reg_en))) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__evict_addr_reg_out 
            = ((IData)(vlSelf->reset) ? 0U : ((((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__victim_sel)
                                                 ? 
                                                ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__victim_sel)
                                                  ? vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__tag_array1_out
                                                  : 0U)
                                                 : vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__tag_array0_out) 
                                               << 9U) 
                                              | (0x1f0U 
                                                 & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out)));
    }
    if (((IData)(vlSelf->reset) | (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__cachereq_en))) {
        if (vlSelf->reset) {
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_data_reg_out = 0U;
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_opaque_reg_out = 0U;
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_type_reg_out = 0U;
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out = 0U;
        } else {
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_data_reg_out 
                = vlSelf->proc2cache_reqstream_msg[0U];
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_opaque_reg_out 
                = (0xffU & (vlSelf->proc2cache_reqstream_msg[2U] 
                            >> 2U));
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_type_reg_out 
                = (0xfU & (vlSelf->proc2cache_reqstream_msg[2U] 
                           >> 0xaU));
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                = ((vlSelf->proc2cache_reqstream_msg[2U] 
                    << 0x1eU) | (vlSelf->proc2cache_reqstream_msg[1U] 
                                 >> 2U));
        }
    }
    if (__VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_bits_way1__DOT__rfile__v0) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_bits_way1__DOT__rfile[__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_bits_way1__DOT__rfile__v0] 
            = __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_bits_way1__DOT__rfile__v0;
    }
    if (__VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_bits_way0__DOT__rfile__v0) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_bits_way0__DOT__rfile[__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_bits_way0__DOT__rfile__v0] 
            = __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_bits_way0__DOT__rfile__v0;
    }
    if (__VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__use_bits__DOT__rfile__v0) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__use_bits__DOT__rfile[__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__use_bits__DOT__rfile__v0] 
            = __VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__use_bits__DOT__rfile__v0;
    }
    if (__VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__valid_bits_way1__DOT__rfile__v0) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__valid_bits_way1__DOT__rfile[__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__valid_bits_way1__DOT__rfile__v0] = 1U;
    }
    if (__VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__valid_bits_way0__DOT__rfile__v0) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__valid_bits_way0__DOT__rfile[__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__valid_bits_way0__DOT__rfile__v0] = 1U;
    }
    if (__VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v0) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem[__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v0][0U] 
            = ((0xffffff00U & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem
                [__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v0][0U]) 
               | (IData)(__VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v0));
    }
    if (__VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v1) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem[__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v1][0U] 
            = ((0xffff00ffU & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem
                [__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v1][0U]) 
               | ((IData)(__VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v1) 
                  << 8U));
    }
    if (__VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v2) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem[__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v2][0U] 
            = ((0xff00ffffU & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem
                [__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v2][0U]) 
               | ((IData)(__VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v2) 
                  << 0x10U));
    }
    if (__VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v3) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem[__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v3][0U] 
            = ((0xffffffU & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem
                [__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v3][0U]) 
               | ((IData)(__VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v3) 
                  << 0x18U));
    }
    if (__VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v4) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem[__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v4][1U] 
            = ((0xffffff00U & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem
                [__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v4][1U]) 
               | (IData)(__VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v4));
    }
    if (__VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v5) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem[__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v5][1U] 
            = ((0xffff00ffU & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem
                [__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v5][1U]) 
               | ((IData)(__VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v5) 
                  << 8U));
    }
    if (__VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v6) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem[__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v6][1U] 
            = ((0xff00ffffU & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem
                [__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v6][1U]) 
               | ((IData)(__VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v6) 
                  << 0x10U));
    }
    if (__VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v7) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem[__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v7][1U] 
            = ((0xffffffU & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem
                [__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v7][1U]) 
               | ((IData)(__VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v7) 
                  << 0x18U));
    }
    if (__VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v8) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem[__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v8][2U] 
            = ((0xffffff00U & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem
                [__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v8][2U]) 
               | (IData)(__VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v8));
    }
    if (__VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v9) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem[__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v9][2U] 
            = ((0xffff00ffU & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem
                [__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v9][2U]) 
               | ((IData)(__VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v9) 
                  << 8U));
    }
    if (__VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v10) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem[__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v10][2U] 
            = ((0xff00ffffU & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem
                [__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v10][2U]) 
               | ((IData)(__VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v10) 
                  << 0x10U));
    }
    if (__VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v11) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem[__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v11][2U] 
            = ((0xffffffU & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem
                [__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v11][2U]) 
               | ((IData)(__VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v11) 
                  << 0x18U));
    }
    if (__VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v12) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem[__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v12][3U] 
            = ((0xffffff00U & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem
                [__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v12][3U]) 
               | (IData)(__VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v12));
    }
    if (__VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v13) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem[__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v13][3U] 
            = ((0xffff00ffU & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem
                [__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v13][3U]) 
               | ((IData)(__VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v13) 
                  << 8U));
    }
    if (__VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v14) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem[__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v14][3U] 
            = ((0xff00ffffU & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem
                [__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v14][3U]) 
               | ((IData)(__VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v14) 
                  << 0x10U));
    }
    if (__VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v15) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem[__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v15][3U] 
            = ((0xffffffU & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem
                [__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v15][3U]) 
               | ((IData)(__VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem__v15) 
                  << 0x18U));
    }
    if (__VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v0) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem[__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v0][0U] 
            = ((0xffffff00U & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem
                [__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v0][0U]) 
               | (IData)(__VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v0));
    }
    if (__VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v1) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem[__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v1][0U] 
            = ((0xffff00ffU & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem
                [__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v1][0U]) 
               | ((IData)(__VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v1) 
                  << 8U));
    }
    if (__VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v2) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem[__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v2][0U] 
            = ((0xff00ffffU & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem
                [__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v2][0U]) 
               | ((IData)(__VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v2) 
                  << 0x10U));
    }
    if (__VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v3) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem[__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v3][0U] 
            = ((0xffffffU & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem
                [__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v3][0U]) 
               | ((IData)(__VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v3) 
                  << 0x18U));
    }
    if (__VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v4) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem[__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v4][1U] 
            = ((0xffffff00U & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem
                [__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v4][1U]) 
               | (IData)(__VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v4));
    }
    if (__VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v5) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem[__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v5][1U] 
            = ((0xffff00ffU & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem
                [__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v5][1U]) 
               | ((IData)(__VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v5) 
                  << 8U));
    }
    if (__VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v6) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem[__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v6][1U] 
            = ((0xff00ffffU & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem
                [__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v6][1U]) 
               | ((IData)(__VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v6) 
                  << 0x10U));
    }
    if (__VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v7) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem[__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v7][1U] 
            = ((0xffffffU & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem
                [__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v7][1U]) 
               | ((IData)(__VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v7) 
                  << 0x18U));
    }
    if (__VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v8) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem[__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v8][2U] 
            = ((0xffffff00U & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem
                [__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v8][2U]) 
               | (IData)(__VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v8));
    }
    if (__VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v9) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem[__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v9][2U] 
            = ((0xffff00ffU & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem
                [__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v9][2U]) 
               | ((IData)(__VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v9) 
                  << 8U));
    }
    if (__VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v10) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem[__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v10][2U] 
            = ((0xff00ffffU & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem
                [__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v10][2U]) 
               | ((IData)(__VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v10) 
                  << 0x10U));
    }
    if (__VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v11) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem[__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v11][2U] 
            = ((0xffffffU & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem
                [__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v11][2U]) 
               | ((IData)(__VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v11) 
                  << 0x18U));
    }
    if (__VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v12) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem[__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v12][3U] 
            = ((0xffffff00U & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem
                [__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v12][3U]) 
               | (IData)(__VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v12));
    }
    if (__VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v13) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem[__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v13][3U] 
            = ((0xffff00ffU & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem
                [__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v13][3U]) 
               | ((IData)(__VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v13) 
                  << 8U));
    }
    if (__VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v14) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem[__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v14][3U] 
            = ((0xff00ffffU & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem
                [__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v14][3U]) 
               | ((IData)(__VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v14) 
                  << 0x10U));
    }
    if (__VdlySet__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v15) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem[__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v15][3U] 
            = ((0xffffffU & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem
                [__VdlyDim0__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v15][3U]) 
               | ((IData)(__VdlyVal__CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem__v15) 
                  << 0x18U));
    }
    vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__proc2cache_respstream_trace__DOT__data 
        = ((1U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_type_reg_out))
            ? 0U : ((8U & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out)
                     ? ((4U & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out)
                         ? vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__read_data_reg_out[3U]
                         : vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__read_data_reg_out[2U])
                     : ((4U & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out)
                         ? vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__read_data_reg_out[1U]
                         : vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__read_data_reg_out[0U])));
    vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__valid_way0 
        = vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__valid_bits_way0__DOT__rfile
        [(7U & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                >> 6U))];
    vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__valid_way1 
        = vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__valid_bits_way1__DOT__rfile
        [(7U & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                >> 6U))];
    vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__victim_sel 
        = ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__valid_way0) 
           && ((1U & (~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__valid_way1))) 
               || vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__use_bits__DOT__rfile
               [(7U & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                       >> 6U))]));
}

VL_INLINE_OPT void VCacheAlt___05Fp_num_banks_4___024root___nba_sequent__TOP__1(VCacheAlt___05Fp_num_banks_4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCacheAlt___05Fp_num_banks_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheAlt___05Fp_num_banks_4___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state 
        = ((IData)(vlSelf->reset) ? 0U : (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__next_state));
    vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__read_data_reg_en 
        = ((1U & (~ ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((8U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))
                                   ? ((1U & (~ ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                                                >> 2U))) 
                                      && ((1U & (~ 
                                                 ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                                                  >> 1U))) 
                                          && (1U & 
                                              (~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state)))))
                                   : ((4U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))
                                       ? ((1U & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state)))
                                       : ((1U & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))))));
    vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__evict_addr_reg_en 
        = ((1U & (~ ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                                         >> 3U)) && 
                                  ((1U & (~ ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                                             >> 2U))) 
                                   && ((1U & (~ ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                                                 >> 1U))) 
                                       && (1U & (~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state)))))));
    vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__memresp_en 
        = ((1U & (~ ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && ((1U & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & 
                                              (~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state)))))));
    vlSelf->proc2cache_reqstream_rdy = ((1U & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                                               >> 4U)) 
                                        || (1U & ((8U 
                                                   & (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))
                                                   ? 
                                                  ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                                                   >> 2U)
                                                   : 
                                                  ((1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                                                        >> 2U))) 
                                                   && ((1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                                                            >> 1U))) 
                                                       && (1U 
                                                           & (~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))))))));
    vlSelf->proc2cache_respstream_val = ((1U & (~ ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                                                   >> 4U))) 
                                         && ((1U & 
                                              ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                                               >> 3U)) 
                                             && ((1U 
                                                  & (~ 
                                                     ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                                                      >> 2U))) 
                                                 && ((1U 
                                                      & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                                                         >> 1U)) 
                                                     && (1U 
                                                         & (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))))));
    vlSelf->cache2mem_reqstream_val = ((1U & (~ ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                                                 >> 4U))) 
                                       && ((8U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))
                                            ? ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                                                    >> 2U))) 
                                               && ((1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                                                        >> 1U))) 
                                                   && (1U 
                                                       & (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))))
                                            : ((1U 
                                                & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                                                   >> 2U)) 
                                               && ((1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                                                        >> 1U))) 
                                                   && (1U 
                                                       & (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))))));
    vlSelf->cache2mem_respstream_rdy = ((1U & (~ ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                                                  >> 4U))) 
                                        && ((8U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))
                                             ? ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                                                     >> 2U))) 
                                                && ((1U 
                                                     & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                                                        >> 1U)) 
                                                    && (1U 
                                                        & (~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state)))))
                                             : ((1U 
                                                 & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                                                    >> 2U)) 
                                                && (1U 
                                                    & ((2U 
                                                        & (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))
                                                        ? 
                                                       (~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))
                                                        : (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))))));
    vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__cachereq_en 
        = ((1U & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                  >> 4U)) || (1U & ((8U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))
                                     ? ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                                        >> 2U) : ((1U 
                                                   & (~ 
                                                      ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                                                       >> 2U))) 
                                                  && ((1U 
                                                       & (~ 
                                                          ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                                                           >> 1U))) 
                                                      && (1U 
                                                          & (~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))))))));
    vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__data_array_ren 
        = ((1U & (~ ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((8U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))
                                   ? ((1U & (~ ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                                                >> 2U))) 
                                      && ((1U & (~ 
                                                 ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                                                  >> 1U))) 
                                          && (1U & 
                                              (~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state)))))
                                   : ((4U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))
                                       ? ((1U & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state)))
                                       : ((1U & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))))));
    vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__wben_mux_sel 
        = ((1U & (~ ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && ((1U & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))))));
    vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__write_data_mux_sel 
        = ((1U & (~ ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && ((1U & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))))));
    vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__memreq_type 
        = ((0x10U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))
            ? 0U : ((8U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))
                     ? ((4U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))
                         ? 0U : ((2U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))
                                  ? 0U : ((1U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))
                                           ? 1U : 0U)))
                     : 0U));
    vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__mem_req_addr_mux_sel 
        = ((1U & (~ ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && (1U & ((2U 
                                                 & (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))
                                                 ? 
                                                (~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))
                                                 : (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))))));
    vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__data_array_wen 
        = ((1U & (~ ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && (1U & ((4U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))
                                             ? ((2U 
                                                 & (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))
                                                 ? (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state)
                                                 : 
                                                (~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state)))
                                             : ((1U 
                                                 & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                                                    >> 1U)) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))))))));
    vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__tag_array_ren 
        = ((1U & (~ ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                     >> 4U))) && (1U & ((8U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))
                                         ? ((1U & (~ 
                                                   ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                                                    >> 2U))) 
                                            && ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                                                     >> 1U))) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state)))))
                                         : ((4U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))
                                             ? ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state) 
                                                     >> 1U))) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))))
                                             : (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state)))));
}

VL_INLINE_OPT void VCacheAlt___05Fp_num_banks_4___024root___nba_comb__TOP__0(VCacheAlt___05Fp_num_banks_4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCacheAlt___05Fp_num_banks_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheAlt___05Fp_num_banks_4___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__tag_array_wen_way1 = 0U;
    vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__tag_array_wen_way0 = 0U;
    vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__valid_wen_way1 = 0U;
    vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__valid_wen_way0 = 0U;
    if ((0x10U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__cacheresp_type = 0U;
    } else if ((8U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))) {
        if ((4U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))) {
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__cacheresp_type = 0U;
        } else if ((2U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))) {
            if ((1U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))) {
                vlSelf->__Vtask_CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__cs__18__cs_cacheresp_type 
                    = vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_type_reg_out;
                vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__cacheresp_type 
                    = vlSelf->__Vtask_CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__cs__18__cs_cacheresp_type;
            } else {
                vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__cacheresp_type = 0U;
            }
        } else {
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__cacheresp_type = 0U;
        }
    } else {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__cacheresp_type 
            = ((4U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))
                ? ((2U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))
                    ? 0U : ((1U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))
                             ? 0U : 1U)) : ((2U & (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))
                                             ? ((1U 
                                                 & (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))
                                                 ? 0U
                                                 : 2U)
                                             : 0U));
    }
    vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__active_way 
        = (((8U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state)) 
            | ((9U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state)) 
               | ((0xaU == (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state)) 
                  | (7U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state)))))
            ? (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__victim_sel)
            : (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__way_sel_reg_out));
    vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__wben_mux_out 
        = (0xffffU & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__wben_mux_sel)
                       ? ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__wben_mux_sel)
                           ? 0xffffU : 0U) : ((IData)(0xfU) 
                                              << (0xcU 
                                                  & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out))));
    if (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__write_data_mux_sel) {
        if (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__write_data_mux_sel) {
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__write_data_mux_out[0U] 
                = vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__memresp_data_reg_out[0U];
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__write_data_mux_out[1U] 
                = vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__memresp_data_reg_out[1U];
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__write_data_mux_out[2U] 
                = vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__memresp_data_reg_out[2U];
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__write_data_mux_out[3U] 
                = vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__memresp_data_reg_out[3U];
        } else {
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__write_data_mux_out[0U] = 0U;
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__write_data_mux_out[1U] = 0U;
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__write_data_mux_out[2U] = 0U;
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__write_data_mux_out[3U] = 0U;
        }
    } else {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__write_data_mux_out[0U] 
            = vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_data_reg_out;
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__write_data_mux_out[1U] 
            = vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_data_reg_out;
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__write_data_mux_out[2U] 
            = vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_data_reg_out;
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__write_data_mux_out[3U] 
            = vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_data_reg_out;
    }
    vlSelf->cache2mem_reqstream_msg[0U] = vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__read_data_reg_out[0U];
    vlSelf->cache2mem_reqstream_msg[1U] = vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__read_data_reg_out[1U];
    vlSelf->cache2mem_reqstream_msg[2U] = vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__read_data_reg_out[2U];
    vlSelf->cache2mem_reqstream_msg[3U] = vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__read_data_reg_out[3U];
    vlSelf->cache2mem_reqstream_msg[4U] = (((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__mem_req_addr_mux_sel)
                                             ? ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__mem_req_addr_mux_sel)
                                                 ? 
                                                (0xfffffff0U 
                                                 & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out)
                                                 : 0U)
                                             : vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__evict_addr_reg_out) 
                                           << 4U);
    vlSelf->cache2mem_reqstream_msg[5U] = (((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__memreq_type) 
                                            << 0xcU) 
                                           | (((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__mem_req_addr_mux_sel)
                                                ? ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__mem_req_addr_mux_sel)
                                                    ? 
                                                   (0xfffffff0U 
                                                    & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out)
                                                    : 0U)
                                                : vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__evict_addr_reg_out) 
                                              >> 0x1cU));
    if (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__tag_array_ren) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__tag_array0_out 
            = vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__tag_array_way0__DOT__mem
            [(7U & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                    >> 6U))];
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__tag_array1_out 
            = vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__tag_array_way1__DOT__mem
            [(7U & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                    >> 6U))];
    } else {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__tag_array0_out = 0U;
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__tag_array1_out = 0U;
    }
    vlSelf->proc2cache_respstream_msg = (((QData)((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__cacheresp_type)) 
                                          << 0x2cU) 
                                         | (((QData)((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_opaque_reg_out)) 
                                             << 0x24U) 
                                            | (((QData)((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__hit_out)) 
                                                << 0x22U) 
                                               | (QData)((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__proc2cache_respstream_trace__DOT__data)))));
    vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT____Vcellinp__data_array_way0__write_en 
        = ((~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__active_way)) 
           & (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__data_array_wen));
    vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT____Vcellinp__data_array_way1__write_en 
        = ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__data_array_wen) 
           & (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__active_way));
    vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__hit_w0 
        = ((vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__tag_array0_out 
            == (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                >> 9U)) & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__valid_bits_way0__DOT__rfile
           [(7U & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                   >> 6U))]);
    vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__hit_w1 
        = ((vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__tag_array1_out 
            == (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                >> 9U)) & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__valid_bits_way1__DOT__rfile
           [(7U & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                   >> 6U))]);
    vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__use_bit_wen = 0U;
    if (((3U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__hit_w1)))) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__use_bit_wen = 1U;
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__use_bit_wdata = 0U;
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__use_bit_wdata 
            = vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__hit_w0;
    } else {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__use_bit_wdata = 0U;
    }
    vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_wdata_way1 = 0U;
    vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_wdata_way0 = 0U;
    vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_wen_way1 = 0U;
    if (((4U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__hit_w1)))) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__use_bit_wen = 1U;
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__use_bit_wdata 
            = vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__hit_w0;
    }
    if ((2U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))) {
        if (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__way_sel_reg_out) {
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__tag_array_wen_way1 = 1U;
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__valid_wen_way1 = 1U;
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_wdata_way1 = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__tag_array_wen_way0 = 1U;
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__valid_wen_way0 = 1U;
        }
    }
    if (((4U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__hit_w1)))) {
        if ((1U & (~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__hit_w0)))) {
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_wdata_way1 = 1U;
        }
    }
    if ((2U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))) {
        if ((1U & (~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_wdata_way0 = 0U;
        }
    }
    if (((4U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__hit_w1)))) {
        if (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__hit_w0) {
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_wdata_way0 = 1U;
        }
    }
    if ((2U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))) {
        if (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__way_sel_reg_out) {
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_wen_way1 = 1U;
        }
    }
    if (((4U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__hit_w1)))) {
        if ((1U & (~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__hit_w0)))) {
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_wen_way1 = 1U;
        }
    }
    vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_wen_way0 = 0U;
    if ((2U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))) {
        if ((1U & (~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_wen_way0 = 1U;
        }
    }
    if (((4U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__hit_w1)))) {
        if (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__hit_w0) {
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_wen_way0 = 1U;
        }
    }
    vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__0 
        = ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__hit_w0) 
           | (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__hit_w1));
    vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__hit_next 
        = vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__hit_out;
    if ((1U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__hit_next 
            = ((2U != (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_type_reg_out)) 
               && (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__0));
    }
    if ((0U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__hit_next = 0U;
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__next_state 
            = vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state;
        if (vlSelf->proc2cache_reqstream_val) {
            if (vlSelf->proc2cache_reqstream_val) {
                vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__next_state = 1U;
            }
        } else {
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__next_state = 0U;
        }
    } else {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__next_state 
            = vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state;
    }
    if ((1U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__next_state 
            = ((2U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_type_reg_out))
                ? 2U : ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__0)
                         ? ((0U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_type_reg_out))
                             ? 3U : 4U) : ((1U & ((~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__valid_way0)) 
                                                  | (~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__valid_way1))))
                                            ? 5U : 
                                           ((((~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__victim_sel)) 
                                              & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_bits_way0__DOT__rfile
                                              [(7U 
                                                & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                                                   >> 6U))]) 
                                             | ((IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__victim_sel) 
                                                & vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_bits_way1__DOT__rfile
                                                [(7U 
                                                  & (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                                                     >> 6U))]))
                                             ? 8U : 5U))));
    }
    if ((0xbU == (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))) {
        if (vlSelf->proc2cache_respstream_rdy) {
            if (vlSelf->proc2cache_respstream_rdy) {
                vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__next_state = 0U;
            }
        } else {
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__next_state = 0xbU;
        }
    }
    if ((2U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__next_state = 0xbU;
    }
    if ((3U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__next_state = 0xbU;
    }
    if ((4U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__next_state = 0xbU;
    }
    if ((8U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))) {
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__next_state = 9U;
    }
    if ((9U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))) {
        if (vlSelf->cache2mem_reqstream_rdy) {
            if (vlSelf->cache2mem_reqstream_rdy) {
                vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__next_state = 0xaU;
            }
        } else {
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__next_state = 9U;
        }
    }
    if ((0xaU == (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))) {
        if (vlSelf->cache2mem_respstream_val) {
            if (vlSelf->cache2mem_respstream_val) {
                vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__next_state = 5U;
            }
        } else {
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__next_state = 0xaU;
        }
    }
    if ((5U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))) {
        if (vlSelf->cache2mem_reqstream_rdy) {
            if (vlSelf->cache2mem_reqstream_rdy) {
                vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__next_state = 6U;
            }
        } else {
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__next_state = 5U;
        }
    }
    if ((6U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))) {
        if (vlSelf->cache2mem_respstream_val) {
            if (vlSelf->cache2mem_respstream_val) {
                vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__next_state = 7U;
            }
        } else {
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__next_state = 6U;
        }
    }
    if ((7U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state))) {
        if (vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__way_sel_reg_out) {
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__tag_array_wen_way1 = 1U;
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__valid_wen_way1 = 1U;
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_wdata_way1 = 0U;
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_wen_way1 = 1U;
        }
        if ((1U & (~ (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__tag_array_wen_way0 = 1U;
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__valid_wen_way0 = 1U;
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_wdata_way0 = 0U;
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_wen_way0 = 1U;
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__use_bit_wen = 1U;
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__use_bit_wdata = 1U;
        } else {
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__use_bit_wen = 1U;
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__use_bit_wdata = 0U;
        }
        vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__hit_next = 0U;
        if ((0U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_type_reg_out))) {
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__next_state = 3U;
        } else if ((1U == (IData)(vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_type_reg_out))) {
            vlSelf->CacheAlt___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__next_state = 4U;
        }
    }
}

void VCacheAlt___05Fp_num_banks_4___024root___eval_triggers__act(VCacheAlt___05Fp_num_banks_4___024root* vlSelf);

bool VCacheAlt___05Fp_num_banks_4___024root___eval_phase__act(VCacheAlt___05Fp_num_banks_4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCacheAlt___05Fp_num_banks_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheAlt___05Fp_num_banks_4___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VCacheAlt___05Fp_num_banks_4___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VCacheAlt___05Fp_num_banks_4___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VCacheAlt___05Fp_num_banks_4___024root___eval_phase__nba(VCacheAlt___05Fp_num_banks_4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCacheAlt___05Fp_num_banks_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheAlt___05Fp_num_banks_4___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VCacheAlt___05Fp_num_banks_4___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCacheAlt___05Fp_num_banks_4___024root___dump_triggers__ico(VCacheAlt___05Fp_num_banks_4___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VCacheAlt___05Fp_num_banks_4___024root___dump_triggers__nba(VCacheAlt___05Fp_num_banks_4___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VCacheAlt___05Fp_num_banks_4___024root___dump_triggers__act(VCacheAlt___05Fp_num_banks_4___024root* vlSelf);
#endif  // VL_DEBUG

void VCacheAlt___05Fp_num_banks_4___024root___eval(VCacheAlt___05Fp_num_banks_4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCacheAlt___05Fp_num_banks_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheAlt___05Fp_num_banks_4___024root___eval\n"); );
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
            VCacheAlt___05Fp_num_banks_4___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("lab3_mem/CacheAlt.v", 260, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VCacheAlt___05Fp_num_banks_4___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VCacheAlt___05Fp_num_banks_4___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("lab3_mem/CacheAlt.v", 260, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VCacheAlt___05Fp_num_banks_4___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("lab3_mem/CacheAlt.v", 260, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VCacheAlt___05Fp_num_banks_4___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VCacheAlt___05Fp_num_banks_4___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VCacheAlt___05Fp_num_banks_4___024root___eval_debug_assertions(VCacheAlt___05Fp_num_banks_4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCacheAlt___05Fp_num_banks_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheAlt___05Fp_num_banks_4___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->cache2mem_reqstream_rdy 
                     & 0xfeU))) {
        Verilated::overWidthError("cache2mem_reqstream_rdy");}
    if (VL_UNLIKELY((vlSelf->cache2mem_respstream_msg[4U] 
                     & 0xfffc0000U))) {
        Verilated::overWidthError("cache2mem_respstream_msg");}
    if (VL_UNLIKELY((vlSelf->cache2mem_respstream_val 
                     & 0xfeU))) {
        Verilated::overWidthError("cache2mem_respstream_val");}
    if (VL_UNLIKELY((vlSelf->proc2cache_reqstream_msg[2U] 
                     & 0xffffc000U))) {
        Verilated::overWidthError("proc2cache_reqstream_msg");}
    if (VL_UNLIKELY((vlSelf->proc2cache_reqstream_val 
                     & 0xfeU))) {
        Verilated::overWidthError("proc2cache_reqstream_val");}
    if (VL_UNLIKELY((vlSelf->proc2cache_respstream_rdy 
                     & 0xfeU))) {
        Verilated::overWidthError("proc2cache_respstream_rdy");}
}
#endif  // VL_DEBUG
