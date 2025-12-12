// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VProcDpathImmGen_noparam.h for the primary calling header

#include "VProcDpathImmGen_noparam__pch.h"
#include "VProcDpathImmGen_noparam__Syms.h"
#include "VProcDpathImmGen_noparam___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VProcDpathImmGen_noparam___024root___dump_triggers__ico(VProcDpathImmGen_noparam___024root* vlSelf);
#endif  // VL_DEBUG

void VProcDpathImmGen_noparam___024root___eval_triggers__ico(VProcDpathImmGen_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcDpathImmGen_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcDpathImmGen_noparam___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VProcDpathImmGen_noparam___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VProcDpathImmGen_noparam___024root___dump_triggers__act(VProcDpathImmGen_noparam___024root* vlSelf);
#endif  // VL_DEBUG

void VProcDpathImmGen_noparam___024root___eval_triggers__act(VProcDpathImmGen_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcDpathImmGen_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcDpathImmGen_noparam___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VProcDpathImmGen_noparam___024root___dump_triggers__act(vlSelf);
    }
#endif
}
