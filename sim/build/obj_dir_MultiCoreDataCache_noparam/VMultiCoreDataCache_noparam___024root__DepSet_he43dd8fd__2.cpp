// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMultiCoreDataCache_noparam.h for the primary calling header

#include "VMultiCoreDataCache_noparam__pch.h"
#include "VMultiCoreDataCache_noparam___024root.h"

void VMultiCoreDataCache_noparam___024root___eval_triggers__act(VMultiCoreDataCache_noparam___024root* vlSelf);
void VMultiCoreDataCache_noparam___024root___eval_act(VMultiCoreDataCache_noparam___024root* vlSelf);

bool VMultiCoreDataCache_noparam___024root___eval_phase__act(VMultiCoreDataCache_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMultiCoreDataCache_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VMultiCoreDataCache_noparam___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VMultiCoreDataCache_noparam___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void VMultiCoreDataCache_noparam___024root___eval_nba(VMultiCoreDataCache_noparam___024root* vlSelf);

bool VMultiCoreDataCache_noparam___024root___eval_phase__nba(VMultiCoreDataCache_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMultiCoreDataCache_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VMultiCoreDataCache_noparam___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMultiCoreDataCache_noparam___024root___dump_triggers__ico(VMultiCoreDataCache_noparam___024root* vlSelf);
#endif  // VL_DEBUG
bool VMultiCoreDataCache_noparam___024root___eval_phase__ico(VMultiCoreDataCache_noparam___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VMultiCoreDataCache_noparam___024root___dump_triggers__nba(VMultiCoreDataCache_noparam___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VMultiCoreDataCache_noparam___024root___dump_triggers__act(VMultiCoreDataCache_noparam___024root* vlSelf);
#endif  // VL_DEBUG

void VMultiCoreDataCache_noparam___024root___eval(VMultiCoreDataCache_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMultiCoreDataCache_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root___eval\n"); );
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
            VMultiCoreDataCache_noparam___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("lab4_sys/MultiCoreDataCache.v", 184, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VMultiCoreDataCache_noparam___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VMultiCoreDataCache_noparam___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("lab4_sys/MultiCoreDataCache.v", 184, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VMultiCoreDataCache_noparam___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("lab4_sys/MultiCoreDataCache.v", 184, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VMultiCoreDataCache_noparam___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VMultiCoreDataCache_noparam___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VMultiCoreDataCache_noparam___024root___eval_debug_assertions(VMultiCoreDataCache_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMultiCoreDataCache_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreDataCache_noparam___024root___eval_debug_assertions\n"); );
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
}
#endif  // VL_DEBUG
