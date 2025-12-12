// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNetMsg2CacheReq_noparam.h for the primary calling header

#include "VNetMsg2CacheReq_noparam__pch.h"
#include "VNetMsg2CacheReq_noparam__Syms.h"
#include "VNetMsg2CacheReq_noparam___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VNetMsg2CacheReq_noparam___024root___dump_triggers__ico(VNetMsg2CacheReq_noparam___024root* vlSelf);
#endif  // VL_DEBUG

void VNetMsg2CacheReq_noparam___024root___eval_triggers__ico(VNetMsg2CacheReq_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetMsg2CacheReq_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetMsg2CacheReq_noparam___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VNetMsg2CacheReq_noparam___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VNetMsg2CacheReq_noparam___024root___dump_triggers__act(VNetMsg2CacheReq_noparam___024root* vlSelf);
#endif  // VL_DEBUG

void VNetMsg2CacheReq_noparam___024root___eval_triggers__act(VNetMsg2CacheReq_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetMsg2CacheReq_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetMsg2CacheReq_noparam___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VNetMsg2CacheReq_noparam___024root___dump_triggers__act(vlSelf);
    }
#endif
}
