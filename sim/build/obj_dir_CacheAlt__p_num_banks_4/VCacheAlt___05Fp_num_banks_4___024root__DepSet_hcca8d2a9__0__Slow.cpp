// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCacheAlt___05Fp_num_banks_4.h for the primary calling header

#include "VCacheAlt___05Fp_num_banks_4__pch.h"
#include "VCacheAlt___05Fp_num_banks_4__Syms.h"
#include "VCacheAlt___05Fp_num_banks_4___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VCacheAlt___05Fp_num_banks_4___024root___dump_triggers__stl(VCacheAlt___05Fp_num_banks_4___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VCacheAlt___05Fp_num_banks_4___024root___eval_triggers__stl(VCacheAlt___05Fp_num_banks_4___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCacheAlt___05Fp_num_banks_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheAlt___05Fp_num_banks_4___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCacheAlt___05Fp_num_banks_4___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
