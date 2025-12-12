// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VProcDpathImmGen_noparam.h for the primary calling header

#include "VProcDpathImmGen_noparam__pch.h"
#include "VProcDpathImmGen_noparam___024root.h"

void VProcDpathImmGen_noparam___024root___ico_sequent__TOP__0(VProcDpathImmGen_noparam___024root* vlSelf);

void VProcDpathImmGen_noparam___024root___eval_ico(VProcDpathImmGen_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcDpathImmGen_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcDpathImmGen_noparam___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VProcDpathImmGen_noparam___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VProcDpathImmGen_noparam___024root___ico_sequent__TOP__0(VProcDpathImmGen_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcDpathImmGen_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcDpathImmGen_noparam___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->imm = ((4U & (IData)(vlSelf->imm_type))
                    ? ((2U & (IData)(vlSelf->imm_type))
                        ? 0U : ((1U & (IData)(vlSelf->imm_type))
                                 ? 0U : (((- (IData)(
                                                     (vlSelf->inst 
                                                      >> 0x1fU))) 
                                          << 0x14U) 
                                         | ((0xff000U 
                                             & vlSelf->inst) 
                                            | ((0x800U 
                                                & (vlSelf->inst 
                                                   >> 9U)) 
                                               | (0x7feU 
                                                  & (vlSelf->inst 
                                                     >> 0x14U)))))))
                    : ((2U & (IData)(vlSelf->imm_type))
                        ? ((1U & (IData)(vlSelf->imm_type))
                            ? (0xfffff000U & vlSelf->inst)
                            : (((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0x800U 
                                             & (vlSelf->inst 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSelf->inst 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelf->inst 
                                                     >> 7U))))))
                        : ((1U & (IData)(vlSelf->imm_type))
                            ? (((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xbU) | ((0x7e0U 
                                             & (vlSelf->inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 7U))))
                            : (((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xbU) | (0x7ffU 
                                            & (vlSelf->inst 
                                               >> 0x14U))))));
}

void VProcDpathImmGen_noparam___024root___eval_triggers__ico(VProcDpathImmGen_noparam___024root* vlSelf);

bool VProcDpathImmGen_noparam___024root___eval_phase__ico(VProcDpathImmGen_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcDpathImmGen_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcDpathImmGen_noparam___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VProcDpathImmGen_noparam___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VProcDpathImmGen_noparam___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VProcDpathImmGen_noparam___024root___eval_act(VProcDpathImmGen_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcDpathImmGen_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcDpathImmGen_noparam___024root___eval_act\n"); );
}

void VProcDpathImmGen_noparam___024root___eval_nba(VProcDpathImmGen_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcDpathImmGen_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcDpathImmGen_noparam___024root___eval_nba\n"); );
}

void VProcDpathImmGen_noparam___024root___eval_triggers__act(VProcDpathImmGen_noparam___024root* vlSelf);

bool VProcDpathImmGen_noparam___024root___eval_phase__act(VProcDpathImmGen_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcDpathImmGen_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcDpathImmGen_noparam___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VProcDpathImmGen_noparam___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VProcDpathImmGen_noparam___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VProcDpathImmGen_noparam___024root___eval_phase__nba(VProcDpathImmGen_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcDpathImmGen_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcDpathImmGen_noparam___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VProcDpathImmGen_noparam___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VProcDpathImmGen_noparam___024root___dump_triggers__ico(VProcDpathImmGen_noparam___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VProcDpathImmGen_noparam___024root___dump_triggers__nba(VProcDpathImmGen_noparam___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VProcDpathImmGen_noparam___024root___dump_triggers__act(VProcDpathImmGen_noparam___024root* vlSelf);
#endif  // VL_DEBUG

void VProcDpathImmGen_noparam___024root___eval(VProcDpathImmGen_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcDpathImmGen_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcDpathImmGen_noparam___024root___eval\n"); );
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
            VProcDpathImmGen_noparam___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("lab2_proc/ProcDpathImmGen.v", 54, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VProcDpathImmGen_noparam___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VProcDpathImmGen_noparam___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("lab2_proc/ProcDpathImmGen.v", 54, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VProcDpathImmGen_noparam___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("lab2_proc/ProcDpathImmGen.v", 54, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VProcDpathImmGen_noparam___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VProcDpathImmGen_noparam___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VProcDpathImmGen_noparam___024root___eval_debug_assertions(VProcDpathImmGen_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcDpathImmGen_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcDpathImmGen_noparam___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->imm_type & 0xf8U))) {
        Verilated::overWidthError("imm_type");}
}
#endif  // VL_DEBUG
