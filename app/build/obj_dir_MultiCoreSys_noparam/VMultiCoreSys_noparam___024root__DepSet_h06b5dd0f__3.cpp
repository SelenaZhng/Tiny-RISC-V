// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMultiCoreSys_noparam.h for the primary calling header

#include "VMultiCoreSys_noparam__pch.h"
#include "VMultiCoreSys_noparam___024root.h"

extern const VlUnpacked<CData/*1:0*/, 64> VMultiCoreSys_noparam__ConstPool__TABLE_h8b2b421b_0;

VL_INLINE_OPT void VMultiCoreSys_noparam___024root___nba_comb__TOP__0(VMultiCoreSys_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMultiCoreSys_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root___nba_comb__TOP__0\n"); );
    // Init
    QData/*47:0*/ MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__0__KET____DOT__dcache__proc2cache_respstream_msg;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__0__KET____DOT__dcache__proc2cache_respstream_msg = 0;
    QData/*47:0*/ MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__1__KET____DOT__dcache__proc2cache_respstream_msg;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__1__KET____DOT__dcache__proc2cache_respstream_msg = 0;
    QData/*47:0*/ MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__2__KET____DOT__dcache__proc2cache_respstream_msg;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__2__KET____DOT__dcache__proc2cache_respstream_msg = 0;
    QData/*47:0*/ MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__3__KET____DOT__dcache__proc2cache_respstream_msg;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__3__KET____DOT__dcache__proc2cache_respstream_msg = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_reqstream_enq_val;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_reqstream_enq_val = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_respstream_drop_val;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_respstream_drop_val = 0;
    CData/*1:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__pc_sel_F;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__pc_sel_F = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____VdfgRegularize_h1851b5ac_0_0;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____VdfgRegularize_h1851b5ac_0_0 = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_respstream_drop_unit__DOT____VdfgExtracted_hff9b16a6__0;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_respstream_drop_unit__DOT____VdfgExtracted_hff9b16a6__0 = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__osquash_D;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__osquash_D = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_19;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_19 = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_reqstream_enq_val;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_reqstream_enq_val = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_respstream_drop_val;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_respstream_drop_val = 0;
    CData/*1:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__pc_sel_F;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__pc_sel_F = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____VdfgRegularize_h1851b5ac_0_0;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____VdfgRegularize_h1851b5ac_0_0 = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_respstream_drop_unit__DOT____VdfgExtracted_hff9b16a6__0;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_respstream_drop_unit__DOT____VdfgExtracted_hff9b16a6__0 = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__osquash_D;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__osquash_D = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_19;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_19 = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_reqstream_enq_val;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_reqstream_enq_val = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_respstream_drop_val;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_respstream_drop_val = 0;
    CData/*1:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__pc_sel_F;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__pc_sel_F = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____VdfgRegularize_h1851b5ac_0_0;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____VdfgRegularize_h1851b5ac_0_0 = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_respstream_drop_unit__DOT____VdfgExtracted_hff9b16a6__0;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_respstream_drop_unit__DOT____VdfgExtracted_hff9b16a6__0 = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__osquash_D;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__osquash_D = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_19;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_19 = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_reqstream_enq_val;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_reqstream_enq_val = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_respstream_drop_val;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_respstream_drop_val = 0;
    CData/*1:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__pc_sel_F;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__pc_sel_F = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____VdfgRegularize_h1851b5ac_0_0;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____VdfgRegularize_h1851b5ac_0_0 = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_respstream_drop_unit__DOT____VdfgExtracted_hff9b16a6__0;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_respstream_drop_unit__DOT____VdfgExtracted_hff9b16a6__0 = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__osquash_D;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__osquash_D = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_19;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_19 = 0;
    CData/*5:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*5:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*5:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    CData/*5:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    // Body
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__add_mux_sel = 0U;
    if ((0U != (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
        if ((1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__add_mux_sel 
                = (1U & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out);
        }
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__add_mux_sel = 0U;
    if ((0U != (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
        if ((1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__add_mux_sel 
                = (1U & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out);
        }
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__add_mux_sel = 0U;
    if ((0U != (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
        if ((1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__add_mux_sel 
                = (1U & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out);
        }
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__add_mux_sel = 0U;
    if ((0U != (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
        if ((1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__add_mux_sel 
                = (1U & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out);
        }
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__tag_array_wen_way1 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__tag_array_wen_way0 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way1 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way0 = 0U;
    if ((0x10U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__cacheresp_type = 0U;
    } else if ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__cacheresp_type = 0U;
        } else if ((2U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))) {
            if ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))) {
                vlSelf->__Vtask_MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__cs__4606__cs_cacheresp_type 
                    = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__cachereq_type_reg_out;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__cacheresp_type 
                    = vlSelf->__Vtask_MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__cs__4606__cs_cacheresp_type;
            } else {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__cacheresp_type = 0U;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__cacheresp_type = 0U;
        }
    } else {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__cacheresp_type 
            = ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))
                ? ((2U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))
                    ? 0U : ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))
                             ? 0U : 1U)) : ((2U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))
                                             ? ((1U 
                                                 & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))
                                                 ? 0U
                                                 : 2U)
                                             : 0U));
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__active_way 
        = (((8U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state)) 
            | ((9U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state)) 
               | ((0xaU == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state)) 
                  | (7U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state)))))
            ? (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__victim_sel)
            : (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__way_sel_reg_out));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__tag_array_wen_way1 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__tag_array_wen_way0 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way1 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way0 = 0U;
    if ((0x10U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__cacheresp_type = 0U;
    } else if ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__cacheresp_type = 0U;
        } else if ((2U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))) {
            if ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))) {
                vlSelf->__Vtask_MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__cs__4540__cs_cacheresp_type 
                    = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__cachereq_type_reg_out;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__cacheresp_type 
                    = vlSelf->__Vtask_MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__cs__4540__cs_cacheresp_type;
            } else {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__cacheresp_type = 0U;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__cacheresp_type = 0U;
        }
    } else {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__cacheresp_type 
            = ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))
                ? ((2U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))
                    ? 0U : ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))
                             ? 0U : 1U)) : ((2U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))
                                             ? ((1U 
                                                 & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))
                                                 ? 0U
                                                 : 2U)
                                             : 0U));
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__active_way 
        = (((8U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state)) 
            | ((9U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state)) 
               | ((0xaU == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state)) 
                  | (7U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state)))))
            ? (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__victim_sel)
            : (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__way_sel_reg_out));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__tag_array_wen_way1 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__tag_array_wen_way0 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way1 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way0 = 0U;
    if ((0x10U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__cacheresp_type = 0U;
    } else if ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__cacheresp_type = 0U;
        } else if ((2U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))) {
            if ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))) {
                vlSelf->__Vtask_MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__cs__4474__cs_cacheresp_type 
                    = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__cachereq_type_reg_out;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__cacheresp_type 
                    = vlSelf->__Vtask_MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__cs__4474__cs_cacheresp_type;
            } else {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__cacheresp_type = 0U;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__cacheresp_type = 0U;
        }
    } else {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__cacheresp_type 
            = ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))
                ? ((2U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))
                    ? 0U : ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))
                             ? 0U : 1U)) : ((2U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))
                                             ? ((1U 
                                                 & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))
                                                 ? 0U
                                                 : 2U)
                                             : 0U));
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__active_way 
        = (((8U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state)) 
            | ((9U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state)) 
               | ((0xaU == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state)) 
                  | (7U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state)))))
            ? (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__victim_sel)
            : (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__way_sel_reg_out));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__tag_array_wen_way1 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__tag_array_wen_way0 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way1 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way0 = 0U;
    if ((0x10U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__cacheresp_type = 0U;
    } else if ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__cacheresp_type = 0U;
        } else if ((2U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))) {
            if ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))) {
                vlSelf->__Vtask_MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__cs__4408__cs_cacheresp_type 
                    = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__cachereq_type_reg_out;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__cacheresp_type 
                    = vlSelf->__Vtask_MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__cs__4408__cs_cacheresp_type;
            } else {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__cacheresp_type = 0U;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__cacheresp_type = 0U;
        }
    } else {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__cacheresp_type 
            = ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))
                ? ((2U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))
                    ? 0U : ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))
                             ? 0U : 1U)) : ((2U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))
                                             ? ((1U 
                                                 & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))
                                                 ? 0U
                                                 : 2U)
                                             : 0U));
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__active_way 
        = (((8U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state)) 
            | ((9U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state)) 
               | ((0xaU == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state)) 
                  | (7U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state)))))
            ? (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__victim_sel)
            : (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__way_sel_reg_out));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__tag_array_wen_way1 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__tag_array_wen_way0 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way1 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way0 = 0U;
    if ((0x10U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cacheresp_type = 0U;
    } else if ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cacheresp_type = 0U;
        } else if ((2U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
            if ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
                vlSelf->__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__cs__4342__cs_cacheresp_type 
                    = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cacheresp_type 
                    = vlSelf->__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__cs__4342__cs_cacheresp_type;
            } else {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cacheresp_type = 0U;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cacheresp_type = 0U;
        }
    } else {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cacheresp_type 
            = ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))
                ? ((2U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))
                    ? 0U : ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))
                             ? 0U : 1U)) : ((2U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                             ? ((1U 
                                                 & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                                 ? 0U
                                                 : 2U)
                                             : 0U));
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__active_way 
        = (((8U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state)) 
            | ((9U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state)) 
               | ((0xaU == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state)) 
                  | (7U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state)))))
            ? (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__victim_sel)
            : (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__tag_array_wen_way1 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__tag_array_wen_way0 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way1 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way0 = 0U;
    if ((0x10U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cacheresp_type = 0U;
    } else if ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cacheresp_type = 0U;
        } else if ((2U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
            if ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
                vlSelf->__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__cs__4276__cs_cacheresp_type 
                    = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cacheresp_type 
                    = vlSelf->__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__cs__4276__cs_cacheresp_type;
            } else {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cacheresp_type = 0U;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cacheresp_type = 0U;
        }
    } else {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cacheresp_type 
            = ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))
                ? ((2U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))
                    ? 0U : ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))
                             ? 0U : 1U)) : ((2U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                             ? ((1U 
                                                 & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                                 ? 0U
                                                 : 2U)
                                             : 0U));
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__active_way 
        = (((8U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state)) 
            | ((9U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state)) 
               | ((0xaU == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state)) 
                  | (7U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state)))))
            ? (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__victim_sel)
            : (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__tag_array_wen_way1 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__tag_array_wen_way0 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way1 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way0 = 0U;
    if ((0x10U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cacheresp_type = 0U;
    } else if ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cacheresp_type = 0U;
        } else if ((2U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
            if ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
                vlSelf->__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__cs__4210__cs_cacheresp_type 
                    = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cacheresp_type 
                    = vlSelf->__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__cs__4210__cs_cacheresp_type;
            } else {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cacheresp_type = 0U;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cacheresp_type = 0U;
        }
    } else {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cacheresp_type 
            = ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))
                ? ((2U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))
                    ? 0U : ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))
                             ? 0U : 1U)) : ((2U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                             ? ((1U 
                                                 & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                                 ? 0U
                                                 : 2U)
                                             : 0U));
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__active_way 
        = (((8U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state)) 
            | ((9U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state)) 
               | ((0xaU == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state)) 
                  | (7U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state)))))
            ? (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__victim_sel)
            : (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__tag_array_wen_way1 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__tag_array_wen_way0 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way1 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way0 = 0U;
    if ((0x10U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__cacheresp_type = 0U;
    } else if ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__cacheresp_type = 0U;
        } else if ((2U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
            if ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
                vlSelf->__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__cs__4144__cs_cacheresp_type 
                    = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__cacheresp_type 
                    = vlSelf->__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__cs__4144__cs_cacheresp_type;
            } else {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__cacheresp_type = 0U;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__cacheresp_type = 0U;
        }
    } else {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__cacheresp_type 
            = ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))
                ? ((2U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))
                    ? 0U : ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))
                             ? 0U : 1U)) : ((2U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                             ? ((1U 
                                                 & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                                 ? 0U
                                                 : 2U)
                                             : 0U));
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__active_way 
        = (((8U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state)) 
            | ((9U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state)) 
               | ((0xaU == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state)) 
                  | (7U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state)))))
            ? (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__victim_sel)
            : (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out));
    vlSelf->__VdfgRegularize_hd87f99a1_0_4 = ((((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__val_X) 
                                                & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
                                                   & (0U 
                                                      != (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_X)))) 
                                               | (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__val_X) 
                                                   & (2U 
                                                      == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ex_result_sel_X))) 
                                                  & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imul_resp_val_X)))) 
                                              | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_7));
    vlSelf->__VdfgRegularize_hd87f99a1_0_3 = ((((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__val_X) 
                                                & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
                                                   & (0U 
                                                      != (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_X)))) 
                                               | (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__val_X) 
                                                   & (2U 
                                                      == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ex_result_sel_X))) 
                                                  & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imul_resp_val_X)))) 
                                              | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_7));
    vlSelf->__VdfgRegularize_hd87f99a1_0_2 = ((((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__val_X) 
                                                & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
                                                   & (0U 
                                                      != (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_X)))) 
                                               | (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__val_X) 
                                                   & (2U 
                                                      == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ex_result_sel_X))) 
                                                  & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imul_resp_val_X)))) 
                                              | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_7));
    vlSelf->__VdfgRegularize_hd87f99a1_0_1 = ((((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__val_X) 
                                                & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
                                                   & (0U 
                                                      != (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_X)))) 
                                               | (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__val_X) 
                                                   & (2U 
                                                      == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ex_result_sel_X))) 
                                                  & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imul_resp_val_X)))) 
                                              | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_7));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__wben_mux_out 
        = (0xffffU & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__wben_mux_sel)
                       ? ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__wben_mux_sel)
                           ? 0xffffU : 0U) : ((IData)(0xfU) 
                                              << (0xcU 
                                                  & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out))));
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__write_data_mux_sel) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__write_data_mux_sel) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__write_data_mux_out[0U] 
                = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__memresp_data_reg_out[0U];
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__write_data_mux_out[1U] 
                = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__memresp_data_reg_out[1U];
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__write_data_mux_out[2U] 
                = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__memresp_data_reg_out[2U];
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__write_data_mux_out[3U] 
                = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__memresp_data_reg_out[3U];
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__write_data_mux_out[0U] = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__write_data_mux_out[1U] = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__write_data_mux_out[2U] = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__write_data_mux_out[3U] = 0U;
        }
    } else {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__write_data_mux_out[0U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__cachereq_data_reg_out;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__write_data_mux_out[1U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__cachereq_data_reg_out;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__write_data_mux_out[2U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__cachereq_data_reg_out;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__write_data_mux_out[3U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__cachereq_data_reg_out;
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__3__KET____DOT__icache__cache2mem_reqstream_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__read_data_reg_out[0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__3__KET____DOT__icache__cache2mem_reqstream_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__read_data_reg_out[1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__3__KET____DOT__icache__cache2mem_reqstream_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__read_data_reg_out[2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__3__KET____DOT__icache__cache2mem_reqstream_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__read_data_reg_out[3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__3__KET____DOT__icache__cache2mem_reqstream_msg[4U] 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__mem_req_addr_mux_sel)
             ? ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__mem_req_addr_mux_sel)
                 ? (0x7ffffff0U & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out)
                 : 0U) : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__evict_addr_reg_out) 
           << 4U);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__3__KET____DOT__icache__cache2mem_reqstream_msg[5U] 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__memreq_type) 
            << 0xcU) | (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__mem_req_addr_mux_sel)
                          ? ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__mem_req_addr_mux_sel)
                              ? (0x7ffffff0U & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out)
                              : 0U) : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__evict_addr_reg_out) 
                        >> 0x1cU));
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__tag_array_ren) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__tag_array0_out 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__tag_array_way0__DOT__mem
            [(7U & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out 
                    >> 4U))];
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__tag_array1_out 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__tag_array_way1__DOT__mem
            [(7U & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out 
                    >> 4U))];
    } else {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__tag_array0_out = 0U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__tag_array1_out = 0U;
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__wben_mux_out 
        = (0xffffU & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__wben_mux_sel)
                       ? ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__wben_mux_sel)
                           ? 0xffffU : 0U) : ((IData)(0xfU) 
                                              << (0xcU 
                                                  & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out))));
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__write_data_mux_sel) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__write_data_mux_sel) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__write_data_mux_out[0U] 
                = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__memresp_data_reg_out[0U];
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__write_data_mux_out[1U] 
                = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__memresp_data_reg_out[1U];
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__write_data_mux_out[2U] 
                = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__memresp_data_reg_out[2U];
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__write_data_mux_out[3U] 
                = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__memresp_data_reg_out[3U];
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__write_data_mux_out[0U] = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__write_data_mux_out[1U] = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__write_data_mux_out[2U] = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__write_data_mux_out[3U] = 0U;
        }
    } else {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__write_data_mux_out[0U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__cachereq_data_reg_out;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__write_data_mux_out[1U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__cachereq_data_reg_out;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__write_data_mux_out[2U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__cachereq_data_reg_out;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__write_data_mux_out[3U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__cachereq_data_reg_out;
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__2__KET____DOT__icache__cache2mem_reqstream_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__read_data_reg_out[0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__2__KET____DOT__icache__cache2mem_reqstream_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__read_data_reg_out[1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__2__KET____DOT__icache__cache2mem_reqstream_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__read_data_reg_out[2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__2__KET____DOT__icache__cache2mem_reqstream_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__read_data_reg_out[3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__2__KET____DOT__icache__cache2mem_reqstream_msg[4U] 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__mem_req_addr_mux_sel)
             ? ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__mem_req_addr_mux_sel)
                 ? (0x7ffffff0U & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out)
                 : 0U) : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__evict_addr_reg_out) 
           << 4U);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__2__KET____DOT__icache__cache2mem_reqstream_msg[5U] 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__memreq_type) 
            << 0xcU) | (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__mem_req_addr_mux_sel)
                          ? ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__mem_req_addr_mux_sel)
                              ? (0x7ffffff0U & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out)
                              : 0U) : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__evict_addr_reg_out) 
                        >> 0x1cU));
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__tag_array_ren) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__tag_array0_out 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__tag_array_way0__DOT__mem
            [(7U & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out 
                    >> 4U))];
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__tag_array1_out 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__tag_array_way1__DOT__mem
            [(7U & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out 
                    >> 4U))];
    } else {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__tag_array0_out = 0U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__tag_array1_out = 0U;
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__wben_mux_out 
        = (0xffffU & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__wben_mux_sel)
                       ? ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__wben_mux_sel)
                           ? 0xffffU : 0U) : ((IData)(0xfU) 
                                              << (0xcU 
                                                  & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out))));
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__write_data_mux_sel) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__write_data_mux_sel) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__write_data_mux_out[0U] 
                = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__memresp_data_reg_out[0U];
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__write_data_mux_out[1U] 
                = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__memresp_data_reg_out[1U];
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__write_data_mux_out[2U] 
                = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__memresp_data_reg_out[2U];
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__write_data_mux_out[3U] 
                = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__memresp_data_reg_out[3U];
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__write_data_mux_out[0U] = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__write_data_mux_out[1U] = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__write_data_mux_out[2U] = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__write_data_mux_out[3U] = 0U;
        }
    } else {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__write_data_mux_out[0U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__cachereq_data_reg_out;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__write_data_mux_out[1U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__cachereq_data_reg_out;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__write_data_mux_out[2U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__cachereq_data_reg_out;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__write_data_mux_out[3U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__cachereq_data_reg_out;
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__1__KET____DOT__icache__cache2mem_reqstream_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__read_data_reg_out[0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__1__KET____DOT__icache__cache2mem_reqstream_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__read_data_reg_out[1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__1__KET____DOT__icache__cache2mem_reqstream_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__read_data_reg_out[2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__1__KET____DOT__icache__cache2mem_reqstream_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__read_data_reg_out[3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__1__KET____DOT__icache__cache2mem_reqstream_msg[4U] 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__mem_req_addr_mux_sel)
             ? ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__mem_req_addr_mux_sel)
                 ? (0x7ffffff0U & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out)
                 : 0U) : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__evict_addr_reg_out) 
           << 4U);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__1__KET____DOT__icache__cache2mem_reqstream_msg[5U] 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__memreq_type) 
            << 0xcU) | (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__mem_req_addr_mux_sel)
                          ? ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__mem_req_addr_mux_sel)
                              ? (0x7ffffff0U & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out)
                              : 0U) : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__evict_addr_reg_out) 
                        >> 0x1cU));
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__tag_array_ren) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__tag_array0_out 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__tag_array_way0__DOT__mem
            [(7U & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out 
                    >> 4U))];
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__tag_array1_out 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__tag_array_way1__DOT__mem
            [(7U & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out 
                    >> 4U))];
    } else {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__tag_array0_out = 0U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__tag_array1_out = 0U;
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__wben_mux_out 
        = (0xffffU & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__wben_mux_sel)
                       ? ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__wben_mux_sel)
                           ? 0xffffU : 0U) : ((IData)(0xfU) 
                                              << (0xcU 
                                                  & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out))));
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__write_data_mux_sel) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__write_data_mux_sel) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__write_data_mux_out[0U] 
                = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__memresp_data_reg_out[0U];
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__write_data_mux_out[1U] 
                = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__memresp_data_reg_out[1U];
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__write_data_mux_out[2U] 
                = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__memresp_data_reg_out[2U];
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__write_data_mux_out[3U] 
                = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__memresp_data_reg_out[3U];
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__write_data_mux_out[0U] = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__write_data_mux_out[1U] = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__write_data_mux_out[2U] = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__write_data_mux_out[3U] = 0U;
        }
    } else {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__write_data_mux_out[0U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__cachereq_data_reg_out;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__write_data_mux_out[1U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__cachereq_data_reg_out;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__write_data_mux_out[2U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__cachereq_data_reg_out;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__write_data_mux_out[3U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__cachereq_data_reg_out;
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__0__KET____DOT__icache__cache2mem_reqstream_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__read_data_reg_out[0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__0__KET____DOT__icache__cache2mem_reqstream_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__read_data_reg_out[1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__0__KET____DOT__icache__cache2mem_reqstream_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__read_data_reg_out[2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__0__KET____DOT__icache__cache2mem_reqstream_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__read_data_reg_out[3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__0__KET____DOT__icache__cache2mem_reqstream_msg[4U] 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__mem_req_addr_mux_sel)
             ? ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__mem_req_addr_mux_sel)
                 ? (0x7ffffff0U & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out)
                 : 0U) : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__evict_addr_reg_out) 
           << 4U);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__0__KET____DOT__icache__cache2mem_reqstream_msg[5U] 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__memreq_type) 
            << 0xcU) | (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__mem_req_addr_mux_sel)
                          ? ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__mem_req_addr_mux_sel)
                              ? (0x7ffffff0U & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out)
                              : 0U) : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__evict_addr_reg_out) 
                        >> 0x1cU));
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__tag_array_ren) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__tag_array0_out 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__tag_array_way0__DOT__mem
            [(7U & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out 
                    >> 4U))];
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__tag_array1_out 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__tag_array_way1__DOT__mem
            [(7U & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out 
                    >> 4U))];
    } else {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__tag_array0_out = 0U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__tag_array1_out = 0U;
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__wben_mux_out 
        = (0xffffU & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__wben_mux_sel)
                       ? ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__wben_mux_sel)
                           ? 0xffffU : 0U) : ((IData)(0xfU) 
                                              << (0xcU 
                                                  & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out))));
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__write_data_mux_sel) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__write_data_mux_sel) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out[0U] 
                = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__memresp_data_reg_out[0U];
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out[1U] 
                = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__memresp_data_reg_out[1U];
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out[2U] 
                = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__memresp_data_reg_out[2U];
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out[3U] 
                = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__memresp_data_reg_out[3U];
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out[0U] = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out[1U] = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out[2U] = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out[3U] = 0U;
        }
    } else {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out[0U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__cachereq_data_reg_out;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out[1U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__cachereq_data_reg_out;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out[2U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__cachereq_data_reg_out;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out[3U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__cachereq_data_reg_out;
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__3__KET____DOT__dcache__cache2mem_reqstream_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__read_data_reg_out[0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__3__KET____DOT__dcache__cache2mem_reqstream_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__read_data_reg_out[1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__3__KET____DOT__dcache__cache2mem_reqstream_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__read_data_reg_out[2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__3__KET____DOT__dcache__cache2mem_reqstream_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__read_data_reg_out[3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__3__KET____DOT__dcache__cache2mem_reqstream_msg[4U] 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__mem_req_addr_mux_sel)
             ? ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__mem_req_addr_mux_sel)
                 ? (0xfffffff0U & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out)
                 : 0U) : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__evict_addr_reg_out) 
           << 4U);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__3__KET____DOT__dcache__cache2mem_reqstream_msg[5U] 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__memreq_type) 
            << 0xcU) | (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__mem_req_addr_mux_sel)
                          ? ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__mem_req_addr_mux_sel)
                              ? (0xfffffff0U & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out)
                              : 0U) : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__evict_addr_reg_out) 
                        >> 0x1cU));
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__tag_array_ren) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__tag_array0_out 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__tag_array_way0__DOT__mem
            [(7U & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                    >> 6U))];
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__tag_array1_out 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__tag_array_way1__DOT__mem
            [(7U & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                    >> 6U))];
    } else {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__tag_array0_out = 0U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__tag_array1_out = 0U;
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__wben_mux_out 
        = (0xffffU & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__wben_mux_sel)
                       ? ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__wben_mux_sel)
                           ? 0xffffU : 0U) : ((IData)(0xfU) 
                                              << (0xcU 
                                                  & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out))));
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__write_data_mux_sel) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__write_data_mux_sel) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out[0U] 
                = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__memresp_data_reg_out[0U];
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out[1U] 
                = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__memresp_data_reg_out[1U];
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out[2U] 
                = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__memresp_data_reg_out[2U];
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out[3U] 
                = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__memresp_data_reg_out[3U];
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out[0U] = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out[1U] = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out[2U] = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out[3U] = 0U;
        }
    } else {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out[0U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__cachereq_data_reg_out;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out[1U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__cachereq_data_reg_out;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out[2U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__cachereq_data_reg_out;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out[3U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__cachereq_data_reg_out;
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__2__KET____DOT__dcache__cache2mem_reqstream_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__read_data_reg_out[0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__2__KET____DOT__dcache__cache2mem_reqstream_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__read_data_reg_out[1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__2__KET____DOT__dcache__cache2mem_reqstream_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__read_data_reg_out[2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__2__KET____DOT__dcache__cache2mem_reqstream_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__read_data_reg_out[3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__2__KET____DOT__dcache__cache2mem_reqstream_msg[4U] 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__mem_req_addr_mux_sel)
             ? ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__mem_req_addr_mux_sel)
                 ? (0xfffffff0U & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out)
                 : 0U) : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__evict_addr_reg_out) 
           << 4U);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__2__KET____DOT__dcache__cache2mem_reqstream_msg[5U] 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__memreq_type) 
            << 0xcU) | (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__mem_req_addr_mux_sel)
                          ? ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__mem_req_addr_mux_sel)
                              ? (0xfffffff0U & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out)
                              : 0U) : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__evict_addr_reg_out) 
                        >> 0x1cU));
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__tag_array_ren) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__tag_array0_out 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__tag_array_way0__DOT__mem
            [(7U & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                    >> 6U))];
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__tag_array1_out 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__tag_array_way1__DOT__mem
            [(7U & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                    >> 6U))];
    } else {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__tag_array0_out = 0U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__tag_array1_out = 0U;
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__wben_mux_out 
        = (0xffffU & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__wben_mux_sel)
                       ? ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__wben_mux_sel)
                           ? 0xffffU : 0U) : ((IData)(0xfU) 
                                              << (0xcU 
                                                  & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out))));
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__write_data_mux_sel) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__write_data_mux_sel) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out[0U] 
                = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__memresp_data_reg_out[0U];
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out[1U] 
                = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__memresp_data_reg_out[1U];
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out[2U] 
                = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__memresp_data_reg_out[2U];
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out[3U] 
                = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__memresp_data_reg_out[3U];
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out[0U] = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out[1U] = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out[2U] = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out[3U] = 0U;
        }
    } else {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out[0U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__cachereq_data_reg_out;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out[1U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__cachereq_data_reg_out;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out[2U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__cachereq_data_reg_out;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out[3U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__cachereq_data_reg_out;
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__1__KET____DOT__dcache__cache2mem_reqstream_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__read_data_reg_out[0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__1__KET____DOT__dcache__cache2mem_reqstream_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__read_data_reg_out[1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__1__KET____DOT__dcache__cache2mem_reqstream_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__read_data_reg_out[2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__1__KET____DOT__dcache__cache2mem_reqstream_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__read_data_reg_out[3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__1__KET____DOT__dcache__cache2mem_reqstream_msg[4U] 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__mem_req_addr_mux_sel)
             ? ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__mem_req_addr_mux_sel)
                 ? (0xfffffff0U & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out)
                 : 0U) : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__evict_addr_reg_out) 
           << 4U);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__1__KET____DOT__dcache__cache2mem_reqstream_msg[5U] 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__memreq_type) 
            << 0xcU) | (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__mem_req_addr_mux_sel)
                          ? ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__mem_req_addr_mux_sel)
                              ? (0xfffffff0U & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out)
                              : 0U) : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__evict_addr_reg_out) 
                        >> 0x1cU));
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__tag_array_ren) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__tag_array0_out 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__tag_array_way0__DOT__mem
            [(7U & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                    >> 6U))];
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__tag_array1_out 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__tag_array_way1__DOT__mem
            [(7U & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                    >> 6U))];
    } else {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__tag_array0_out = 0U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__tag_array1_out = 0U;
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__wben_mux_out 
        = (0xffffU & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__wben_mux_sel)
                       ? ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__wben_mux_sel)
                           ? 0xffffU : 0U) : ((IData)(0xfU) 
                                              << (0xcU 
                                                  & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out))));
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__write_data_mux_sel) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__write_data_mux_sel) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out[0U] 
                = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__memresp_data_reg_out[0U];
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out[1U] 
                = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__memresp_data_reg_out[1U];
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out[2U] 
                = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__memresp_data_reg_out[2U];
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out[3U] 
                = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__memresp_data_reg_out[3U];
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out[0U] = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out[1U] = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out[2U] = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out[3U] = 0U;
        }
    } else {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out[0U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__cachereq_data_reg_out;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out[1U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__cachereq_data_reg_out;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out[2U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__cachereq_data_reg_out;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__write_data_mux_out[3U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__cachereq_data_reg_out;
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__0__KET____DOT__dcache__cache2mem_reqstream_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__read_data_reg_out[0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__0__KET____DOT__dcache__cache2mem_reqstream_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__read_data_reg_out[1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__0__KET____DOT__dcache__cache2mem_reqstream_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__read_data_reg_out[2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__0__KET____DOT__dcache__cache2mem_reqstream_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__read_data_reg_out[3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__0__KET____DOT__dcache__cache2mem_reqstream_msg[4U] 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__mem_req_addr_mux_sel)
             ? ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__mem_req_addr_mux_sel)
                 ? (0xfffffff0U & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out)
                 : 0U) : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__evict_addr_reg_out) 
           << 4U);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__0__KET____DOT__dcache__cache2mem_reqstream_msg[5U] 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__memreq_type) 
            << 0xcU) | (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__mem_req_addr_mux_sel)
                          ? ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__mem_req_addr_mux_sel)
                              ? (0xfffffff0U & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out)
                              : 0U) : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__evict_addr_reg_out) 
                        >> 0x1cU));
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__tag_array_ren) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__tag_array0_out 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__tag_array_way0__DOT__mem
            [(7U & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                    >> 6U))];
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__tag_array1_out 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__tag_array_way1__DOT__mem
            [(7U & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                    >> 6U))];
    } else {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__tag_array0_out = 0U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__tag_array1_out = 0U;
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router0__istream_val
           [0U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router0__istream_val
           [1U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router0__istream_val
           [2U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router1__istream_val
           [0U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router1__istream_val
           [1U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router1__istream_val
           [2U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router2__istream_val
           [0U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router2__istream_val
           [1U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router2__istream_val
           [2U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router3__istream_val
           [0U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router3__istream_val
           [1U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router3__istream_val
           [2U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router0__ostream_rdy
            [0U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router0__ostream_rdy
            [0U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router0__ostream_rdy
            [0U];
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router0__ostream_rdy
            [1U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router0__ostream_rdy
            [1U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router0__ostream_rdy
            [1U];
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router0__ostream_rdy
            [2U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router0__ostream_rdy
            [2U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router0__ostream_rdy
            [2U];
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router1__ostream_rdy
            [0U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router1__ostream_rdy
            [0U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router1__ostream_rdy
            [0U];
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router1__ostream_rdy
            [1U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router1__ostream_rdy
            [1U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router1__ostream_rdy
            [1U];
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router1__ostream_rdy
            [2U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router1__ostream_rdy
            [2U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router1__ostream_rdy
            [2U];
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router2__ostream_rdy
            [0U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router2__ostream_rdy
            [0U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router2__ostream_rdy
            [0U];
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router2__ostream_rdy
            [1U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router2__ostream_rdy
            [1U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router2__ostream_rdy
            [1U];
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router2__ostream_rdy
            [2U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router2__ostream_rdy
            [2U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router2__ostream_rdy
            [2U];
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router3__ostream_rdy
            [0U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router3__ostream_rdy
            [0U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router3__ostream_rdy
            [0U];
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router3__ostream_rdy
            [1U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router3__ostream_rdy
            [1U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router3__ostream_rdy
            [1U];
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router3__ostream_rdy
            [2U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router3__ostream_rdy
            [2U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT____Vcellinp__router3__ostream_rdy
            [2U];
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router0__istream_val
           [0U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router0__istream_val
           [1U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router0__istream_val
           [2U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router1__istream_val
           [0U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router1__istream_val
           [1U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router1__istream_val
           [2U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router2__istream_val
           [0U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router2__istream_val
           [1U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router2__istream_val
           [2U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router3__istream_val
           [0U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router3__istream_val
           [1U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router3__istream_val
           [2U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router0__istream_val
           [0U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router0__istream_val
           [1U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router0__istream_val
           [2U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router1__istream_val
           [0U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router1__istream_val
           [1U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router1__istream_val
           [2U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router2__istream_val
           [0U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router2__istream_val
           [1U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router2__istream_val
           [2U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router3__istream_val
           [0U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router3__istream_val
           [1U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router3__istream_val
           [2U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router0__ostream_rdy
            [0U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router0__ostream_rdy
            [0U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router0__ostream_rdy
            [0U];
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router0__ostream_rdy
            [1U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router0__ostream_rdy
            [1U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router0__ostream_rdy
            [1U];
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router0__ostream_rdy
            [2U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router0__ostream_rdy
            [2U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router0__ostream_rdy
            [2U];
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router1__ostream_rdy
            [0U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router1__ostream_rdy
            [0U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router1__ostream_rdy
            [0U];
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router1__ostream_rdy
            [1U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router1__ostream_rdy
            [1U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router1__ostream_rdy
            [1U];
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router1__ostream_rdy
            [2U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router1__ostream_rdy
            [2U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router1__ostream_rdy
            [2U];
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router2__ostream_rdy
            [0U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router2__ostream_rdy
            [0U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router2__ostream_rdy
            [0U];
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router2__ostream_rdy
            [1U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router2__ostream_rdy
            [1U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router2__ostream_rdy
            [1U];
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router2__ostream_rdy
            [2U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router2__ostream_rdy
            [2U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router2__ostream_rdy
            [2U];
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router3__ostream_rdy
            [0U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router3__ostream_rdy
            [0U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router3__ostream_rdy
            [0U];
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router3__ostream_rdy
            [1U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router3__ostream_rdy
            [1U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router3__ostream_rdy
            [1U];
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router3__ostream_rdy
            [2U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router3__ostream_rdy
            [2U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router3__ostream_rdy
            [2U];
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router0__ostream_rdy
            [0U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router0__ostream_rdy
            [0U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router0__ostream_rdy
            [0U];
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router0__ostream_rdy
            [1U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router0__ostream_rdy
            [1U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router0__ostream_rdy
            [1U];
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router0__ostream_rdy
            [2U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router0__ostream_rdy
            [2U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router0__ostream_rdy
            [2U];
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router1__ostream_rdy
            [0U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router1__ostream_rdy
            [0U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router1__ostream_rdy
            [0U];
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router1__ostream_rdy
            [1U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router1__ostream_rdy
            [1U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router1__ostream_rdy
            [1U];
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router1__ostream_rdy
            [2U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router1__ostream_rdy
            [2U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router1__ostream_rdy
            [2U];
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router2__ostream_rdy
            [0U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router2__ostream_rdy
            [0U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router2__ostream_rdy
            [0U];
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router2__ostream_rdy
            [1U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router2__ostream_rdy
            [1U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router2__ostream_rdy
            [1U];
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router2__ostream_rdy
            [2U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router2__ostream_rdy
            [2U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router2__ostream_rdy
            [2U];
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[0U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[1U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[2U] = 0U;
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
        [1U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[1U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router3__ostream_rdy
            [0U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
               [2U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[2U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router3__ostream_rdy
            [0U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit0__istream_val
               [0U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy[0U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router3__ostream_rdy
            [0U];
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[0U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[1U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[2U] = 0U;
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
        [1U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[1U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router3__ostream_rdy
            [1U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
               [2U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[2U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router3__ostream_rdy
            [1U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit1__istream_val
               [0U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy[0U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router3__ostream_rdy
            [1U];
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[0U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[1U] = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[2U] = 0U;
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
        [1U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[1U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router3__ostream_rdy
            [2U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
               [2U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[2U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router3__ostream_rdy
            [2U];
    } else if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellinp__sunit2__istream_val
               [0U]) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy[0U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT____Vcellinp__router3__ostream_rdy
            [2U];
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__add_mux_output 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__add_mux_sel)
            ? ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__add_mux_sel)
                ? (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__a_reg_out 
                   + vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul_resp_msg)
                : 0U) : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul_resp_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__add_mux_output 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__add_mux_sel)
            ? ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__add_mux_sel)
                ? (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__a_reg_out 
                   + vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul_resp_msg)
                : 0U) : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul_resp_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__add_mux_output 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__add_mux_sel)
            ? ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__add_mux_sel)
                ? (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__a_reg_out 
                   + vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul_resp_msg)
                : 0U) : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul_resp_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__add_mux_output 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__add_mux_sel)
            ? ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__add_mux_sel)
                ? (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__a_reg_out 
                   + vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul_resp_msg)
                : 0U) : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul_resp_msg);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT____Vcellinp__data_array_way0__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__active_way)) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__data_array_wen));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT____Vcellinp__data_array_way1__write_en 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__data_array_wen) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__active_way));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT____Vcellinp__data_array_way0__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__active_way)) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__data_array_wen));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT____Vcellinp__data_array_way1__write_en 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__data_array_wen) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__active_way));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT____Vcellinp__data_array_way0__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__active_way)) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__data_array_wen));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT____Vcellinp__data_array_way1__write_en 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__data_array_wen) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__active_way));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT____Vcellinp__data_array_way0__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__active_way)) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__data_array_wen));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT____Vcellinp__data_array_way1__write_en 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__data_array_wen) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__active_way));
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__3__KET____DOT__dcache__proc2cache_respstream_msg 
        = (((QData)((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cacheresp_type)) 
            << 0x2cU) | (((QData)((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__cachereq_opaque_reg_out)) 
                          << 0x24U) | (((QData)((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__hit_out)) 
                                        << 0x22U) | (QData)((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__data)))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT____Vcellinp__data_array_way0__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__active_way)) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__data_array_wen));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT____Vcellinp__data_array_way1__write_en 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__data_array_wen) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__active_way));
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__2__KET____DOT__dcache__proc2cache_respstream_msg 
        = (((QData)((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cacheresp_type)) 
            << 0x2cU) | (((QData)((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__cachereq_opaque_reg_out)) 
                          << 0x24U) | (((QData)((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__hit_out)) 
                                        << 0x22U) | (QData)((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__data)))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT____Vcellinp__data_array_way0__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__active_way)) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__data_array_wen));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT____Vcellinp__data_array_way1__write_en 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__data_array_wen) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__active_way));
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__1__KET____DOT__dcache__proc2cache_respstream_msg 
        = (((QData)((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cacheresp_type)) 
            << 0x2cU) | (((QData)((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__cachereq_opaque_reg_out)) 
                          << 0x24U) | (((QData)((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__hit_out)) 
                                        << 0x22U) | (QData)((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__data)))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT____Vcellinp__data_array_way0__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__active_way)) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__data_array_wen));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT____Vcellinp__data_array_way1__write_en 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__data_array_wen) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__active_way));
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__0__KET____DOT__dcache__proc2cache_respstream_msg 
        = (((QData)((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__cacheresp_type)) 
            << 0x2cU) | (((QData)((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__cachereq_opaque_reg_out)) 
                          << 0x24U) | (((QData)((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__hit_out)) 
                                        << 0x22U) | (QData)((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__data)))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT____Vcellinp__data_array_way0__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__active_way)) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__data_array_wen));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT____Vcellinp__data_array_way1__write_en 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__data_array_wen) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__active_way));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__stall_X 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__val_X) 
           & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4));
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_19 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__val_D) 
            & (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__val_D) 
                & ((~ vlSelf->MultiCoreSys_noparam__DOT____Vcellinp__v__mngr2proc_val
                    [3U]) & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__mngr2proc_rdy_D))) 
               | (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__rs1_en_D) 
                   & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__val_X) 
                      & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_17) 
                         & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_22)))) 
                  | (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__rs2_en_D) 
                      & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__val_X) 
                         & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_15) 
                            & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_22)))) 
                     | (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__val_D) 
                         & (2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D))) 
                        & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imul_req_rdy_D))))))) 
           | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_4));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__stall_X 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__val_X) 
           & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_3));
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_19 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__val_D) 
            & (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__val_D) 
                & ((~ vlSelf->MultiCoreSys_noparam__DOT____Vcellinp__v__mngr2proc_val
                    [2U]) & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__mngr2proc_rdy_D))) 
               | (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__rs1_en_D) 
                   & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__val_X) 
                      & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_17) 
                         & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_22)))) 
                  | (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__rs2_en_D) 
                      & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__val_X) 
                         & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_15) 
                            & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_22)))) 
                     | (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__val_D) 
                         & (2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D))) 
                        & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imul_req_rdy_D))))))) 
           | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_3));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__stall_X 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__val_X) 
           & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_2));
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_19 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__val_D) 
            & (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__val_D) 
                & ((~ vlSelf->MultiCoreSys_noparam__DOT____Vcellinp__v__mngr2proc_val
                    [1U]) & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__mngr2proc_rdy_D))) 
               | (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__rs1_en_D) 
                   & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__val_X) 
                      & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_17) 
                         & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_22)))) 
                  | (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__rs2_en_D) 
                      & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__val_X) 
                         & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_15) 
                            & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_22)))) 
                     | (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__val_D) 
                         & (2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D))) 
                        & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imul_req_rdy_D))))))) 
           | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_2));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__stall_X 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__val_X) 
           & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_1));
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_19 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__val_D) 
            & (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__val_D) 
                & ((~ vlSelf->MultiCoreSys_noparam__DOT____Vcellinp__v__mngr2proc_val
                    [0U]) & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__mngr2proc_rdy_D))) 
               | (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__rs1_en_D) 
                   & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__val_X) 
                      & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_17) 
                         & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_22)))) 
                  | (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__rs2_en_D) 
                      & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__val_X) 
                         & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_15) 
                            & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_22)))) 
                     | (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__val_D) 
                         & (2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D))) 
                        & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imul_req_rdy_D))))))) 
           | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_1));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_msg[3U][0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__3__KET____DOT__icache__cache2mem_reqstream_msg[0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_msg[3U][1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__3__KET____DOT__icache__cache2mem_reqstream_msg[1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_msg[3U][2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__3__KET____DOT__icache__cache2mem_reqstream_msg[2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_msg[3U][3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__3__KET____DOT__icache__cache2mem_reqstream_msg[3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_msg[3U][4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__3__KET____DOT__icache__cache2mem_reqstream_msg[4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_msg[3U][5U] 
        = (0xc000000U | vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__3__KET____DOT__icache__cache2mem_reqstream_msg[5U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__hit_w0 
        = ((vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__tag_array0_out 
            == (0xffffffU & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out 
                             >> 7U))) & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__valid_bits_way0__DOT__rfile
           [(7U & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out 
                   >> 4U))]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__hit_w1 
        = ((vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__tag_array1_out 
            == (0xffffffU & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out 
                             >> 7U))) & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__valid_bits_way1__DOT__rfile
           [(7U & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out 
                   >> 4U))]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_msg[2U][0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__2__KET____DOT__icache__cache2mem_reqstream_msg[0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_msg[2U][1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__2__KET____DOT__icache__cache2mem_reqstream_msg[1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_msg[2U][2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__2__KET____DOT__icache__cache2mem_reqstream_msg[2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_msg[2U][3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__2__KET____DOT__icache__cache2mem_reqstream_msg[3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_msg[2U][4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__2__KET____DOT__icache__cache2mem_reqstream_msg[4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_msg[2U][5U] 
        = (0x8000000U | vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__2__KET____DOT__icache__cache2mem_reqstream_msg[5U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__hit_w0 
        = ((vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__tag_array0_out 
            == (0xffffffU & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out 
                             >> 7U))) & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__valid_bits_way0__DOT__rfile
           [(7U & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out 
                   >> 4U))]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__hit_w1 
        = ((vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__tag_array1_out 
            == (0xffffffU & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out 
                             >> 7U))) & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__valid_bits_way1__DOT__rfile
           [(7U & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out 
                   >> 4U))]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_msg[1U][0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__1__KET____DOT__icache__cache2mem_reqstream_msg[0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_msg[1U][1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__1__KET____DOT__icache__cache2mem_reqstream_msg[1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_msg[1U][2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__1__KET____DOT__icache__cache2mem_reqstream_msg[2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_msg[1U][3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__1__KET____DOT__icache__cache2mem_reqstream_msg[3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_msg[1U][4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__1__KET____DOT__icache__cache2mem_reqstream_msg[4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_msg[1U][5U] 
        = (0x4000000U | vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__1__KET____DOT__icache__cache2mem_reqstream_msg[5U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__hit_w0 
        = ((vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__tag_array0_out 
            == (0xffffffU & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out 
                             >> 7U))) & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__valid_bits_way0__DOT__rfile
           [(7U & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out 
                   >> 4U))]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__hit_w1 
        = ((vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__tag_array1_out 
            == (0xffffffU & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out 
                             >> 7U))) & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__valid_bits_way1__DOT__rfile
           [(7U & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out 
                   >> 4U))]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_msg[0U][0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__0__KET____DOT__icache__cache2mem_reqstream_msg[0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_msg[0U][1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__0__KET____DOT__icache__cache2mem_reqstream_msg[1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_msg[0U][2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__0__KET____DOT__icache__cache2mem_reqstream_msg[2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_msg[0U][3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__0__KET____DOT__icache__cache2mem_reqstream_msg[3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_msg[0U][4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__0__KET____DOT__icache__cache2mem_reqstream_msg[4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_msg[0U][5U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__0__KET____DOT__icache__cache2mem_reqstream_msg[5U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__hit_w0 
        = ((vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__tag_array0_out 
            == (0xffffffU & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out 
                             >> 7U))) & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__valid_bits_way0__DOT__rfile
           [(7U & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out 
                   >> 4U))]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__hit_w1 
        = ((vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__tag_array1_out 
            == (0xffffffU & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out 
                             >> 7U))) & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__valid_bits_way1__DOT__rfile
           [(7U & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out 
                   >> 4U))]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_msg[3U][0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__3__KET____DOT__dcache__cache2mem_reqstream_msg[0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_msg[3U][1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__3__KET____DOT__dcache__cache2mem_reqstream_msg[1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_msg[3U][2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__3__KET____DOT__dcache__cache2mem_reqstream_msg[2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_msg[3U][3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__3__KET____DOT__dcache__cache2mem_reqstream_msg[3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_msg[3U][4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__3__KET____DOT__dcache__cache2mem_reqstream_msg[4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_msg[3U][5U] 
        = (0xc000000U | vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__3__KET____DOT__dcache__cache2mem_reqstream_msg[5U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0 
        = ((vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__tag_array0_out 
            == (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                >> 9U)) & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__valid_bits_way0__DOT__rfile
           [(7U & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                   >> 6U))]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__hit_w1 
        = ((vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__tag_array1_out 
            == (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                >> 9U)) & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__valid_bits_way1__DOT__rfile
           [(7U & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                   >> 6U))]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_msg[2U][0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__2__KET____DOT__dcache__cache2mem_reqstream_msg[0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_msg[2U][1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__2__KET____DOT__dcache__cache2mem_reqstream_msg[1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_msg[2U][2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__2__KET____DOT__dcache__cache2mem_reqstream_msg[2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_msg[2U][3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__2__KET____DOT__dcache__cache2mem_reqstream_msg[3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_msg[2U][4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__2__KET____DOT__dcache__cache2mem_reqstream_msg[4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_msg[2U][5U] 
        = (0x8000000U | vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__2__KET____DOT__dcache__cache2mem_reqstream_msg[5U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0 
        = ((vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__tag_array0_out 
            == (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                >> 9U)) & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__valid_bits_way0__DOT__rfile
           [(7U & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                   >> 6U))]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__hit_w1 
        = ((vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__tag_array1_out 
            == (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                >> 9U)) & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__valid_bits_way1__DOT__rfile
           [(7U & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                   >> 6U))]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_msg[1U][0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__1__KET____DOT__dcache__cache2mem_reqstream_msg[0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_msg[1U][1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__1__KET____DOT__dcache__cache2mem_reqstream_msg[1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_msg[1U][2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__1__KET____DOT__dcache__cache2mem_reqstream_msg[2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_msg[1U][3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__1__KET____DOT__dcache__cache2mem_reqstream_msg[3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_msg[1U][4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__1__KET____DOT__dcache__cache2mem_reqstream_msg[4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_msg[1U][5U] 
        = (0x4000000U | vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__1__KET____DOT__dcache__cache2mem_reqstream_msg[5U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0 
        = ((vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__tag_array0_out 
            == (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                >> 9U)) & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__valid_bits_way0__DOT__rfile
           [(7U & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                   >> 6U))]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__hit_w1 
        = ((vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__tag_array1_out 
            == (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                >> 9U)) & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__valid_bits_way1__DOT__rfile
           [(7U & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                   >> 6U))]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_msg[0U][0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__0__KET____DOT__dcache__cache2mem_reqstream_msg[0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_msg[0U][1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__0__KET____DOT__dcache__cache2mem_reqstream_msg[1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_msg[0U][2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__0__KET____DOT__dcache__cache2mem_reqstream_msg[2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_msg[0U][3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__0__KET____DOT__dcache__cache2mem_reqstream_msg[3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_msg[0U][4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__0__KET____DOT__dcache__cache2mem_reqstream_msg[4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_msg[0U][5U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__0__KET____DOT__dcache__cache2mem_reqstream_msg[5U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0 
        = ((vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__tag_array0_out 
            == (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                >> 9U)) & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__valid_bits_way0__DOT__rfile
           [(7U & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                   >> 6U))]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__hit_w1 
        = ((vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__tag_array1_out 
            == (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                >> 9U)) & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__valid_bits_way1__DOT__rfile
           [(7U & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                   >> 6U))]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_rdy[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy
        [0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_rdy[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy
        [1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_rdy[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy
        [2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_rdy[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy
        [0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_rdy[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy
        [1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_rdy[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy
        [2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_rdy[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy
        [0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_rdy[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy
        [1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_rdy[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy
        [2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_rdy[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy
        [0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_rdy[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy
        [1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_rdy[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy
        [2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_rdy[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy
        [0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_rdy[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy
        [1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_rdy[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy
        [2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_rdy[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy
        [0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_rdy[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy
        [1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_rdy[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy
        [2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_rdy[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy
        [0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_rdy[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy
        [1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_rdy[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy
        [2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_rdy[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy
        [0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_rdy[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy
        [1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_rdy[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy
        [2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_rdy[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy
        [0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_rdy[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy
        [1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_rdy[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy
        [2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_rdy[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy
        [0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_rdy[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy
        [1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_rdy[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy
        [2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_rdy[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy
        [0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_rdy[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy
        [1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_rdy[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy
        [2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_rdy[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy
        [0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_rdy[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy
        [1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_rdy[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy
        [2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_rdy[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy
        [0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_rdy[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy
        [1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_rdy[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy
        [2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_rdy[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy
        [0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_rdy[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy
        [1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_rdy[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy
        [2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_rdy[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy
        [0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_rdy[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy
        [1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_rdy[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy
        [2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_rdy[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy
        [0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_rdy[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy
        [1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_rdy[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy
        [2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_rdy[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy
        [0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_rdy[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy
        [1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_rdy[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy
        [2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_rdy[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy
        [0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_rdy[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy
        [1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_rdy[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy
        [2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_rdy[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy
        [0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_rdy[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy
        [1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_rdy[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy
        [2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_rdy[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy
        [0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_rdy[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy
        [1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_rdy[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy
        [2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_rdy[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy
        [0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_rdy[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy
        [1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_rdy[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy
        [2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_rdy[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy
        [0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_rdy[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy
        [1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_rdy[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy
        [2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_rdy[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy
        [0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_rdy[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy
        [1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_rdy[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy
        [2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_rdy[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy
        [0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_rdy[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy
        [1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_rdy[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy
        [2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_rdy[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy
        [0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_rdy[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy
        [1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_rdy[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit0__istream_rdy
        [2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_rdy[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy
        [0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_rdy[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy
        [1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_rdy[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit1__istream_rdy
        [2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_rdy[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy
        [0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_rdy[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy
        [1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_rdy[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT____Vcellout__sunit2__istream_rdy
        [2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_rdy[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy
        [0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_rdy[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy
        [1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_rdy[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit0__istream_rdy
        [2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_rdy[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy
        [0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_rdy[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy
        [1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_rdy[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit1__istream_rdy
        [2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_rdy[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy
        [0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_rdy[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy
        [1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_rdy[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT____Vcellout__sunit2__istream_rdy
        [2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_rdy[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy
        [0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_rdy[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy
        [1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_rdy[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit0__istream_rdy
        [2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_rdy[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy
        [0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_rdy[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy
        [1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_rdy[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit1__istream_rdy
        [2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_rdy[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy
        [0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_rdy[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy
        [1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_rdy[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT____Vcellout__sunit2__istream_rdy
        [2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_rdy[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy
        [0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_rdy[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy
        [1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_rdy[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit0__istream_rdy
        [2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_rdy[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy
        [0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_rdy[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy
        [1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_rdy[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit1__istream_rdy
        [2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_rdy[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy
        [0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_rdy[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy
        [1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_rdy[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT____Vcellout__sunit2__istream_rdy
        [2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacheresp2netmsg_ostream_msg[3U] 
        = (((QData)((IData)((3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__cachereq_opaque_reg_out) 
                                   >> 4U)))) << 0x3aU) 
           | (((QData)((IData)((3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__cachereq_opaque_reg_out) 
                                      >> 6U)))) << 0x38U) 
              | MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__3__KET____DOT__dcache__proc2cache_respstream_msg));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacheresp2netmsg_ostream_msg[2U] 
        = (((QData)((IData)((3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__cachereq_opaque_reg_out) 
                                   >> 4U)))) << 0x3aU) 
           | (((QData)((IData)((3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__cachereq_opaque_reg_out) 
                                      >> 6U)))) << 0x38U) 
              | MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__2__KET____DOT__dcache__proc2cache_respstream_msg));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacheresp2netmsg_ostream_msg[1U] 
        = (((QData)((IData)((3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__cachereq_opaque_reg_out) 
                                   >> 4U)))) << 0x3aU) 
           | (((QData)((IData)((3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__cachereq_opaque_reg_out) 
                                      >> 6U)))) << 0x38U) 
              | MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__1__KET____DOT__dcache__proc2cache_respstream_msg));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacheresp2netmsg_ostream_msg[0U] 
        = (((QData)((IData)((3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__cachereq_opaque_reg_out) 
                                   >> 4U)))) << 0x3aU) 
           | (((QData)((IData)((3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__cachereq_opaque_reg_out) 
                                      >> 6U)))) << 0x38U) 
              | MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__0__KET____DOT__dcache__proc2cache_respstream_msg));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imul_resp_rdy_X 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__val_X) 
           & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__stall_X)) 
              & (2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ex_result_sel_X))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__next_val_X 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__stall_X)) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__val_X));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__stall_D 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__val_D) 
           & (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_19));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imul_resp_rdy_X 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__val_X) 
           & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__stall_X)) 
              & (2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ex_result_sel_X))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__next_val_X 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__stall_X)) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__val_X));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__stall_D 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__val_D) 
           & (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_19));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imul_resp_rdy_X 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__val_X) 
           & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__stall_X)) 
              & (2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ex_result_sel_X))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__next_val_X 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__stall_X)) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__val_X));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__stall_D 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__val_D) 
           & (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_19));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imul_resp_rdy_X 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__val_X) 
           & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__stall_X)) 
              & (2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ex_result_sel_X))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__next_val_X 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__stall_X)) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__val_X));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__stall_D 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__val_D) 
           & (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_19));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__use_bit_wen = 0U;
    if (((3U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__hit_w1)))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__use_bit_wen = 1U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__use_bit_wdata = 0U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__use_bit_wdata 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__hit_w0;
    } else {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__use_bit_wdata = 0U;
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__dirty_wdata_way1 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__dirty_wdata_way0 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__dirty_wen_way1 = 0U;
    if (((4U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__hit_w1)))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__use_bit_wen = 1U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__use_bit_wdata 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__hit_w0;
    }
    if ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__way_sel_reg_out) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__tag_array_wen_way1 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way1 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__dirty_wdata_way1 = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__tag_array_wen_way0 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way0 = 1U;
        }
    }
    if (((4U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__hit_w1)))) {
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__hit_w0)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__dirty_wdata_way1 = 1U;
        }
    }
    if ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__dirty_wdata_way0 = 0U;
        }
    }
    if (((4U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__hit_w1)))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__hit_w0) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__dirty_wdata_way0 = 1U;
        }
    }
    if ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__way_sel_reg_out) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__dirty_wen_way1 = 1U;
        }
    }
    if (((4U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__hit_w1)))) {
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__hit_w0)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__dirty_wen_way1 = 1U;
        }
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__dirty_wen_way0 = 0U;
    if ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__dirty_wen_way0 = 1U;
        }
    }
    if (((4U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__hit_w1)))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__hit_w0) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__dirty_wen_way0 = 1U;
        }
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__0 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__hit_w0) 
           | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__hit_w1));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__use_bit_wen = 0U;
    if (((3U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__hit_w1)))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__use_bit_wen = 1U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__use_bit_wdata = 0U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__use_bit_wdata 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__hit_w0;
    } else {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__use_bit_wdata = 0U;
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__dirty_wdata_way1 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__dirty_wdata_way0 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__dirty_wen_way1 = 0U;
    if (((4U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__hit_w1)))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__use_bit_wen = 1U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__use_bit_wdata 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__hit_w0;
    }
    if ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__way_sel_reg_out) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__tag_array_wen_way1 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way1 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__dirty_wdata_way1 = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__tag_array_wen_way0 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way0 = 1U;
        }
    }
    if (((4U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__hit_w1)))) {
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__hit_w0)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__dirty_wdata_way1 = 1U;
        }
    }
    if ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__dirty_wdata_way0 = 0U;
        }
    }
    if (((4U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__hit_w1)))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__hit_w0) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__dirty_wdata_way0 = 1U;
        }
    }
    if ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__way_sel_reg_out) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__dirty_wen_way1 = 1U;
        }
    }
    if (((4U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__hit_w1)))) {
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__hit_w0)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__dirty_wen_way1 = 1U;
        }
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__dirty_wen_way0 = 0U;
    if ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__dirty_wen_way0 = 1U;
        }
    }
    if (((4U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__hit_w1)))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__hit_w0) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__dirty_wen_way0 = 1U;
        }
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__0 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__hit_w0) 
           | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__hit_w1));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__use_bit_wen = 0U;
    if (((3U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__hit_w1)))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__use_bit_wen = 1U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__use_bit_wdata = 0U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__use_bit_wdata 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__hit_w0;
    } else {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__use_bit_wdata = 0U;
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__dirty_wdata_way1 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__dirty_wdata_way0 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__dirty_wen_way1 = 0U;
    if (((4U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__hit_w1)))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__use_bit_wen = 1U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__use_bit_wdata 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__hit_w0;
    }
    if ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__way_sel_reg_out) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__tag_array_wen_way1 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way1 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__dirty_wdata_way1 = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__tag_array_wen_way0 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way0 = 1U;
        }
    }
    if (((4U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__hit_w1)))) {
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__hit_w0)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__dirty_wdata_way1 = 1U;
        }
    }
    if ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__dirty_wdata_way0 = 0U;
        }
    }
    if (((4U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__hit_w1)))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__hit_w0) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__dirty_wdata_way0 = 1U;
        }
    }
    if ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__way_sel_reg_out) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__dirty_wen_way1 = 1U;
        }
    }
    if (((4U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__hit_w1)))) {
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__hit_w0)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__dirty_wen_way1 = 1U;
        }
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__dirty_wen_way0 = 0U;
    if ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__dirty_wen_way0 = 1U;
        }
    }
    if (((4U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__hit_w1)))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__hit_w0) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__dirty_wen_way0 = 1U;
        }
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__0 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__hit_w0) 
           | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__hit_w1));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router0__istream_msg[0U][0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_msg
        [0U][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router0__istream_msg[0U][1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_msg
        [0U][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router0__istream_msg[0U][2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_msg
        [0U][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router0__istream_msg[0U][3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_msg
        [0U][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router0__istream_msg[0U][4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_msg
        [0U][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router0__istream_msg[0U][5U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_msg
        [0U][5U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router1__istream_msg[0U][0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_msg
        [1U][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router1__istream_msg[0U][1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_msg
        [1U][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router1__istream_msg[0U][2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_msg
        [1U][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router1__istream_msg[0U][3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_msg
        [1U][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router1__istream_msg[0U][4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_msg
        [1U][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router1__istream_msg[0U][5U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_msg
        [1U][5U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router2__istream_msg[0U][0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_msg
        [2U][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router2__istream_msg[0U][1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_msg
        [2U][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router2__istream_msg[0U][2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_msg
        [2U][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router2__istream_msg[0U][3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_msg
        [2U][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router2__istream_msg[0U][4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_msg
        [2U][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router2__istream_msg[0U][5U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_msg
        [2U][5U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router3__istream_msg[0U][0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_msg
        [3U][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router3__istream_msg[0U][1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_msg
        [3U][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router3__istream_msg[0U][2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_msg
        [3U][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router3__istream_msg[0U][3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_msg
        [3U][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router3__istream_msg[0U][4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_msg
        [3U][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT____Vcellinp__router3__istream_msg[0U][5U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_msg
        [3U][5U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__use_bit_wen = 0U;
    if (((3U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__hit_w1)))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__use_bit_wen = 1U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__use_bit_wdata = 0U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__use_bit_wdata 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__hit_w0;
    } else {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__use_bit_wdata = 0U;
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__dirty_wdata_way1 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__dirty_wdata_way0 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__dirty_wen_way1 = 0U;
    if (((4U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__hit_w1)))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__use_bit_wen = 1U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__use_bit_wdata 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__hit_w0;
    }
    if ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__way_sel_reg_out) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__tag_array_wen_way1 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way1 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__dirty_wdata_way1 = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__tag_array_wen_way0 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way0 = 1U;
        }
    }
    if (((4U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__hit_w1)))) {
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__hit_w0)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__dirty_wdata_way1 = 1U;
        }
    }
    if ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__dirty_wdata_way0 = 0U;
        }
    }
    if (((4U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__hit_w1)))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__hit_w0) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__dirty_wdata_way0 = 1U;
        }
    }
    if ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__way_sel_reg_out) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__dirty_wen_way1 = 1U;
        }
    }
    if (((4U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__hit_w1)))) {
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__hit_w0)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__dirty_wen_way1 = 1U;
        }
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__dirty_wen_way0 = 0U;
    if ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__dirty_wen_way0 = 1U;
        }
    }
    if (((4U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__hit_w1)))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__hit_w0) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__dirty_wen_way0 = 1U;
        }
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__0 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__hit_w0) 
           | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__hit_w1));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wen = 0U;
    if (((3U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__hit_w1)))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wen = 1U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wdata = 0U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wdata 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0;
    } else {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wdata = 0U;
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way1 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way0 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wen_way1 = 0U;
    if (((4U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__hit_w1)))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wen = 1U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wdata 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0;
    }
    if ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__tag_array_wen_way1 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way1 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way1 = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__tag_array_wen_way0 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way0 = 1U;
        }
    }
    if (((4U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__hit_w1)))) {
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way1 = 1U;
        }
    }
    if ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way0 = 0U;
        }
    }
    if (((4U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__hit_w1)))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way0 = 1U;
        }
    }
    if ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wen_way1 = 1U;
        }
    }
    if (((4U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__hit_w1)))) {
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wen_way1 = 1U;
        }
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wen_way0 = 0U;
    if ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wen_way0 = 1U;
        }
    }
    if (((4U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__hit_w1)))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wen_way0 = 1U;
        }
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__2 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0) 
           | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__hit_w1));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wen = 0U;
    if (((3U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__hit_w1)))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wen = 1U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wdata = 0U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wdata 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0;
    } else {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wdata = 0U;
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way1 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way0 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wen_way1 = 0U;
    if (((4U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__hit_w1)))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wen = 1U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wdata 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0;
    }
    if ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__tag_array_wen_way1 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way1 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way1 = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__tag_array_wen_way0 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way0 = 1U;
        }
    }
    if (((4U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__hit_w1)))) {
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way1 = 1U;
        }
    }
    if ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way0 = 0U;
        }
    }
    if (((4U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__hit_w1)))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way0 = 1U;
        }
    }
    if ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wen_way1 = 1U;
        }
    }
    if (((4U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__hit_w1)))) {
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wen_way1 = 1U;
        }
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wen_way0 = 0U;
    if ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wen_way0 = 1U;
        }
    }
    if (((4U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__hit_w1)))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wen_way0 = 1U;
        }
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__2 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0) 
           | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__hit_w1));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wen = 0U;
    if (((3U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__hit_w1)))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wen = 1U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wdata = 0U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wdata 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0;
    } else {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wdata = 0U;
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way1 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way0 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wen_way1 = 0U;
    if (((4U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__hit_w1)))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wen = 1U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wdata 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0;
    }
    if ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__tag_array_wen_way1 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way1 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way1 = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__tag_array_wen_way0 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way0 = 1U;
        }
    }
    if (((4U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__hit_w1)))) {
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way1 = 1U;
        }
    }
    if ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way0 = 0U;
        }
    }
    if (((4U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__hit_w1)))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way0 = 1U;
        }
    }
    if ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wen_way1 = 1U;
        }
    }
    if (((4U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__hit_w1)))) {
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wen_way1 = 1U;
        }
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wen_way0 = 0U;
    if ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wen_way0 = 1U;
        }
    }
    if (((4U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__hit_w1)))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wen_way0 = 1U;
        }
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__2 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0) 
           | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__hit_w1));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router0__istream_msg[0U][0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_msg
        [0U][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router0__istream_msg[0U][1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_msg
        [0U][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router0__istream_msg[0U][2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_msg
        [0U][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router0__istream_msg[0U][3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_msg
        [0U][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router0__istream_msg[0U][4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_msg
        [0U][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router0__istream_msg[0U][5U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_msg
        [0U][5U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router1__istream_msg[0U][0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_msg
        [1U][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router1__istream_msg[0U][1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_msg
        [1U][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router1__istream_msg[0U][2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_msg
        [1U][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router1__istream_msg[0U][3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_msg
        [1U][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router1__istream_msg[0U][4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_msg
        [1U][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router1__istream_msg[0U][5U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_msg
        [1U][5U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router2__istream_msg[0U][0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_msg
        [2U][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router2__istream_msg[0U][1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_msg
        [2U][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router2__istream_msg[0U][2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_msg
        [2U][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router2__istream_msg[0U][3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_msg
        [2U][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router2__istream_msg[0U][4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_msg
        [2U][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router2__istream_msg[0U][5U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_msg
        [2U][5U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router3__istream_msg[0U][0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_msg
        [3U][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router3__istream_msg[0U][1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_msg
        [3U][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router3__istream_msg[0U][2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_msg
        [3U][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router3__istream_msg[0U][3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_msg
        [3U][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router3__istream_msg[0U][4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_msg
        [3U][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT____Vcellinp__router3__istream_msg[0U][5U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_msg
        [3U][5U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wen = 0U;
    if (((3U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__hit_w1)))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wen = 1U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wdata = 0U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wdata 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0;
    } else {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wdata = 0U;
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way1 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way0 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wen_way1 = 0U;
    if (((4U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__hit_w1)))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wen = 1U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wdata 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0;
    }
    if ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__tag_array_wen_way1 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way1 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way1 = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__tag_array_wen_way0 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way0 = 1U;
        }
    }
    if (((4U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__hit_w1)))) {
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way1 = 1U;
        }
    }
    if ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way0 = 0U;
        }
    }
    if (((4U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__hit_w1)))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way0 = 1U;
        }
    }
    if ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wen_way1 = 1U;
        }
    }
    if (((4U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__hit_w1)))) {
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wen_way1 = 1U;
        }
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wen_way0 = 0U;
    if ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wen_way0 = 1U;
        }
    }
    if (((4U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__hit_w1)))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wen_way0 = 1U;
        }
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__2 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__hit_w0) 
           | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__hit_w1));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream0_deq_rdy 
            = ((0U == (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__runit0__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream1_deq_rdy 
            = ((0U == (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__runit1__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream2_deq_rdy 
            = ((0U == (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__runit2__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream0_deq_rdy 
            = ((1U == (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__runit0__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream1_deq_rdy 
            = ((1U == (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__runit1__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream2_deq_rdy 
            = ((1U == (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__runit2__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream0_deq_rdy 
            = ((2U == (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream1_deq_rdy 
            = ((2U == (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream2_deq_rdy 
            = ((2U == (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream0_deq_rdy 
            = ((3U == (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream1_deq_rdy 
            = ((3U == (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream2_deq_rdy 
            = ((3U == (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0_deq_rdy 
            = ((0U == (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__runit0__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1_deq_rdy 
            = ((0U == (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__runit1__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2_deq_rdy 
            = ((0U == (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__runit2__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0_deq_rdy 
            = ((1U == (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__runit0__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1_deq_rdy 
            = ((1U == (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__runit1__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2_deq_rdy 
            = ((1U == (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__runit2__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0_deq_rdy 
            = ((2U == (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__runit0__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1_deq_rdy 
            = ((2U == (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__runit1__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2_deq_rdy 
            = ((2U == (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__runit2__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0_deq_rdy 
            = ((3U == (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__runit0__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1_deq_rdy 
            = ((3U == (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__runit1__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2_deq_rdy 
            = ((3U == (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__runit2__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0_deq_rdy 
            = ((0U == (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__runit0__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1_deq_rdy 
            = ((0U == (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__runit1__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2_deq_rdy 
            = ((0U == (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__runit2__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0_deq_rdy 
            = ((1U == (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__runit0__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1_deq_rdy 
            = ((1U == (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__runit1__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2_deq_rdy 
            = ((1U == (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__runit2__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0_deq_rdy 
            = ((2U == (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit0__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1_deq_rdy 
            = ((2U == (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit1__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2_deq_rdy 
            = ((2U == (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__runit2__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0_deq_rdy 
            = ((3U == (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit0__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_rdy
               [0U] : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__routeunit0_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1_deq_rdy 
            = ((3U == (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit1__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_rdy
               [0U] : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__routeunit1_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2_deq_rdy = 0U;
    if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2_deq_rdy 
            = ((3U == (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__runit2__DOT__istream_msg_hdr) 
                             >> 8U))) ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_rdy
               [0U] : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__routeunit2_ostream_rdy
               [1U]);
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router0__istream_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacheresp2netmsg_ostream_msg
        [0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router1__istream_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacheresp2netmsg_ostream_msg
        [1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router2__istream_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacheresp2netmsg_ostream_msg
        [2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT____Vcellinp__router3__istream_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacheresp2netmsg_ostream_msg
        [3U];
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__next_val_X) 
              & (0U != (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_X))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__osquash_X 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__next_val_X) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__pc_redirect_X));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_23 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__stall_D)) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__val_D));
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__next_val_X) 
              & (0U != (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_X))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__osquash_X 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__next_val_X) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__pc_redirect_X));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_23 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__stall_D)) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__val_D));
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__next_val_X) 
              & (0U != (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_X))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__osquash_X 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__next_val_X) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__pc_redirect_X));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_23 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__stall_D)) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__val_D));
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__next_val_X) 
              & (0U != (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_X))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__osquash_X 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__next_val_X) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__pc_redirect_X));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_23 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__stall_D)) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__val_D));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__hit_next 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__hit_out;
    if ((1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__hit_next 
            = ((2U != (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__cachereq_type_reg_out)) 
               && (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__0));
    }
    if ((0U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__hit_next = 0U;
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__hit_next 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__hit_out;
    if ((1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__hit_next 
            = ((2U != (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__cachereq_type_reg_out)) 
               && (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__0));
    }
    if ((0U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__hit_next = 0U;
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__hit_next 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__hit_out;
    if ((1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__hit_next 
            = ((2U != (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__cachereq_type_reg_out)) 
               && (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__0));
    }
    if ((0U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__hit_next = 0U;
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__hit_next 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__hit_out;
    if ((1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__hit_next 
            = ((2U != (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__cachereq_type_reg_out)) 
               && (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__0));
    }
    if ((0U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__hit_next = 0U;
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__hit_next 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__hit_out;
    if ((1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__hit_next 
            = ((2U != (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out)) 
               && (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__2));
    }
    if ((0U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__hit_next = 0U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__next_state 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state;
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet_ostream_val
            [3U]) {
            if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet_ostream_val
                [3U]) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 1U;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0U;
        }
    } else {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__next_state 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state;
    }
    if ((1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__next_state 
            = ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out))
                ? 2U : ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__2)
                         ? ((0U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out))
                             ? 3U : 4U) : ((1U & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__valid_way0)) 
                                                  | (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__valid_way1))))
                                            ? 5U : 
                                           ((((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__victim_sel)) 
                                              & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__dirty_bits_way0__DOT__rfile
                                              [(7U 
                                                & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                                                   >> 6U))]) 
                                             | ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__victim_sel) 
                                                & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__dirty_bits_way1__DOT__rfile
                                                [(7U 
                                                  & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                                                     >> 6U))]))
                                             ? 8U : 5U))));
    }
    if ((0xbU == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacheresp2netmsg_ostream_rdy
            [3U]) {
            if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacheresp2netmsg_ostream_rdy
                [3U]) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0U;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0xbU;
        }
    }
    if ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0xbU;
    }
    if ((3U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0xbU;
    }
    if ((4U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0xbU;
    }
    if ((8U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 9U;
    }
    if ((9U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_rdy
            [3U]) {
            if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_rdy
                [3U]) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0xaU;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 9U;
        }
    }
    if ((0xaU == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet_ostream_val
            [3U]) {
            if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet_ostream_val
                [3U]) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 5U;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0xaU;
        }
    }
    if ((5U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_rdy
            [3U]) {
            if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_rdy
                [3U]) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 6U;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 5U;
        }
    }
    if ((6U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet_ostream_val
            [3U]) {
            if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet_ostream_val
                [3U]) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 7U;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 6U;
        }
    }
    if ((7U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__tag_array_wen_way1 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way1 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way1 = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wen_way1 = 1U;
        }
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__tag_array_wen_way0 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way0 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way0 = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wen_way0 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wen = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wdata = 1U;
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wen = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wdata = 0U;
        }
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__hit_next = 0U;
        if ((0U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 3U;
        } else if ((1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 4U;
        }
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__hit_next 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__hit_out;
    if ((1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__hit_next 
            = ((2U != (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out)) 
               && (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__2));
    }
    if ((0U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__hit_next = 0U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__next_state 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state;
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet_ostream_val
            [2U]) {
            if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet_ostream_val
                [2U]) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 1U;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0U;
        }
    } else {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__next_state 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state;
    }
    if ((1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__next_state 
            = ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out))
                ? 2U : ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__2)
                         ? ((0U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out))
                             ? 3U : 4U) : ((1U & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__valid_way0)) 
                                                  | (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__valid_way1))))
                                            ? 5U : 
                                           ((((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__victim_sel)) 
                                              & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__dirty_bits_way0__DOT__rfile
                                              [(7U 
                                                & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                                                   >> 6U))]) 
                                             | ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__victim_sel) 
                                                & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__dirty_bits_way1__DOT__rfile
                                                [(7U 
                                                  & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                                                     >> 6U))]))
                                             ? 8U : 5U))));
    }
    if ((0xbU == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacheresp2netmsg_ostream_rdy
            [2U]) {
            if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacheresp2netmsg_ostream_rdy
                [2U]) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0U;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0xbU;
        }
    }
    if ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0xbU;
    }
    if ((3U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0xbU;
    }
    if ((4U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0xbU;
    }
    if ((8U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 9U;
    }
    if ((9U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_rdy
            [2U]) {
            if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_rdy
                [2U]) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0xaU;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 9U;
        }
    }
    if ((0xaU == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet_ostream_val
            [2U]) {
            if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet_ostream_val
                [2U]) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 5U;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0xaU;
        }
    }
    if ((5U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_rdy
            [2U]) {
            if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_rdy
                [2U]) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 6U;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 5U;
        }
    }
    if ((6U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet_ostream_val
            [2U]) {
            if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet_ostream_val
                [2U]) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 7U;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 6U;
        }
    }
    if ((7U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__tag_array_wen_way1 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way1 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way1 = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wen_way1 = 1U;
        }
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__tag_array_wen_way0 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way0 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way0 = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wen_way0 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wen = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wdata = 1U;
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wen = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wdata = 0U;
        }
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__hit_next = 0U;
        if ((0U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 3U;
        } else if ((1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 4U;
        }
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__hit_next 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__hit_out;
    if ((1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__hit_next 
            = ((2U != (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out)) 
               && (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__2));
    }
    if ((0U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__hit_next = 0U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__next_state 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state;
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet_ostream_val
            [1U]) {
            if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet_ostream_val
                [1U]) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 1U;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0U;
        }
    } else {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__next_state 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state;
    }
    if ((1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__next_state 
            = ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out))
                ? 2U : ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__2)
                         ? ((0U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out))
                             ? 3U : 4U) : ((1U & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__valid_way0)) 
                                                  | (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__valid_way1))))
                                            ? 5U : 
                                           ((((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__victim_sel)) 
                                              & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__dirty_bits_way0__DOT__rfile
                                              [(7U 
                                                & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                                                   >> 6U))]) 
                                             | ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__victim_sel) 
                                                & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__dirty_bits_way1__DOT__rfile
                                                [(7U 
                                                  & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                                                     >> 6U))]))
                                             ? 8U : 5U))));
    }
    if ((0xbU == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacheresp2netmsg_ostream_rdy
            [1U]) {
            if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacheresp2netmsg_ostream_rdy
                [1U]) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0U;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0xbU;
        }
    }
    if ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0xbU;
    }
    if ((3U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0xbU;
    }
    if ((4U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0xbU;
    }
    if ((8U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 9U;
    }
    if ((9U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_rdy
            [1U]) {
            if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_rdy
                [1U]) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0xaU;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 9U;
        }
    }
    if ((0xaU == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet_ostream_val
            [1U]) {
            if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet_ostream_val
                [1U]) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 5U;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0xaU;
        }
    }
    if ((5U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_rdy
            [1U]) {
            if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_rdy
                [1U]) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 6U;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 5U;
        }
    }
    if ((6U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet_ostream_val
            [1U]) {
            if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet_ostream_val
                [1U]) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 7U;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 6U;
        }
    }
    if ((7U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__tag_array_wen_way1 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way1 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way1 = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wen_way1 = 1U;
        }
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__tag_array_wen_way0 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way0 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way0 = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wen_way0 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wen = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wdata = 1U;
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wen = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wdata = 0U;
        }
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__hit_next = 0U;
        if ((0U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 3U;
        } else if ((1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 4U;
        }
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__hit_next 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__hit_out;
    if ((1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__hit_next 
            = ((2U != (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out)) 
               && (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__2));
    }
    if ((0U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__hit_next = 0U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__next_state 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state;
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet_ostream_val
            [0U]) {
            if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet_ostream_val
                [0U]) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 1U;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0U;
        }
    } else {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__next_state 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state;
    }
    if ((1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__next_state 
            = ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out))
                ? 2U : ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__2)
                         ? ((0U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out))
                             ? 3U : 4U) : ((1U & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__valid_way0)) 
                                                  | (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__valid_way1))))
                                            ? 5U : 
                                           ((((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__victim_sel)) 
                                              & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__dirty_bits_way0__DOT__rfile
                                              [(7U 
                                                & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                                                   >> 6U))]) 
                                             | ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__victim_sel) 
                                                & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__dirty_bits_way1__DOT__rfile
                                                [(7U 
                                                  & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                                                     >> 6U))]))
                                             ? 8U : 5U))));
    }
    if ((0xbU == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacheresp2netmsg_ostream_rdy
            [0U]) {
            if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacheresp2netmsg_ostream_rdy
                [0U]) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0U;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0xbU;
        }
    }
    if ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0xbU;
    }
    if ((3U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0xbU;
    }
    if ((4U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0xbU;
    }
    if ((8U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 9U;
    }
    if ((9U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_rdy
            [0U]) {
            if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_rdy
                [0U]) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0xaU;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 9U;
        }
    }
    if ((0xaU == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet_ostream_val
            [0U]) {
            if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet_ostream_val
                [0U]) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 5U;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 0xaU;
        }
    }
    if ((5U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_rdy
            [0U]) {
            if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreq2netmsg_ostream_rdy
                [0U]) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 6U;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 5U;
        }
    }
    if ((6U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet_ostream_val
            [0U]) {
            if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet_ostream_val
                [0U]) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 7U;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 6U;
        }
    }
    if ((7U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__tag_array_wen_way1 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way1 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way1 = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wen_way1 = 1U;
        }
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__tag_array_wen_way0 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way0 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way0 = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__dirty_wen_way0 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wen = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wdata = 1U;
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wen = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__use_bit_wdata = 0U;
        }
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__hit_next = 0U;
        if ((0U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 3U;
        } else if ((1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__next_state = 4U;
        }
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream0_deq_rdy));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream1_deq_rdy));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream2_deq_rdy));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream0_deq_rdy));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream1_deq_rdy));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream2_deq_rdy));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream0_deq_rdy));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream1_deq_rdy));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream2_deq_rdy));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream0_deq_rdy));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream1_deq_rdy));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream2_deq_rdy));
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0_deq_rdy));
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1_deq_rdy));
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2_deq_rdy));
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0_deq_rdy));
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1_deq_rdy));
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2_deq_rdy));
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0_deq_rdy));
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1_deq_rdy));
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2_deq_rdy));
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0_deq_rdy));
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1_deq_rdy));
    MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2_deq_rdy));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0_deq_rdy));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1_deq_rdy));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2_deq_rdy));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0_deq_rdy));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1_deq_rdy));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2_deq_rdy));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0_deq_rdy));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1_deq_rdy));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2_deq_rdy));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0_deq_rdy));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1_deq_rdy));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2_deq_rdy));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__3__KET____DOT__proc__dmem_reqstream_val 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
           | (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__squash_D 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__val_D) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__osquash_X));
    vlSelf->MultiCoreSys_noparam__DOT____Vcellout__v__mngr2proc_rdy[3U] 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_23) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__mngr2proc_rdy_D));
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__osquash_D 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_23) 
           & (6U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__br_type_D)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__2__KET____DOT__proc__dmem_reqstream_val 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
           | (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__squash_D 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__val_D) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__osquash_X));
    vlSelf->MultiCoreSys_noparam__DOT____Vcellout__v__mngr2proc_rdy[2U] 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_23) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__mngr2proc_rdy_D));
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__osquash_D 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_23) 
           & (6U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__br_type_D)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__1__KET____DOT__proc__dmem_reqstream_val 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
           | (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__squash_D 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__val_D) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__osquash_X));
    vlSelf->MultiCoreSys_noparam__DOT____Vcellout__v__mngr2proc_rdy[1U] 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_23) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__mngr2proc_rdy_D));
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__osquash_D 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_23) 
           & (6U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__br_type_D)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__0__KET____DOT__proc__dmem_reqstream_val 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
           | (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__squash_D 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__val_D) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__osquash_X));
    vlSelf->MultiCoreSys_noparam__DOT____Vcellout__v__mngr2proc_rdy[0U] 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_23) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__mngr2proc_rdy_D));
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__osquash_D 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_23) 
           & (6U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__br_type_D)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereq2netmsg_ostream_rdy
           [3U] & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__3__KET____DOT__proc__dmem_reqstream_val));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereq2netmsg_ostream_val[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__3__KET____DOT__proc__dmem_reqstream_val;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__reg_en_D 
        = (1U & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__stall_D)) 
                 | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__squash_D)));
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__pc_sel_F 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__pc_redirect_X)
            ? (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__pc_sel_X)
            : ((IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__osquash_D)
                ? 2U : 0U));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imul_req_val_D 
        = ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D)) 
           & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__val_D) 
              & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__stall_D)) 
                 & (~ (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__osquash_D)))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__squash_F 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__val_F) 
           & ((IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__osquash_D) 
              | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__osquash_X)));
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereq2netmsg_ostream_rdy
           [2U] & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__2__KET____DOT__proc__dmem_reqstream_val));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereq2netmsg_ostream_val[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__2__KET____DOT__proc__dmem_reqstream_val;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__reg_en_D 
        = (1U & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__stall_D)) 
                 | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__squash_D)));
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__pc_sel_F 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__pc_redirect_X)
            ? (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__pc_sel_X)
            : ((IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__osquash_D)
                ? 2U : 0U));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imul_req_val_D 
        = ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D)) 
           & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__val_D) 
              & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__stall_D)) 
                 & (~ (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__osquash_D)))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__squash_F 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__val_F) 
           & ((IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__osquash_D) 
              | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__osquash_X)));
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereq2netmsg_ostream_rdy
           [1U] & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__1__KET____DOT__proc__dmem_reqstream_val));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereq2netmsg_ostream_val[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__1__KET____DOT__proc__dmem_reqstream_val;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__reg_en_D 
        = (1U & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__stall_D)) 
                 | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__squash_D)));
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__pc_sel_F 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__pc_redirect_X)
            ? (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__pc_sel_X)
            : ((IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__osquash_D)
                ? 2U : 0U));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imul_req_val_D 
        = ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D)) 
           & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__val_D) 
              & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__stall_D)) 
                 & (~ (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__osquash_D)))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__squash_F 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__val_F) 
           & ((IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__osquash_D) 
              | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__osquash_X)));
    vlSelf->dcache_access = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__0__KET____DOT__proc__dmem_reqstream_val) 
                             & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereq2netmsg_ostream_rdy
                             [0U]);
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereq2netmsg_ostream_rdy
           [0U] & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__0__KET____DOT__proc__dmem_reqstream_val));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereq2netmsg_ostream_val[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__0__KET____DOT__proc__dmem_reqstream_val;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__reg_en_D 
        = (1U & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__stall_D)) 
                 | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__squash_D)));
    vlSelf->mngr2proc_rdy[0U] = vlSelf->MultiCoreSys_noparam__DOT____Vcellout__v__mngr2proc_rdy
        [0U];
    vlSelf->mngr2proc_rdy[1U] = vlSelf->MultiCoreSys_noparam__DOT____Vcellout__v__mngr2proc_rdy
        [1U];
    vlSelf->mngr2proc_rdy[2U] = vlSelf->MultiCoreSys_noparam__DOT____Vcellout__v__mngr2proc_rdy
        [2U];
    vlSelf->mngr2proc_rdy[3U] = vlSelf->MultiCoreSys_noparam__DOT____Vcellout__v__mngr2proc_rdy
        [3U];
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__pc_sel_F 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__pc_redirect_X)
            ? (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__pc_sel_X)
            : ((IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__osquash_D)
                ? 2U : 0U));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imul_req_val_D 
        = ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D)) 
           & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__val_D) 
              & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__stall_D)) 
                 & (~ (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__osquash_D)))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__squash_F 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__val_F) 
           & ((IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__osquash_D) 
              | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__osquash_X)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__write_en 
        = ((~ ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
               & ((IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
                  & (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)))) 
           & (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__pc_next_F 
        = ((2U & (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__pc_sel_F))
            ? ((1U & (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__pc_sel_F))
                ? (0xfffffffeU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__alu_result_X)
                : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__jal_target_D)
            : ((1U & (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__pc_sel_F))
                ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__br_target_X
                : ((IData)(4U) + vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__pc_F)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__b_mux_sel = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__a_mux_sel = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__result_mux_sel = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__result_en = 0U;
    if ((0U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__b_mux_sel 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imul_req_val_D;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__a_mux_sel 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imul_req_val_D;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__result_mux_sel 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imul_req_val_D;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__result_en 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imul_req_val_D;
    } else if ((1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__b_mux_sel = 0U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__a_mux_sel = 0U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__result_mux_sel = 0U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__result_en = 1U;
    } else if ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__result_en = 0U;
    }
    __Vtableidx12 = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imul_resp_rdy_X) 
                      << 5U) | (((0U == vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_mux_in0) 
                                 << 4U) | (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imul_req_rdy_D) 
                                            << 3U) 
                                           | (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imul_req_val_D) 
                                               << 2U) 
                                              | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state)))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__next_state 
        = VMultiCoreSys_noparam__ConstPool__TABLE_h8b2b421b_0
        [__Vtableidx12];
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_respstream_drop_val 
        = ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_respstream_drop_unit__DOT__state))) 
           && ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__3__KET____DOT__icache__proc2cache_respstream_val) 
               & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__squash_F))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__write_en 
        = ((~ ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
               & ((IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
                  & (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)))) 
           & (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__pc_next_F 
        = ((2U & (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__pc_sel_F))
            ? ((1U & (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__pc_sel_F))
                ? (0xfffffffeU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__alu_result_X)
                : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__jal_target_D)
            : ((1U & (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__pc_sel_F))
                ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__br_target_X
                : ((IData)(4U) + vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__pc_F)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__b_mux_sel = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__a_mux_sel = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__result_mux_sel = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__result_en = 0U;
    if ((0U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__b_mux_sel 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imul_req_val_D;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__a_mux_sel 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imul_req_val_D;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__result_mux_sel 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imul_req_val_D;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__result_en 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imul_req_val_D;
    } else if ((1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__b_mux_sel = 0U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__a_mux_sel = 0U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__result_mux_sel = 0U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__result_en = 1U;
    } else if ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__result_en = 0U;
    }
    __Vtableidx9 = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imul_resp_rdy_X) 
                     << 5U) | (((0U == vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_mux_in0) 
                                << 4U) | (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imul_req_rdy_D) 
                                           << 3U) | 
                                          (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imul_req_val_D) 
                                            << 2U) 
                                           | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state)))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__next_state 
        = VMultiCoreSys_noparam__ConstPool__TABLE_h8b2b421b_0
        [__Vtableidx9];
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_respstream_drop_val 
        = ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_respstream_drop_unit__DOT__state))) 
           && ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__2__KET____DOT__icache__proc2cache_respstream_val) 
               & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__squash_F))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__write_en 
        = ((~ ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
               & ((IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
                  & (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)))) 
           & (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__pc_next_F 
        = ((2U & (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__pc_sel_F))
            ? ((1U & (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__pc_sel_F))
                ? (0xfffffffeU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__alu_result_X)
                : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__jal_target_D)
            : ((1U & (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__pc_sel_F))
                ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__br_target_X
                : ((IData)(4U) + vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__pc_F)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__b_mux_sel = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__a_mux_sel = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__result_mux_sel = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__result_en = 0U;
    if ((0U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__b_mux_sel 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imul_req_val_D;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__a_mux_sel 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imul_req_val_D;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__result_mux_sel 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imul_req_val_D;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__result_en 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imul_req_val_D;
    } else if ((1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__b_mux_sel = 0U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__a_mux_sel = 0U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__result_mux_sel = 0U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__result_en = 1U;
    } else if ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__result_en = 0U;
    }
    __Vtableidx6 = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imul_resp_rdy_X) 
                     << 5U) | (((0U == vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_mux_in0) 
                                << 4U) | (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imul_req_rdy_D) 
                                           << 3U) | 
                                          (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imul_req_val_D) 
                                            << 2U) 
                                           | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state)))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__next_state 
        = VMultiCoreSys_noparam__ConstPool__TABLE_h8b2b421b_0
        [__Vtableidx6];
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_respstream_drop_val 
        = ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_respstream_drop_unit__DOT__state))) 
           && ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__1__KET____DOT__icache__proc2cache_respstream_val) 
               & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__squash_F))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__write_en 
        = ((~ ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
               & ((IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
                  & (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)))) 
           & (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router0__istream_val[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereq2netmsg_ostream_val
        [0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router1__istream_val[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereq2netmsg_ostream_val
        [1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router2__istream_val[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereq2netmsg_ostream_val
        [2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router3__istream_val[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereq2netmsg_ostream_val
        [3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__pc_next_F 
        = ((2U & (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__pc_sel_F))
            ? ((1U & (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__pc_sel_F))
                ? (0xfffffffeU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__alu_result_X)
                : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__jal_target_D)
            : ((1U & (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__pc_sel_F))
                ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__br_target_X
                : ((IData)(4U) + vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__pc_F)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__b_mux_sel = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__a_mux_sel = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__result_mux_sel = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__result_en = 0U;
    if ((0U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__b_mux_sel 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imul_req_val_D;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__a_mux_sel 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imul_req_val_D;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__result_mux_sel 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imul_req_val_D;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__result_en 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imul_req_val_D;
    } else if ((1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__b_mux_sel = 0U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__a_mux_sel = 0U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__result_mux_sel = 0U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__result_en = 1U;
    } else if ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__result_en = 0U;
    }
    __Vtableidx3 = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imul_resp_rdy_X) 
                     << 5U) | (((0U == vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_mux_in0) 
                                << 4U) | (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imul_req_rdy_D) 
                                           << 3U) | 
                                          (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imul_req_val_D) 
                                            << 2U) 
                                           | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state)))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__next_state 
        = VMultiCoreSys_noparam__ConstPool__TABLE_h8b2b421b_0
        [__Vtableidx3];
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_respstream_drop_val 
        = ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_respstream_drop_unit__DOT__state))) 
           && ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__0__KET____DOT__icache__proc2cache_respstream_val) 
               & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__squash_F))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__write_en) 
              | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT____Vcellout__imem_queue__deq_msg[0U] = 0U;
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT____Vcellout__imem_queue__deq_msg[1U] 
                = (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__pc_next_F 
                   << 2U);
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT____Vcellout__imem_queue__deq_msg[2U] 
                = (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__pc_next_F 
                   >> 0x1eU);
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT____Vcellout__imem_queue__deq_msg[1U] = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT____Vcellout__imem_queue__deq_msg[2U] = 0U;
        }
    } else {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT____Vcellout__imem_queue__deq_msg[0U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
            [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT____Vcellout__imem_queue__deq_msg[1U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
            [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT____Vcellout__imem_queue__deq_msg[2U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
            [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__stall_F 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__val_F) 
           & (((~ (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_respstream_drop_val)) 
               & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__val_F)) 
              | (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_19)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__write_en) 
              | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT____Vcellout__imem_queue__deq_msg[0U] = 0U;
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT____Vcellout__imem_queue__deq_msg[1U] 
                = (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__pc_next_F 
                   << 2U);
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT____Vcellout__imem_queue__deq_msg[2U] 
                = (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__pc_next_F 
                   >> 0x1eU);
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT____Vcellout__imem_queue__deq_msg[1U] = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT____Vcellout__imem_queue__deq_msg[2U] = 0U;
        }
    } else {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT____Vcellout__imem_queue__deq_msg[0U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
            [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT____Vcellout__imem_queue__deq_msg[1U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
            [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT____Vcellout__imem_queue__deq_msg[2U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
            [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__stall_F 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__val_F) 
           & (((~ (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_respstream_drop_val)) 
               & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__val_F)) 
              | (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_19)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__write_en) 
              | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT____Vcellout__imem_queue__deq_msg[0U] = 0U;
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT____Vcellout__imem_queue__deq_msg[1U] 
                = (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__pc_next_F 
                   << 2U);
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT____Vcellout__imem_queue__deq_msg[2U] 
                = (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__pc_next_F 
                   >> 0x1eU);
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT____Vcellout__imem_queue__deq_msg[1U] = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT____Vcellout__imem_queue__deq_msg[2U] = 0U;
        }
    } else {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT____Vcellout__imem_queue__deq_msg[0U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
            [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT____Vcellout__imem_queue__deq_msg[1U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
            [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT____Vcellout__imem_queue__deq_msg[2U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
            [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__stall_F 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__val_F) 
           & (((~ (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_respstream_drop_val)) 
               & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__val_F)) 
              | (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_19)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__write_en) 
              | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router0__istream_val
           [0U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router0__istream_val
           [1U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router0__istream_val
           [2U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router1__istream_val
           [0U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router1__istream_val
           [1U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router1__istream_val
           [2U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router2__istream_val
           [0U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router2__istream_val
           [1U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router2__istream_val
           [2U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router3__istream_val
           [0U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router3__istream_val
           [1U]);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT____Vcellinp__router3__istream_val
           [2U]);
    if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT____Vcellout__imem_queue__deq_msg[0U] = 0U;
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT____Vcellout__imem_queue__deq_msg[1U] 
                = (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__pc_next_F 
                   << 2U);
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT____Vcellout__imem_queue__deq_msg[2U] 
                = (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__pc_next_F 
                   >> 0x1eU);
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT____Vcellout__imem_queue__deq_msg[1U] = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT____Vcellout__imem_queue__deq_msg[2U] = 0U;
        }
    } else {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT____Vcellout__imem_queue__deq_msg[0U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
            [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT____Vcellout__imem_queue__deq_msg[1U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
            [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT____Vcellout__imem_queue__deq_msg[2U] 
            = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
            [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__stall_F 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__val_F) 
           & (((~ (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_respstream_drop_val)) 
               & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__val_F)) 
              | (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_19)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_respstream_drop_rdy 
        = (1U & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__stall_F)) 
                 | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__squash_F)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_respstream_drop_rdy 
        = (1U & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__stall_F)) 
                 | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__squash_F)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_respstream_drop_rdy 
        = (1U & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__stall_F)) 
                 | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__squash_F)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (3U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                 + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__write_en) 
            & ((~ (IData)(MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((3U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_respstream_drop_rdy 
        = (1U & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__stall_F)) 
                 | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__squash_F)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__3__KET____DOT__proc__imem_respstream_rdy 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_respstream_drop_unit__DOT__state) 
           || (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_respstream_drop_rdy));
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_reqstream_enq_val 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_respstream_drop_rdy));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__2__KET____DOT__proc__imem_respstream_rdy 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_respstream_drop_unit__DOT__state) 
           || (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_respstream_drop_rdy));
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_reqstream_enq_val 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_respstream_drop_rdy));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__1__KET____DOT__proc__imem_respstream_rdy 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_respstream_drop_unit__DOT__state) 
           || (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_respstream_drop_rdy));
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_reqstream_enq_val 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_respstream_drop_rdy));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__0__KET____DOT__proc__imem_respstream_rdy 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_respstream_drop_unit__DOT__state) 
           || (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_respstream_drop_rdy));
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_reqstream_enq_val 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_respstream_drop_rdy));
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_respstream_drop_unit__DOT____VdfgExtracted_hff9b16a6__0 
        = (1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__3__KET____DOT__icache__proc2cache_respstream_val) 
                    & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__3__KET____DOT__proc__imem_respstream_rdy))));
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_reqstream_enq_val));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__3__KET____DOT__proc__imem_reqstream_val 
        = (1U & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel)) 
                 | ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel) 
                    & (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_reqstream_enq_val))));
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_respstream_drop_unit__DOT____VdfgExtracted_hff9b16a6__0 
        = (1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__2__KET____DOT__icache__proc2cache_respstream_val) 
                    & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__2__KET____DOT__proc__imem_respstream_rdy))));
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_reqstream_enq_val));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__2__KET____DOT__proc__imem_reqstream_val 
        = (1U & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel)) 
                 | ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel) 
                    & (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_reqstream_enq_val))));
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_respstream_drop_unit__DOT____VdfgExtracted_hff9b16a6__0 
        = (1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__1__KET____DOT__icache__proc2cache_respstream_val) 
                    & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__1__KET____DOT__proc__imem_respstream_rdy))));
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_reqstream_enq_val));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__1__KET____DOT__proc__imem_reqstream_val 
        = (1U & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel)) 
                 | ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel) 
                    & (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_reqstream_enq_val))));
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_respstream_drop_unit__DOT____VdfgExtracted_hff9b16a6__0 
        = (1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__0__KET____DOT__icache__proc2cache_respstream_val) 
                    & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__0__KET____DOT__proc__imem_respstream_rdy))));
    vlSelf->icache_miss = ((((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__3__KET____DOT__icache__proc2cache_respstream_val) 
                             & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__hit_out)) 
                                & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__3__KET____DOT__proc__imem_respstream_rdy))) 
                            << 3U) | ((((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__2__KET____DOT__icache__proc2cache_respstream_val) 
                                        & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__hit_out)) 
                                           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__2__KET____DOT__proc__imem_respstream_rdy))) 
                                       << 2U) | ((((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__1__KET____DOT__icache__proc2cache_respstream_val) 
                                                   & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__hit_out)) 
                                                      & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__1__KET____DOT__proc__imem_respstream_rdy))) 
                                                  << 1U) 
                                                 | ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__0__KET____DOT__icache__proc2cache_respstream_val) 
                                                    & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__hit_out)) 
                                                       & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__0__KET____DOT__proc__imem_respstream_rdy))))));
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_reqstream_enq_val));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__0__KET____DOT__proc__imem_reqstream_val 
        = (1U & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel)) 
                 | ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel) 
                    & (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_reqstream_enq_val))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_respstream_drop_unit__DOT__next_state 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_respstream_drop_unit__DOT__state)
            ? (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_respstream_drop_unit__DOT____VdfgExtracted_hff9b16a6__0)
            : ((IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_respstream_drop_unit__DOT____VdfgExtracted_hff9b16a6__0) 
               & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__squash_F)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__next_state 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state;
    if ((0U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__3__KET____DOT__proc__imem_reqstream_val) {
            if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__3__KET____DOT__proc__imem_reqstream_val) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__next_state = 1U;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__next_state = 0U;
        }
    }
    if ((1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__next_state 
            = ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__cachereq_type_reg_out))
                ? 2U : ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__0)
                         ? ((0U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__cachereq_type_reg_out))
                             ? 3U : 4U) : ((1U & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__valid_way0)) 
                                                  | (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__valid_way1))))
                                            ? 5U : 
                                           ((((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__victim_sel)) 
                                              & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__dirty_bits_way0__DOT__rfile
                                              [(7U 
                                                & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out 
                                                   >> 4U))]) 
                                             | ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__victim_sel) 
                                                & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__dirty_bits_way1__DOT__rfile
                                                [(7U 
                                                  & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out 
                                                     >> 4U))]))
                                             ? 8U : 5U))));
    }
    if ((0xbU == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__3__KET____DOT__proc__imem_respstream_rdy) {
            if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__3__KET____DOT__proc__imem_respstream_rdy) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__next_state = 0U;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__next_state = 0xbU;
        }
    }
    if ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__next_state = 0xbU;
    }
    if ((3U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__next_state = 0xbU;
    }
    if ((4U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__next_state = 0xbU;
    }
    if ((8U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__next_state = 9U;
    }
    if ((9U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_rdy
            [3U]) {
            if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_rdy
                [3U]) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__next_state = 0xaU;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__next_state = 9U;
        }
    }
    if ((0xaU == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet_ostream_val
            [3U]) {
            if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet_ostream_val
                [3U]) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__next_state = 5U;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__next_state = 0xaU;
        }
    }
    if ((5U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_rdy
            [3U]) {
            if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_rdy
                [3U]) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__next_state = 6U;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__next_state = 5U;
        }
    }
    if ((6U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet_ostream_val
            [3U]) {
            if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet_ostream_val
                [3U]) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__next_state = 7U;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__next_state = 6U;
        }
    }
    if ((7U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__way_sel_reg_out) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__tag_array_wen_way1 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way1 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__dirty_wdata_way1 = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__dirty_wen_way1 = 1U;
        }
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__tag_array_wen_way0 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way0 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__dirty_wdata_way0 = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__dirty_wen_way0 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__use_bit_wen = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__use_bit_wdata = 1U;
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__use_bit_wen = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__use_bit_wdata = 0U;
        }
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__hit_next = 0U;
        if ((0U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__cachereq_type_reg_out))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__next_state = 3U;
        } else if ((1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__cachereq_type_reg_out))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__next_state = 4U;
        }
    }
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__3__KET____DOT__icache__proc2cache_reqstream_rdy) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__3__KET____DOT__proc__imem_reqstream_val));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_respstream_drop_unit__DOT__next_state 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_respstream_drop_unit__DOT__state)
            ? (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_respstream_drop_unit__DOT____VdfgExtracted_hff9b16a6__0)
            : ((IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_respstream_drop_unit__DOT____VdfgExtracted_hff9b16a6__0) 
               & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__squash_F)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__next_state 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state;
    if ((0U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__2__KET____DOT__proc__imem_reqstream_val) {
            if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__2__KET____DOT__proc__imem_reqstream_val) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__next_state = 1U;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__next_state = 0U;
        }
    }
    if ((1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__next_state 
            = ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__cachereq_type_reg_out))
                ? 2U : ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__0)
                         ? ((0U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__cachereq_type_reg_out))
                             ? 3U : 4U) : ((1U & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__valid_way0)) 
                                                  | (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__valid_way1))))
                                            ? 5U : 
                                           ((((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__victim_sel)) 
                                              & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__dirty_bits_way0__DOT__rfile
                                              [(7U 
                                                & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out 
                                                   >> 4U))]) 
                                             | ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__victim_sel) 
                                                & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__dirty_bits_way1__DOT__rfile
                                                [(7U 
                                                  & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out 
                                                     >> 4U))]))
                                             ? 8U : 5U))));
    }
    if ((0xbU == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__2__KET____DOT__proc__imem_respstream_rdy) {
            if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__2__KET____DOT__proc__imem_respstream_rdy) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__next_state = 0U;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__next_state = 0xbU;
        }
    }
    if ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__next_state = 0xbU;
    }
    if ((3U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__next_state = 0xbU;
    }
    if ((4U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__next_state = 0xbU;
    }
    if ((8U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__next_state = 9U;
    }
    if ((9U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_rdy
            [2U]) {
            if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_rdy
                [2U]) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__next_state = 0xaU;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__next_state = 9U;
        }
    }
    if ((0xaU == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet_ostream_val
            [2U]) {
            if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet_ostream_val
                [2U]) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__next_state = 5U;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__next_state = 0xaU;
        }
    }
    if ((5U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_rdy
            [2U]) {
            if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_rdy
                [2U]) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__next_state = 6U;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__next_state = 5U;
        }
    }
    if ((6U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet_ostream_val
            [2U]) {
            if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet_ostream_val
                [2U]) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__next_state = 7U;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__next_state = 6U;
        }
    }
    if ((7U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__way_sel_reg_out) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__tag_array_wen_way1 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way1 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__dirty_wdata_way1 = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__dirty_wen_way1 = 1U;
        }
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__tag_array_wen_way0 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way0 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__dirty_wdata_way0 = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__dirty_wen_way0 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__use_bit_wen = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__use_bit_wdata = 1U;
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__use_bit_wen = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__use_bit_wdata = 0U;
        }
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__hit_next = 0U;
        if ((0U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__cachereq_type_reg_out))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__next_state = 3U;
        } else if ((1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__cachereq_type_reg_out))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__next_state = 4U;
        }
    }
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__2__KET____DOT__icache__proc2cache_reqstream_rdy) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__2__KET____DOT__proc__imem_reqstream_val));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_respstream_drop_unit__DOT__next_state 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_respstream_drop_unit__DOT__state)
            ? (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_respstream_drop_unit__DOT____VdfgExtracted_hff9b16a6__0)
            : ((IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_respstream_drop_unit__DOT____VdfgExtracted_hff9b16a6__0) 
               & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__squash_F)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__next_state 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state;
    if ((0U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__1__KET____DOT__proc__imem_reqstream_val) {
            if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__1__KET____DOT__proc__imem_reqstream_val) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__next_state = 1U;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__next_state = 0U;
        }
    }
    if ((1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__next_state 
            = ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__cachereq_type_reg_out))
                ? 2U : ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__0)
                         ? ((0U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__cachereq_type_reg_out))
                             ? 3U : 4U) : ((1U & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__valid_way0)) 
                                                  | (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__valid_way1))))
                                            ? 5U : 
                                           ((((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__victim_sel)) 
                                              & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__dirty_bits_way0__DOT__rfile
                                              [(7U 
                                                & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out 
                                                   >> 4U))]) 
                                             | ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__victim_sel) 
                                                & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__dirty_bits_way1__DOT__rfile
                                                [(7U 
                                                  & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out 
                                                     >> 4U))]))
                                             ? 8U : 5U))));
    }
    if ((0xbU == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__1__KET____DOT__proc__imem_respstream_rdy) {
            if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__1__KET____DOT__proc__imem_respstream_rdy) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__next_state = 0U;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__next_state = 0xbU;
        }
    }
    if ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__next_state = 0xbU;
    }
    if ((3U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__next_state = 0xbU;
    }
    if ((4U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__next_state = 0xbU;
    }
    if ((8U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__next_state = 9U;
    }
    if ((9U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_rdy
            [1U]) {
            if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_rdy
                [1U]) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__next_state = 0xaU;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__next_state = 9U;
        }
    }
    if ((0xaU == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet_ostream_val
            [1U]) {
            if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet_ostream_val
                [1U]) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__next_state = 5U;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__next_state = 0xaU;
        }
    }
    if ((5U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_rdy
            [1U]) {
            if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_rdy
                [1U]) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__next_state = 6U;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__next_state = 5U;
        }
    }
    if ((6U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet_ostream_val
            [1U]) {
            if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet_ostream_val
                [1U]) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__next_state = 7U;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__next_state = 6U;
        }
    }
    if ((7U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__way_sel_reg_out) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__tag_array_wen_way1 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way1 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__dirty_wdata_way1 = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__dirty_wen_way1 = 1U;
        }
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__tag_array_wen_way0 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way0 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__dirty_wdata_way0 = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__dirty_wen_way0 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__use_bit_wen = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__use_bit_wdata = 1U;
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__use_bit_wen = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__use_bit_wdata = 0U;
        }
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__hit_next = 0U;
        if ((0U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__cachereq_type_reg_out))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__next_state = 3U;
        } else if ((1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__cachereq_type_reg_out))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__next_state = 4U;
        }
    }
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__1__KET____DOT__icache__proc2cache_reqstream_rdy) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__1__KET____DOT__proc__imem_reqstream_val));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_respstream_drop_unit__DOT__next_state 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_respstream_drop_unit__DOT__state)
            ? (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_respstream_drop_unit__DOT____VdfgExtracted_hff9b16a6__0)
            : ((IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_respstream_drop_unit__DOT____VdfgExtracted_hff9b16a6__0) 
               & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__squash_F)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__next_state 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state;
    if ((0U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__0__KET____DOT__proc__imem_reqstream_val) {
            if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__0__KET____DOT__proc__imem_reqstream_val) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__next_state = 1U;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__next_state = 0U;
        }
    }
    if ((1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__next_state 
            = ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__cachereq_type_reg_out))
                ? 2U : ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__0)
                         ? ((0U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__cachereq_type_reg_out))
                             ? 3U : 4U) : ((1U & ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__valid_way0)) 
                                                  | (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__valid_way1))))
                                            ? 5U : 
                                           ((((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__victim_sel)) 
                                              & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__dirty_bits_way0__DOT__rfile
                                              [(7U 
                                                & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out 
                                                   >> 4U))]) 
                                             | ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__victim_sel) 
                                                & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__dirty_bits_way1__DOT__rfile
                                                [(7U 
                                                  & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out 
                                                     >> 4U))]))
                                             ? 8U : 5U))));
    }
    if ((0xbU == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__0__KET____DOT__proc__imem_respstream_rdy) {
            if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__0__KET____DOT__proc__imem_respstream_rdy) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__next_state = 0U;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__next_state = 0xbU;
        }
    }
    if ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__next_state = 0xbU;
    }
    if ((3U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__next_state = 0xbU;
    }
    if ((4U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__next_state = 0xbU;
    }
    if ((8U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__next_state = 9U;
    }
    if ((9U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_rdy
            [0U]) {
            if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_rdy
                [0U]) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__next_state = 0xaU;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__next_state = 9U;
        }
    }
    if ((0xaU == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet_ostream_val
            [0U]) {
            if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet_ostream_val
                [0U]) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__next_state = 5U;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__next_state = 0xaU;
        }
    }
    if ((5U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_rdy
            [0U]) {
            if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreq2netmsg_ostream_rdy
                [0U]) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__next_state = 6U;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__next_state = 5U;
        }
    }
    if ((6U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet_ostream_val
            [0U]) {
            if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet_ostream_val
                [0U]) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__next_state = 7U;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__next_state = 6U;
        }
    }
    if ((7U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__way_sel_reg_out) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__tag_array_wen_way1 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way1 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__dirty_wdata_way1 = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__dirty_wen_way1 = 1U;
        }
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__tag_array_wen_way0 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way0 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__dirty_wdata_way0 = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__dirty_wen_way0 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__use_bit_wen = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__use_bit_wdata = 1U;
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__use_bit_wen = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__use_bit_wdata = 0U;
        }
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__hit_next = 0U;
        if ((0U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__cachereq_type_reg_out))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__next_state = 3U;
        } else if ((1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__cachereq_type_reg_out))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__next_state = 4U;
        }
    }
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__0__KET____DOT__icache__proc2cache_reqstream_rdy) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__PROC__BRA__0__KET____DOT__proc__imem_reqstream_val));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
            & ((~ (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((1U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____VdfgRegularize_h1851b5ac_0_0 
        = (1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel) 
                    & ((IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
                       & (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
            & ((~ (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((1U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____VdfgRegularize_h1851b5ac_0_0 
        = (1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel) 
                    & ((IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
                       & (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
            & ((~ (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((1U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____VdfgRegularize_h1851b5ac_0_0 
        = (1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel) 
                    & ((IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
                       & (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)))));
    vlSelf->icache_access = (((IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                              << 3U) | (((IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                                         << 2U) | (
                                                   ((IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                                                    << 1U) 
                                                   | (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
            & ((~ (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((1U & ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____VdfgRegularize_h1851b5ac_0_0 
        = (1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel) 
                    & ((IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
                       & (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (1U & (((IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____VdfgRegularize_h1851b5ac_0_0) 
                  & (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq))
                  ? ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                  : (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__write_en 
        = ((IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____VdfgRegularize_h1851b5ac_0_0) 
           & (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (1U & (((IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____VdfgRegularize_h1851b5ac_0_0) 
                  & (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq))
                  ? ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                  : (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__write_en 
        = ((IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____VdfgRegularize_h1851b5ac_0_0) 
           & (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (1U & (((IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____VdfgRegularize_h1851b5ac_0_0) 
                  & (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq))
                  ? ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                  : (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__write_en 
        = ((IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____VdfgRegularize_h1851b5ac_0_0) 
           & (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (1U & (((IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____VdfgRegularize_h1851b5ac_0_0) 
                  & (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq))
                  ? ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                  : (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__write_en 
        = ((IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____VdfgRegularize_h1851b5ac_0_0) 
           & (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__write_en)
                  ? ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                  : (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__write_en)
                  ? ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                  : (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__write_en)
                  ? ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                  : (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__write_en)
                  ? ((IData)(1U) + (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                  : (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
}

void VMultiCoreSys_noparam___024root___eval_triggers__act(VMultiCoreSys_noparam___024root* vlSelf);
void VMultiCoreSys_noparam___024root___eval_act(VMultiCoreSys_noparam___024root* vlSelf);

bool VMultiCoreSys_noparam___024root___eval_phase__act(VMultiCoreSys_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMultiCoreSys_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VMultiCoreSys_noparam___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VMultiCoreSys_noparam___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void VMultiCoreSys_noparam___024root___eval_nba(VMultiCoreSys_noparam___024root* vlSelf);

bool VMultiCoreSys_noparam___024root___eval_phase__nba(VMultiCoreSys_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMultiCoreSys_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VMultiCoreSys_noparam___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMultiCoreSys_noparam___024root___dump_triggers__ico(VMultiCoreSys_noparam___024root* vlSelf);
#endif  // VL_DEBUG
bool VMultiCoreSys_noparam___024root___eval_phase__ico(VMultiCoreSys_noparam___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VMultiCoreSys_noparam___024root___dump_triggers__nba(VMultiCoreSys_noparam___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VMultiCoreSys_noparam___024root___dump_triggers__act(VMultiCoreSys_noparam___024root* vlSelf);
#endif  // VL_DEBUG

void VMultiCoreSys_noparam___024root___eval(VMultiCoreSys_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMultiCoreSys_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root___eval\n"); );
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
            VMultiCoreSys_noparam___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("lab4_sys/MultiCoreSys.v", 308, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VMultiCoreSys_noparam___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VMultiCoreSys_noparam___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("lab4_sys/MultiCoreSys.v", 308, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VMultiCoreSys_noparam___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("lab4_sys/MultiCoreSys.v", 308, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VMultiCoreSys_noparam___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VMultiCoreSys_noparam___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VMultiCoreSys_noparam___024root___eval_debug_assertions(VMultiCoreSys_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMultiCoreSys_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->dmem_reqstream_rdy & 0xfeU))) {
        Verilated::overWidthError("dmem_reqstream_rdy");}
    if (VL_UNLIKELY((vlSelf->dmem_respstream_msg[4U] 
                     & 0xfffc0000U))) {
        Verilated::overWidthError("dmem_respstream_msg");}
    if (VL_UNLIKELY((vlSelf->dmem_respstream_val & 0xfeU))) {
        Verilated::overWidthError("dmem_respstream_val");}
    if (VL_UNLIKELY((vlSelf->imem_reqstream_rdy & 0xfeU))) {
        Verilated::overWidthError("imem_reqstream_rdy");}
    if (VL_UNLIKELY((vlSelf->imem_respstream_msg[4U] 
                     & 0xfffc0000U))) {
        Verilated::overWidthError("imem_respstream_msg");}
    if (VL_UNLIKELY((vlSelf->imem_respstream_val & 0xfeU))) {
        Verilated::overWidthError("imem_respstream_val");}
}
#endif  // VL_DEBUG
