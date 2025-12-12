// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNet___05Fp_msg_nbits_44.h for the primary calling header

#include "VNet___05Fp_msg_nbits_44__pch.h"
#include "VNet___05Fp_msg_nbits_44__Syms.h"
#include "VNet___05Fp_msg_nbits_44___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VNet___05Fp_msg_nbits_44___024root___dump_triggers__stl(VNet___05Fp_msg_nbits_44___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VNet___05Fp_msg_nbits_44___024root___eval_triggers__stl(VNet___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNet___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNet___05Fp_msg_nbits_44___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VNet___05Fp_msg_nbits_44___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
