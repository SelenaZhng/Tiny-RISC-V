// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSingleCoreSys_noparam.h for the primary calling header

#include "VSingleCoreSys_noparam__pch.h"
#include "VSingleCoreSys_noparam___024root.h"

VL_ATTR_COLD void VSingleCoreSys_noparam___024root___eval_static(VSingleCoreSys_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSingleCoreSys_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCoreSys_noparam___024root___eval_static\n"); );
}

VL_ATTR_COLD void VSingleCoreSys_noparam___024root___eval_initial__TOP(VSingleCoreSys_noparam___024root* vlSelf);

VL_ATTR_COLD void VSingleCoreSys_noparam___024root___eval_initial(VSingleCoreSys_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSingleCoreSys_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCoreSys_noparam___024root___eval_initial\n"); );
    // Body
    VSingleCoreSys_noparam___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
}

VL_ATTR_COLD void VSingleCoreSys_noparam___024root___eval_initial__TOP(VSingleCoreSys_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSingleCoreSys_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCoreSys_noparam___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__read_data_zero_mux_sel = 0U;
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__read_data_zero_mux_sel = 0U;
}

VL_ATTR_COLD void VSingleCoreSys_noparam___024root___eval_final(VSingleCoreSys_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSingleCoreSys_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCoreSys_noparam___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCoreSys_noparam___024root___dump_triggers__stl(VSingleCoreSys_noparam___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VSingleCoreSys_noparam___024root___eval_phase__stl(VSingleCoreSys_noparam___024root* vlSelf);

VL_ATTR_COLD void VSingleCoreSys_noparam___024root___eval_settle(VSingleCoreSys_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSingleCoreSys_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCoreSys_noparam___024root___eval_settle\n"); );
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
            VSingleCoreSys_noparam___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("lab4_sys/SingleCoreSys.v", 209, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VSingleCoreSys_noparam___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCoreSys_noparam___024root___dump_triggers__stl(VSingleCoreSys_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSingleCoreSys_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCoreSys_noparam___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VSingleCoreSys_noparam___024root___stl_sequent__TOP__0(VSingleCoreSys_noparam___024root* vlSelf);

VL_ATTR_COLD void VSingleCoreSys_noparam___024root___eval_stl(VSingleCoreSys_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSingleCoreSys_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCoreSys_noparam___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VSingleCoreSys_noparam___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VSingleCoreSys_noparam___024root___eval_triggers__stl(VSingleCoreSys_noparam___024root* vlSelf);

VL_ATTR_COLD bool VSingleCoreSys_noparam___024root___eval_phase__stl(VSingleCoreSys_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSingleCoreSys_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCoreSys_noparam___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VSingleCoreSys_noparam___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VSingleCoreSys_noparam___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCoreSys_noparam___024root___dump_triggers__ico(VSingleCoreSys_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSingleCoreSys_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCoreSys_noparam___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void VSingleCoreSys_noparam___024root___dump_triggers__act(VSingleCoreSys_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSingleCoreSys_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCoreSys_noparam___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void VSingleCoreSys_noparam___024root___dump_triggers__nba(VSingleCoreSys_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSingleCoreSys_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCoreSys_noparam___024root___dump_triggers__nba\n"); );
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

VL_ATTR_COLD void VSingleCoreSys_noparam___024root___ctor_var_reset(VSingleCoreSys_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSingleCoreSys_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCoreSys_noparam___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->commit_inst = VL_RAND_RESET_I(1);
    vlSelf->dcache_access = VL_RAND_RESET_I(1);
    vlSelf->dcache_miss = VL_RAND_RESET_I(1);
    vlSelf->icache_access = VL_RAND_RESET_I(1);
    vlSelf->icache_miss = VL_RAND_RESET_I(1);
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
    vlSelf->mngr2proc_msg = VL_RAND_RESET_I(32);
    vlSelf->mngr2proc_rdy = VL_RAND_RESET_I(1);
    vlSelf->mngr2proc_val = VL_RAND_RESET_I(1);
    vlSelf->proc2mngr_msg = VL_RAND_RESET_I(32);
    vlSelf->proc2mngr_rdy = VL_RAND_RESET_I(1);
    vlSelf->proc2mngr_val = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache_reqstream_val = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache_reqstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache_respstream_val = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache_respstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache_reqstream_val = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache_reqstream_rdy = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache_respstream_val = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache_respstream_rdy = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(78, vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT____Vcellout__imem_queue__deq_msg);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_drop_rdy = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(78, vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_enq_msg);
    VL_RAND_RESET_W(78, vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT____Vcellout__dmem_queue__deq_msg);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__reg_en_D = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__op2_sel_D = VL_RAND_RESET_I(2);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__csrr_sel_D = VL_RAND_RESET_I(2);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ex_result_sel_X = VL_RAND_RESET_I(2);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__alu_fn_X = VL_RAND_RESET_I(4);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__wb_result_sel_M = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__rf_waddr_W = VL_RAND_RESET_I(5);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__rf_wen_W = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imul_req_rdy_D = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imul_req_val_D = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imul_resp_rdy_X = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imul_resp_val_X = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(4096, vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__str);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(78, vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile[__Vi0]);
    }
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_drop_unit__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_drop_unit__DOT__next_state = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(78, vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__val_F = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__val_D = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__val_X = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__val_M = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__val_W = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__ostall_W = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__stall_F = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__stall_D = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__stall_X = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__stall_M = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__stall_W = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__osquash_X = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__squash_F = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__squash_D = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__pc_redirect_X = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__pc_sel_X = VL_RAND_RESET_I(2);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__br_type_D = VL_RAND_RESET_I(3);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__rs1_en_D = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__rs2_en_D = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__alu_fn_D = VL_RAND_RESET_I(4);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__dmem_type_D = VL_RAND_RESET_I(2);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__wb_result_sel_D = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__rf_wen_D = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__proc2mngr_val_D = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__mngr2proc_rdy_D = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__stats_en_wen_D = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = VL_RAND_RESET_I(2);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__inst_X = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__dmem_type_X = VL_RAND_RESET_I(2);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__wb_result_sel_X = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__rf_wen_X = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__rf_waddr_X = VL_RAND_RESET_I(5);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__proc2mngr_val_X = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__stats_en_wen_X = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__br_type_X = VL_RAND_RESET_I(3);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__next_val_X = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__inst_M = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__dmem_type_M = VL_RAND_RESET_I(2);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__rf_wen_M = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__rf_waddr_M = VL_RAND_RESET_I(5);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__proc2mngr_val_M = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__stats_en_wen_M = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__next_val_M = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__inst_W = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__proc2mngr_val_W = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__rf_wen_pending_W = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__stats_en_wen_pending_W = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_15 = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_17 = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_22 = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_23 = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__pc_F = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__pc_next_F = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__br_target_X = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__jal_target_D = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__dmem_write_reg_out = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__alu_result_X = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__pc_D = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imm_D = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__op2_D = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__pc_reg_X_out = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__op1_sel_mux_out = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__op2_byp_out_D = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__op1_X = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__op2_X = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__ex_result_X = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul_resp_msg = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__ex_result_M = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__wb_result_M = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__wb_result_W = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__stats_en_W = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__b_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__a_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__result_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__result_en = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(4096, vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__str);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_mux_in0 = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__a_reg_out = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__a_mux_in0 = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__add_mux_output = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str = VL_RAND_RESET_I(24);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs2_str = VL_RAND_RESET_I(24);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str = VL_RAND_RESET_I(24);
    VL_RAND_RESET_W(72, vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__csr_str);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__funct_str = VL_RAND_RESET_I(16);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__csr = VL_RAND_RESET_I(12);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__funct = VL_RAND_RESET_I(7);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__str);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__str);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__str);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__str);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cachereq_en = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__memresp_en = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__write_data_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__wben_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__data_array_ren = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__data_array_wen = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__tag_array_ren = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__tag_array_wen_way0 = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__tag_array_wen_way1 = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__read_data_reg_en = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__read_data_zero_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__evict_addr_reg_en = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__mem_req_addr_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cacheresp_type = VL_RAND_RESET_I(4);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__memreq_type = VL_RAND_RESET_I(4);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state = VL_RAND_RESET_I(5);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__next_state = VL_RAND_RESET_I(5);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__valid_way0 = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__valid_way1 = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__valid_wen_way0 = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__valid_wen_way1 = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__dirty_wen_way0 = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__dirty_wen_way1 = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__dirty_wdata_way0 = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__dirty_wdata_way1 = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__hit_w0 = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__hit_w1 = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__use_bit_wdata = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__use_bit_wen = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__victim_sel = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__hit_out = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__hit_next = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__way_sel_reg_out = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__valid_bits_way0__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__valid_bits_way1__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__dirty_bits_way0__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__dirty_bits_way1__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__use_bits__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__cachereq_type_reg_out = VL_RAND_RESET_I(4);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__cachereq_data_reg_out = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__wben_mux_out = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(128, vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__memresp_data_reg_out);
    VL_RAND_RESET_W(128, vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__write_data_mux_out);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__tag_array0_out = VL_RAND_RESET_I(24);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__tag_array1_out = VL_RAND_RESET_I(24);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__evict_addr_reg_out = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__active_way = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT____Vcellinp__data_array_way0__write_en = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT____Vcellinp__data_array_way1__write_en = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__read_data_reg_out);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__tag_array_way0__DOT__mem[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__tag_array_way1__DOT__mem[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__data_array_way0__DOT__mem[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__data_array_way1__DOT__mem[__Vi0]);
    }
    VL_RAND_RESET_W(4096, vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__str);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__data = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__str);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__str);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__str);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachereq_en = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__memresp_en = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__write_data_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__wben_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__data_array_ren = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__data_array_wen = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__tag_array_ren = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__tag_array_wen_way0 = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__tag_array_wen_way1 = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__read_data_reg_en = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__read_data_zero_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__evict_addr_reg_en = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__mem_req_addr_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cacheresp_type = VL_RAND_RESET_I(4);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__memreq_type = VL_RAND_RESET_I(4);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state = VL_RAND_RESET_I(5);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__next_state = VL_RAND_RESET_I(5);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__valid_way0 = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__valid_way1 = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__valid_wen_way0 = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__valid_wen_way1 = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__dirty_wen_way0 = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__dirty_wen_way1 = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way0 = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way1 = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__hit_w0 = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__hit_w1 = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__use_bit_wdata = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__use_bit_wen = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__victim_sel = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__hit_out = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__hit_next = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__valid_bits_way0__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__valid_bits_way1__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__dirty_bits_way0__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__dirty_bits_way1__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__use_bits__DOT__rfile[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out = VL_RAND_RESET_I(4);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__cachereq_data_reg_out = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__wben_mux_out = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(128, vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__memresp_data_reg_out);
    VL_RAND_RESET_W(128, vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__write_data_mux_out);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__tag_array0_out = VL_RAND_RESET_I(24);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__tag_array1_out = VL_RAND_RESET_I(24);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__evict_addr_reg_out = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__active_way = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT____Vcellinp__data_array_way0__write_en = VL_RAND_RESET_I(1);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT____Vcellinp__data_array_way1__write_en = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__read_data_reg_out);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__tag_array_way0__DOT__mem[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__tag_array_way1__DOT__mem[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__data_array_way0__DOT__mem[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__data_array_way1__DOT__mem[__Vi0]);
    }
    VL_RAND_RESET_W(4096, vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__str);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__str);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__str);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__str);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->__VdfgRegularize_hd87f99a1_0_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdpi_export_trigger = 0;
    vlSelf->__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__cs__255__cs_cacheresp_type = VL_RAND_RESET_I(4);
    vlSelf->__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__cs__321__cs_cacheresp_type = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = VL_RAND_RESET_I(1);
}
