// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMultiCoreSys_noparam.h for the primary calling header

#include "VMultiCoreSys_noparam__pch.h"
#include "VMultiCoreSys_noparam__Syms.h"
#include "VMultiCoreSys_noparam___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VMultiCoreSys_noparam___024root___dump_triggers__stl(VMultiCoreSys_noparam___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VMultiCoreSys_noparam___024root___eval_triggers__stl(VMultiCoreSys_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMultiCoreSys_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VMultiCoreSys_noparam___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

extern const VlUnpacked<CData/*0:0*/, 128> VMultiCoreSys_noparam__ConstPool__TABLE_he92e35b8_0;
extern const VlUnpacked<CData/*1:0*/, 128> VMultiCoreSys_noparam__ConstPool__TABLE_h81fecf40_0;

VL_ATTR_COLD void VMultiCoreSys_noparam___024root___stl_sequent__TOP__0(VMultiCoreSys_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMultiCoreSys_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiCoreSys_noparam___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__b_zero;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__b_zero = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__b_lsb;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__b_lsb = 0;
    CData/*4:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__b_zero;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__b_zero = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__b_lsb;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__b_lsb = 0;
    CData/*4:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__b_zero;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__b_zero = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__b_lsb;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__b_lsb = 0;
    CData/*4:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__b_zero;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__b_zero = 0;
    CData/*0:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__b_lsb;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__b_lsb = 0;
    CData/*4:0*/ MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k;
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*6:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*6:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    CData/*6:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state)) 
                               << 2U) | (((1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state)))))))) {
        if ((((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state)) 
              << 2U) | (((1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state)) 
                         << 1U) | (0U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF_NX("[%0t] %%Error: IntMulAlt.v:250: Assertion failed in %NMultiCoreSys_noparam.v.PROC[0].proc.dpath.imul.ctrl: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state));
                VL_STOP_MT("lab1_imul/IntMulAlt.v", 250, "");
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF_NX("[%0t] %%Error: IntMulAlt.v:250: Assertion failed in %NMultiCoreSys_noparam.v.PROC[0].proc.dpath.imul.ctrl: unique case, but none matched for '2'h%x'\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),2,(IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state));
            VL_STOP_MT("lab1_imul/IntMulAlt.v", 250, "");
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state)) 
                               << 2U) | (((1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state)))))))) {
        if ((((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state)) 
              << 2U) | (((1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state)) 
                         << 1U) | (0U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF_NX("[%0t] %%Error: IntMulAlt.v:250: Assertion failed in %NMultiCoreSys_noparam.v.PROC[1].proc.dpath.imul.ctrl: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state));
                VL_STOP_MT("lab1_imul/IntMulAlt.v", 250, "");
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF_NX("[%0t] %%Error: IntMulAlt.v:250: Assertion failed in %NMultiCoreSys_noparam.v.PROC[1].proc.dpath.imul.ctrl: unique case, but none matched for '2'h%x'\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),2,(IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state));
            VL_STOP_MT("lab1_imul/IntMulAlt.v", 250, "");
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state)) 
                               << 2U) | (((1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state)))))))) {
        if ((((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state)) 
              << 2U) | (((1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state)) 
                         << 1U) | (0U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF_NX("[%0t] %%Error: IntMulAlt.v:250: Assertion failed in %NMultiCoreSys_noparam.v.PROC[2].proc.dpath.imul.ctrl: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state));
                VL_STOP_MT("lab1_imul/IntMulAlt.v", 250, "");
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF_NX("[%0t] %%Error: IntMulAlt.v:250: Assertion failed in %NMultiCoreSys_noparam.v.PROC[2].proc.dpath.imul.ctrl: unique case, but none matched for '2'h%x'\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),2,(IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state));
            VL_STOP_MT("lab1_imul/IntMulAlt.v", 250, "");
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state)) 
                               << 2U) | (((1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state)))))))) {
        if ((((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state)) 
              << 2U) | (((1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state)) 
                         << 1U) | (0U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF_NX("[%0t] %%Error: IntMulAlt.v:250: Assertion failed in %NMultiCoreSys_noparam.v.PROC[3].proc.dpath.imul.ctrl: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state));
                VL_STOP_MT("lab1_imul/IntMulAlt.v", 250, "");
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF_NX("[%0t] %%Error: IntMulAlt.v:250: Assertion failed in %NMultiCoreSys_noparam.v.PROC[3].proc.dpath.imul.ctrl: unique case, but none matched for '2'h%x'\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),2,(IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state));
            VL_STOP_MT("lab1_imul/IntMulAlt.v", 250, "");
        }
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__read_data_reg_en 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && (1U & ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                         ? ((1U & (~ 
                                                   ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                    >> 2U))) 
                                            && ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                     >> 1U))) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state)))))
                                         : ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                             ? ((1U 
                                                 & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                    >> 1U)) 
                                                && (1U 
                                                    & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state)))
                                             : ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                >> 1U)))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__evict_addr_reg_en 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                         >> 3U)) && 
                                  ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                             >> 2U))) 
                                   && ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                 >> 1U))) 
                                       && (1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state)))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__memresp_en 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & 
                                              (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state)))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__cachereq_en 
        = ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                  >> 4U)) || (1U & ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                     ? ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                        >> 2U) : ((1U 
                                                   & (~ 
                                                      ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                       >> 2U))) 
                                                  && ((1U 
                                                       & (~ 
                                                          ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                           >> 1U))) 
                                                      && (1U 
                                                          & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__data_array_ren 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                   ? ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                >> 2U))) 
                                      && ((1U & (~ 
                                                 ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                  >> 1U))) 
                                          && (1U & 
                                              (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state)))))
                                   : ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                       ? ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state)))
                                       : ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__read_data_reg_en 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && (1U & ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                         ? ((1U & (~ 
                                                   ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                    >> 2U))) 
                                            && ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                     >> 1U))) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state)))))
                                         : ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                             ? ((1U 
                                                 & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                    >> 1U)) 
                                                && (1U 
                                                    & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state)))
                                             : ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                >> 1U)))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__evict_addr_reg_en 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                         >> 3U)) && 
                                  ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                             >> 2U))) 
                                   && ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                 >> 1U))) 
                                       && (1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state)))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__memresp_en 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & 
                                              (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state)))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cachereq_en 
        = ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                  >> 4U)) || (1U & ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                     ? ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                        >> 2U) : ((1U 
                                                   & (~ 
                                                      ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                       >> 2U))) 
                                                  && ((1U 
                                                       & (~ 
                                                          ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                           >> 1U))) 
                                                      && (1U 
                                                          & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__data_array_ren 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                   ? ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                >> 2U))) 
                                      && ((1U & (~ 
                                                 ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                  >> 1U))) 
                                          && (1U & 
                                              (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state)))))
                                   : ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                       ? ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state)))
                                       : ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__read_data_reg_en 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && (1U & ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                         ? ((1U & (~ 
                                                   ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                    >> 2U))) 
                                            && ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                     >> 1U))) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state)))))
                                         : ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                             ? ((1U 
                                                 & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                    >> 1U)) 
                                                && (1U 
                                                    & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state)))
                                             : ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                >> 1U)))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__evict_addr_reg_en 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                         >> 3U)) && 
                                  ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                             >> 2U))) 
                                   && ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                 >> 1U))) 
                                       && (1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state)))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__memresp_en 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & 
                                              (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state)))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cachereq_en 
        = ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                  >> 4U)) || (1U & ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                     ? ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                        >> 2U) : ((1U 
                                                   & (~ 
                                                      ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                       >> 2U))) 
                                                  && ((1U 
                                                       & (~ 
                                                          ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                           >> 1U))) 
                                                      && (1U 
                                                          & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__data_array_ren 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                   ? ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                >> 2U))) 
                                      && ((1U & (~ 
                                                 ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                  >> 1U))) 
                                          && (1U & 
                                              (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state)))))
                                   : ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                       ? ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state)))
                                       : ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__read_data_reg_en 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && (1U & ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                         ? ((1U & (~ 
                                                   ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                    >> 2U))) 
                                            && ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                     >> 1U))) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state)))))
                                         : ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                             ? ((1U 
                                                 & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                    >> 1U)) 
                                                && (1U 
                                                    & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state)))
                                             : ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                >> 1U)))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__evict_addr_reg_en 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                         >> 3U)) && 
                                  ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                             >> 2U))) 
                                   && ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                 >> 1U))) 
                                       && (1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state)))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__memresp_en 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & 
                                              (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state)))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cachereq_en 
        = ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                  >> 4U)) || (1U & ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                     ? ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                        >> 2U) : ((1U 
                                                   & (~ 
                                                      ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                       >> 2U))) 
                                                  && ((1U 
                                                       & (~ 
                                                          ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                           >> 1U))) 
                                                      && (1U 
                                                          & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__data_array_ren 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                   ? ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                >> 2U))) 
                                      && ((1U & (~ 
                                                 ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                  >> 1U))) 
                                          && (1U & 
                                              (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state)))))
                                   : ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                       ? ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state)))
                                       : ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__read_data_reg_en 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && (1U & ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))
                                         ? ((1U & (~ 
                                                   ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                    >> 2U))) 
                                            && ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                     >> 1U))) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state)))))
                                         : ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))
                                             ? ((1U 
                                                 & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                    >> 1U)) 
                                                && (1U 
                                                    & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state)))
                                             : ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                >> 1U)))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__evict_addr_reg_en 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                         >> 3U)) && 
                                  ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                             >> 2U))) 
                                   && ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                 >> 1U))) 
                                       && (1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state)))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__memresp_en 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & 
                                              (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state)))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__cachereq_en 
        = ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                  >> 4U)) || (1U & ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))
                                     ? ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                        >> 2U) : ((1U 
                                                   & (~ 
                                                      ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                       >> 2U))) 
                                                  && ((1U 
                                                       & (~ 
                                                          ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                           >> 1U))) 
                                                      && (1U 
                                                          & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__data_array_ren 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))
                                   ? ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                >> 2U))) 
                                      && ((1U & (~ 
                                                 ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                  >> 1U))) 
                                          && (1U & 
                                              (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state)))))
                                   : ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))
                                       ? ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state)))
                                       : ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__read_data_reg_en 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && (1U & ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))
                                         ? ((1U & (~ 
                                                   ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                    >> 2U))) 
                                            && ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                     >> 1U))) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state)))))
                                         : ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))
                                             ? ((1U 
                                                 & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                    >> 1U)) 
                                                && (1U 
                                                    & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state)))
                                             : ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                >> 1U)))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__evict_addr_reg_en 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                         >> 3U)) && 
                                  ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                             >> 2U))) 
                                   && ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                 >> 1U))) 
                                       && (1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state)))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__memresp_en 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & 
                                              (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state)))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__cachereq_en 
        = ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                  >> 4U)) || (1U & ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))
                                     ? ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                        >> 2U) : ((1U 
                                                   & (~ 
                                                      ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                       >> 2U))) 
                                                  && ((1U 
                                                       & (~ 
                                                          ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                           >> 1U))) 
                                                      && (1U 
                                                          & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__data_array_ren 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))
                                   ? ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                >> 2U))) 
                                      && ((1U & (~ 
                                                 ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                  >> 1U))) 
                                          && (1U & 
                                              (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state)))))
                                   : ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))
                                       ? ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state)))
                                       : ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__read_data_reg_en 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && (1U & ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))
                                         ? ((1U & (~ 
                                                   ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                    >> 2U))) 
                                            && ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                     >> 1U))) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state)))))
                                         : ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))
                                             ? ((1U 
                                                 & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                    >> 1U)) 
                                                && (1U 
                                                    & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state)))
                                             : ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                >> 1U)))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__evict_addr_reg_en 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                         >> 3U)) && 
                                  ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                             >> 2U))) 
                                   && ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                 >> 1U))) 
                                       && (1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state)))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__memresp_en 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & 
                                              (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state)))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__cachereq_en 
        = ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                  >> 4U)) || (1U & ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))
                                     ? ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                        >> 2U) : ((1U 
                                                   & (~ 
                                                      ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                       >> 2U))) 
                                                  && ((1U 
                                                       & (~ 
                                                          ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                           >> 1U))) 
                                                      && (1U 
                                                          & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__data_array_ren 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))
                                   ? ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                >> 2U))) 
                                      && ((1U & (~ 
                                                 ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                  >> 1U))) 
                                          && (1U & 
                                              (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state)))))
                                   : ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))
                                       ? ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state)))
                                       : ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__read_data_reg_en 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && (1U & ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))
                                         ? ((1U & (~ 
                                                   ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                    >> 2U))) 
                                            && ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                     >> 1U))) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state)))))
                                         : ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))
                                             ? ((1U 
                                                 & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                    >> 1U)) 
                                                && (1U 
                                                    & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state)))
                                             : ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                >> 1U)))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__evict_addr_reg_en 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                         >> 3U)) && 
                                  ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                             >> 2U))) 
                                   && ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                 >> 1U))) 
                                       && (1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state)))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__memresp_en 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & 
                                              (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state)))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__cachereq_en 
        = ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                  >> 4U)) || (1U & ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))
                                     ? ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                        >> 2U) : ((1U 
                                                   & (~ 
                                                      ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                       >> 2U))) 
                                                  && ((1U 
                                                       & (~ 
                                                          ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                           >> 1U))) 
                                                      && (1U 
                                                          & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__data_array_ren 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))
                                   ? ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                >> 2U))) 
                                      && ((1U & (~ 
                                                 ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                  >> 1U))) 
                                          && (1U & 
                                              (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state)))))
                                   : ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))
                                       ? ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state)))
                                       : ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__wb_result_sel_D 
        = ((1U & (~ ((((((((0x13U == vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D) 
                           | (0x2073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                          | (0x1073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                         | (0x33U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                        | (0x40000033U == (0xfe00707fU 
                                           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                       | (0x2000033U == (0xfe00707fU 
                                         & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                      | (0x7033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                     | (0x6033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))))) 
           && ((1U & (~ ((((((((0x4033U == (0xfe00707fU 
                                            & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D)) 
                               | (0x2033U == (0xfe00707fU 
                                              & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                              | (0x40005033U == (0xfe00707fU 
                                                 & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                             | (0x5033U == (0xfe00707fU 
                                            & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                            | (0x1033U == (0xfe00707fU 
                                           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                           | (0x13U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                          | (0x7013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                         | (0x6013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))))) 
               && (((((((((0x4013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D)) 
                          | (0x2013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                         | (0x40005013U == (0xfe00707fU 
                                            & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                        | (0x5013U == (0xfe00707fU 
                                       & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                       | (0x1013U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                      | (0x37U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                     | (0x17U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                    | (0x2003U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                   && ((0x4013U != (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D)) 
                       && ((0x2013U != (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D)) 
                           && ((0x40005013U != (0xfe00707fU 
                                                & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D)) 
                               && ((0x5013U != (0xfe00707fU 
                                                & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D)) 
                                   && ((0x1013U != 
                                        (0xfe00707fU 
                                         & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D)) 
                                       && ((0x37U != 
                                            (0x7fU 
                                             & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D)) 
                                           && (0x17U 
                                               != (0x7fU 
                                                   & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D)))))))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__wb_result_sel_D 
        = ((1U & (~ ((((((((0x13U == vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D) 
                           | (0x2073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                          | (0x1073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                         | (0x33U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                        | (0x40000033U == (0xfe00707fU 
                                           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                       | (0x2000033U == (0xfe00707fU 
                                         & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                      | (0x7033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                     | (0x6033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))))) 
           && ((1U & (~ ((((((((0x4033U == (0xfe00707fU 
                                            & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D)) 
                               | (0x2033U == (0xfe00707fU 
                                              & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                              | (0x40005033U == (0xfe00707fU 
                                                 & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                             | (0x5033U == (0xfe00707fU 
                                            & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                            | (0x1033U == (0xfe00707fU 
                                           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                           | (0x13U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                          | (0x7013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                         | (0x6013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))))) 
               && (((((((((0x4013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D)) 
                          | (0x2013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                         | (0x40005013U == (0xfe00707fU 
                                            & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                        | (0x5013U == (0xfe00707fU 
                                       & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                       | (0x1013U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                      | (0x37U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                     | (0x17U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                    | (0x2003U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                   && ((0x4013U != (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D)) 
                       && ((0x2013U != (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D)) 
                           && ((0x40005013U != (0xfe00707fU 
                                                & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D)) 
                               && ((0x5013U != (0xfe00707fU 
                                                & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D)) 
                                   && ((0x1013U != 
                                        (0xfe00707fU 
                                         & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D)) 
                                       && ((0x37U != 
                                            (0x7fU 
                                             & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D)) 
                                           && (0x17U 
                                               != (0x7fU 
                                                   & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D)))))))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__wb_result_sel_D 
        = ((1U & (~ ((((((((0x13U == vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D) 
                           | (0x2073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                          | (0x1073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                         | (0x33U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                        | (0x40000033U == (0xfe00707fU 
                                           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                       | (0x2000033U == (0xfe00707fU 
                                         & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                      | (0x7033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                     | (0x6033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))))) 
           && ((1U & (~ ((((((((0x4033U == (0xfe00707fU 
                                            & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D)) 
                               | (0x2033U == (0xfe00707fU 
                                              & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                              | (0x40005033U == (0xfe00707fU 
                                                 & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                             | (0x5033U == (0xfe00707fU 
                                            & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                            | (0x1033U == (0xfe00707fU 
                                           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                           | (0x13U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                          | (0x7013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                         | (0x6013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))))) 
               && (((((((((0x4013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D)) 
                          | (0x2013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                         | (0x40005013U == (0xfe00707fU 
                                            & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                        | (0x5013U == (0xfe00707fU 
                                       & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                       | (0x1013U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                      | (0x37U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                     | (0x17U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                    | (0x2003U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                   && ((0x4013U != (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D)) 
                       && ((0x2013U != (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D)) 
                           && ((0x40005013U != (0xfe00707fU 
                                                & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D)) 
                               && ((0x5013U != (0xfe00707fU 
                                                & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D)) 
                                   && ((0x1013U != 
                                        (0xfe00707fU 
                                         & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D)) 
                                       && ((0x37U != 
                                            (0x7fU 
                                             & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D)) 
                                           && (0x17U 
                                               != (0x7fU 
                                                   & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D)))))))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__wb_result_sel_D 
        = ((1U & (~ ((((((((0x13U == vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D) 
                           | (0x2073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                          | (0x1073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                         | (0x33U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                        | (0x40000033U == (0xfe00707fU 
                                           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                       | (0x2000033U == (0xfe00707fU 
                                         & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                      | (0x7033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                     | (0x6033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))))) 
           && ((1U & (~ ((((((((0x4033U == (0xfe00707fU 
                                            & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D)) 
                               | (0x2033U == (0xfe00707fU 
                                              & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                              | (0x40005033U == (0xfe00707fU 
                                                 & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                             | (0x5033U == (0xfe00707fU 
                                            & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                            | (0x1033U == (0xfe00707fU 
                                           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                           | (0x13U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                          | (0x7013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                         | (0x6013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))))) 
               && (((((((((0x4013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D)) 
                          | (0x2013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                         | (0x40005013U == (0xfe00707fU 
                                            & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                        | (0x5013U == (0xfe00707fU 
                                       & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                       | (0x1013U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                      | (0x37U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                     | (0x17U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                    | (0x2003U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                   && ((0x4013U != (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D)) 
                       && ((0x2013U != (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D)) 
                           && ((0x40005013U != (0xfe00707fU 
                                                & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D)) 
                               && ((0x5013U != (0xfe00707fU 
                                                & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D)) 
                                   && ((0x1013U != 
                                        (0xfe00707fU 
                                         & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D)) 
                                       && ((0x37U != 
                                            (0x7fU 
                                             & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D)) 
                                           && (0x17U 
                                               != (0x7fU 
                                                   & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D)))))))))));
    vlSelf->stats_en = (0U != vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__stats_en_W);
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__tag_array_wen_way1 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__tag_array_wen_way0 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way1 = 0U;
    if ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__tag_array_wen_way1 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way1 = 1U;
        }
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way0 = 0U;
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__tag_array_wen_way0 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way0 = 1U;
        }
    } else {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way0 = 0U;
    }
    if ((7U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__tag_array_wen_way1 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way1 = 1U;
        }
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__tag_array_wen_way0 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way0 = 1U;
        }
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__tag_array_wen_way1 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__tag_array_wen_way0 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way1 = 0U;
    if ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__tag_array_wen_way1 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way1 = 1U;
        }
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way0 = 0U;
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__tag_array_wen_way0 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way0 = 1U;
        }
    } else {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way0 = 0U;
    }
    if ((7U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__tag_array_wen_way1 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way1 = 1U;
        }
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__tag_array_wen_way0 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way0 = 1U;
        }
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__tag_array_wen_way1 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__tag_array_wen_way0 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way1 = 0U;
    if ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__tag_array_wen_way1 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way1 = 1U;
        }
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way0 = 0U;
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__tag_array_wen_way0 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way0 = 1U;
        }
    } else {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way0 = 0U;
    }
    if ((7U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__tag_array_wen_way1 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way1 = 1U;
        }
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__tag_array_wen_way0 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way0 = 1U;
        }
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__tag_array_wen_way1 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__tag_array_wen_way0 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way1 = 0U;
    if ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__tag_array_wen_way1 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way1 = 1U;
        }
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way0 = 0U;
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__tag_array_wen_way0 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way0 = 1U;
        }
    } else {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way0 = 0U;
    }
    if ((7U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__tag_array_wen_way1 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way1 = 1U;
        }
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__tag_array_wen_way0 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__valid_wen_way0 = 1U;
        }
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__tag_array_wen_way1 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__tag_array_wen_way0 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way1 = 0U;
    if ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__way_sel_reg_out) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__tag_array_wen_way1 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way1 = 1U;
        }
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way0 = 0U;
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__tag_array_wen_way0 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way0 = 1U;
        }
    } else {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way0 = 0U;
    }
    if ((7U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__way_sel_reg_out) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__tag_array_wen_way1 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way1 = 1U;
        }
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__tag_array_wen_way0 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way0 = 1U;
        }
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__tag_array_wen_way1 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__tag_array_wen_way0 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way1 = 0U;
    if ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__way_sel_reg_out) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__tag_array_wen_way1 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way1 = 1U;
        }
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way0 = 0U;
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__tag_array_wen_way0 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way0 = 1U;
        }
    } else {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way0 = 0U;
    }
    if ((7U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__way_sel_reg_out) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__tag_array_wen_way1 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way1 = 1U;
        }
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__tag_array_wen_way0 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way0 = 1U;
        }
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__tag_array_wen_way1 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__tag_array_wen_way0 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way1 = 0U;
    if ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__way_sel_reg_out) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__tag_array_wen_way1 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way1 = 1U;
        }
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way0 = 0U;
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__tag_array_wen_way0 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way0 = 1U;
        }
    } else {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way0 = 0U;
    }
    if ((7U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__way_sel_reg_out) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__tag_array_wen_way1 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way1 = 1U;
        }
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__tag_array_wen_way0 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way0 = 1U;
        }
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__tag_array_wen_way1 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__tag_array_wen_way0 = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way1 = 0U;
    if ((2U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__way_sel_reg_out) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__tag_array_wen_way1 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way1 = 1U;
        }
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way0 = 0U;
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__tag_array_wen_way0 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way0 = 1U;
        }
    } else {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way0 = 0U;
    }
    if ((7U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__way_sel_reg_out) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__tag_array_wen_way1 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way1 = 1U;
        }
        if ((1U & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__tag_array_wen_way0 = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__valid_wen_way0 = 1U;
        }
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__proc2cache_respstream_trace__DOT__data 
        = ((1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__cachereq_type_reg_out))
            ? 0U : ((8U & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out)
                     ? ((4U & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out)
                         ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__read_data_reg_out[3U]
                         : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__read_data_reg_out[2U])
                     : ((4U & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out)
                         ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__read_data_reg_out[1U]
                         : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__read_data_reg_out[0U])));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__proc2cache_respstream_trace__DOT__data 
        = ((1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__cachereq_type_reg_out))
            ? 0U : ((8U & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out)
                     ? ((4U & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out)
                         ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__read_data_reg_out[3U]
                         : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__read_data_reg_out[2U])
                     : ((4U & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out)
                         ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__read_data_reg_out[1U]
                         : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__read_data_reg_out[0U])));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__proc2cache_respstream_trace__DOT__data 
        = ((1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__cachereq_type_reg_out))
            ? 0U : ((8U & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out)
                     ? ((4U & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out)
                         ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__read_data_reg_out[3U]
                         : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__read_data_reg_out[2U])
                     : ((4U & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out)
                         ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__read_data_reg_out[1U]
                         : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__read_data_reg_out[0U])));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__proc2cache_respstream_trace__DOT__data 
        = ((1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__cachereq_type_reg_out))
            ? 0U : ((8U & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out)
                     ? ((4U & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out)
                         ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__read_data_reg_out[3U]
                         : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__read_data_reg_out[2U])
                     : ((4U & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out)
                         ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__read_data_reg_out[1U]
                         : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__read_data_reg_out[0U])));
    if ((0x10U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__cacheresp_type = 0U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__memreq_type = 0U;
    } else if ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__cacheresp_type = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__memreq_type = 0U;
        } else if ((2U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))) {
            if ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))) {
                vlSelf->__Vtask_MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__cs__4408__cs_cacheresp_type 
                    = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__cachereq_type_reg_out;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__cacheresp_type 
                    = vlSelf->__Vtask_MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__cs__4408__cs_cacheresp_type;
            } else {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__cacheresp_type = 0U;
            }
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__memreq_type = 0U;
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__cacheresp_type = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__memreq_type 
                = ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))
                    ? 1U : 0U);
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
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__memreq_type = 0U;
    }
    if ((0x10U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__cacheresp_type = 0U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__memreq_type = 0U;
    } else if ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__cacheresp_type = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__memreq_type = 0U;
        } else if ((2U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))) {
            if ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))) {
                vlSelf->__Vtask_MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__cs__4474__cs_cacheresp_type 
                    = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__cachereq_type_reg_out;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__cacheresp_type 
                    = vlSelf->__Vtask_MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__cs__4474__cs_cacheresp_type;
            } else {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__cacheresp_type = 0U;
            }
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__memreq_type = 0U;
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__cacheresp_type = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__memreq_type 
                = ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))
                    ? 1U : 0U);
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
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__memreq_type = 0U;
    }
    if ((0x10U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__cacheresp_type = 0U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__memreq_type = 0U;
    } else if ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__cacheresp_type = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__memreq_type = 0U;
        } else if ((2U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))) {
            if ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))) {
                vlSelf->__Vtask_MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__cs__4540__cs_cacheresp_type 
                    = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__cachereq_type_reg_out;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__cacheresp_type 
                    = vlSelf->__Vtask_MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__cs__4540__cs_cacheresp_type;
            } else {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__cacheresp_type = 0U;
            }
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__memreq_type = 0U;
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__cacheresp_type = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__memreq_type 
                = ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))
                    ? 1U : 0U);
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
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__memreq_type = 0U;
    }
    if ((0x10U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__cacheresp_type = 0U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__memreq_type = 0U;
    } else if ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))) {
        if ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__cacheresp_type = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__memreq_type = 0U;
        } else if ((2U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))) {
            if ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))) {
                vlSelf->__Vtask_MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__cs__4606__cs_cacheresp_type 
                    = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__cachereq_type_reg_out;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__cacheresp_type 
                    = vlSelf->__Vtask_MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__cs__4606__cs_cacheresp_type;
            } else {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__cacheresp_type = 0U;
            }
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__memreq_type = 0U;
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__cacheresp_type = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__memreq_type 
                = ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))
                    ? 1U : 0U);
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
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__memreq_type = 0U;
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__wben_mux_sel 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__wben_mux_sel 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__wben_mux_sel 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__wben_mux_sel 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__wben_mux_sel 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__wben_mux_sel 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__wben_mux_sel 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__wben_mux_sel 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__csrw_D 
        = (((((((((0x13U == vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D) 
                  | (0x2073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                 | (0x1073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                | (0x33U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
               | (0x40000033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
              | (0x2000033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
             | (0x7033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
            | (0x6033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
           && ((0x13U != vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D) 
               && ((0x2073U != (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D)) 
                   && (0x1073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D)))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__csrw_D 
        = (((((((((0x13U == vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D) 
                  | (0x2073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                 | (0x1073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                | (0x33U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
               | (0x40000033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
              | (0x2000033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
             | (0x7033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
            | (0x6033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
           && ((0x13U != vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D) 
               && ((0x2073U != (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D)) 
                   && (0x1073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D)))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__csrw_D 
        = (((((((((0x13U == vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D) 
                  | (0x2073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                 | (0x1073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                | (0x33U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
               | (0x40000033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
              | (0x2000033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
             | (0x7033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
            | (0x6033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
           && ((0x13U != vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D) 
               && ((0x2073U != (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D)) 
                   && (0x1073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D)))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__write_data_mux_sel 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__write_data_mux_sel 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__write_data_mux_sel 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__write_data_mux_sel 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__write_data_mux_sel 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__write_data_mux_sel 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__write_data_mux_sel 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__write_data_mux_sel 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__add_mux_sel = 0U;
    if (((((((((0x13U == vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D) 
               | (0x2073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
              | (0x1073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
             | (0x33U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
            | (0x40000033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
           | (0x2000033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
          | (0x7033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
         | (0x6033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D)))) {
        if ((0x13U == vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D)) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__op2_sel_D = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 1U;
        } else if ((0x2073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 0xcU;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__op2_sel_D = 2U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 1U;
        } else {
            if ((0x1073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 0xbU;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 1U;
            } else if ((0x33U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 0U;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 1U;
            } else if ((0x40000033U == (0xfe00707fU 
                                        & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 1U;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 1U;
            } else if ((0x2000033U == (0xfe00707fU 
                                       & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 0U;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 2U;
            } else {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D 
                    = ((0x7033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))
                        ? 2U : 3U);
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 1U;
            }
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__op2_sel_D = 0U;
        }
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__rf_wen_D 
            = ((0x13U != vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D) 
               && ((0x2073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D)) 
                   || (0x1073U != (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))));
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imm_type_D = 0U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__br_type_D = 0U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__rs2_en_D 
            = ((0x13U != vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D) 
               && ((0x2073U != (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D)) 
                   && (0x1073U != (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))));
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__rs1_en_D 
            = ((0x13U != vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D) 
               && (0x2073U != (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D)));
    } else {
        if (((((((((0x4033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D)) 
                   | (0x2033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                  | (0x40005033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                 | (0x5033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                | (0x1033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
               | (0x13U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
              | (0x7013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
             | (0x6013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D)))) {
            if ((0x4033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 4U;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__op2_sel_D = 0U;
            } else if ((0x2033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 5U;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__op2_sel_D = 0U;
            } else if ((0x40005033U == (0xfe00707fU 
                                        & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 6U;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__op2_sel_D = 0U;
            } else if ((0x5033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 7U;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__op2_sel_D = 0U;
            } else if ((0x1033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 8U;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__op2_sel_D = 0U;
            } else {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D 
                    = ((0x13U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))
                        ? 0U : ((0x7013U == (0x707fU 
                                             & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))
                                 ? 2U : 3U));
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__op2_sel_D = 1U;
            }
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imm_type_D = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__br_type_D = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__rs2_en_D 
                = ((0x4033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D)) 
                   || ((0x2033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D)) 
                       || ((0x40005033U == (0xfe00707fU 
                                            & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D)) 
                           || ((0x5033U == (0xfe00707fU 
                                            & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D)) 
                               || (0x1033U == (0xfe00707fU 
                                               & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))))));
        } else {
            if (((((((((0x4013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D)) 
                       | (0x2013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                      | (0x40005013U == (0xfe00707fU 
                                         & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                     | (0x5013U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                    | (0x1013U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                   | (0x37U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                  | (0x17U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                 | (0x2003U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D)))) {
                if ((0x4013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) {
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 4U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imm_type_D = 0U;
                } else if ((0x2013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) {
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 5U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imm_type_D = 0U;
                } else if ((0x40005013U == (0xfe00707fU 
                                            & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) {
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 6U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imm_type_D = 0U;
                } else if ((0x5013U == (0xfe00707fU 
                                        & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) {
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 7U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imm_type_D = 0U;
                } else if ((0x1013U == (0xfe00707fU 
                                        & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) {
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 8U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imm_type_D = 0U;
                } else if ((0x37U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) {
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 0xcU;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imm_type_D = 3U;
                } else {
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 0U;
                    if ((0x17U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) {
                        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
                        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imm_type_D = 3U;
                    } else {
                        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = 1U;
                        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imm_type_D = 0U;
                    }
                }
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__op2_sel_D = 1U;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__br_type_D = 0U;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 1U;
            } else {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 0U;
                if (((((((((0x2023U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D)) 
                           | (0x6fU == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                          | (0x67U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                         | (0x1063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                        | (0x63U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                       | (0x5063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                      | (0x4063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                     | (0x6063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D)))) {
                    if ((0x2023U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) {
                        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = 2U;
                        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__op2_sel_D = 1U;
                        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imm_type_D = 1U;
                        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__br_type_D = 0U;
                        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 1U;
                    } else {
                        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
                        if ((0x6fU == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) {
                            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__op2_sel_D = 1U;
                            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imm_type_D = 4U;
                            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__br_type_D = 6U;
                            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 0U;
                        } else if ((0x67U == (0x707fU 
                                              & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) {
                            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__op2_sel_D = 1U;
                            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imm_type_D = 0U;
                            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__br_type_D = 7U;
                            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 0U;
                        } else {
                            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__op2_sel_D = 0U;
                            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imm_type_D = 2U;
                            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__br_type_D 
                                = ((0x1063U == (0x707fU 
                                                & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))
                                    ? 1U : ((0x63U 
                                             == (0x707fU 
                                                 & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))
                                             ? 2U : 
                                            ((0x5063U 
                                              == (0x707fU 
                                                  & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))
                                              ? 3U : 
                                             ((0x4063U 
                                               == (0x707fU 
                                                   & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))
                                               ? 4U
                                               : 5U))));
                            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 1U;
                        }
                    }
                } else {
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__op2_sel_D = 0U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imm_type_D = 0U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__br_type_D = 0U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 0U;
                }
            }
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__rs2_en_D 
                = ((1U & (~ ((((((((0x4013U == (0x707fU 
                                                & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D)) 
                                   | (0x2013U == (0x707fU 
                                                  & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                                  | (0x40005013U == 
                                     (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                                 | (0x5013U == (0xfe00707fU 
                                                & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                                | (0x1013U == (0xfe00707fU 
                                               & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                               | (0x37U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                              | (0x17U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                             | (0x2003U == (0x707fU 
                                            & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))))) 
                   && (((((((((0x2023U == (0x707fU 
                                           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D)) 
                              | (0x6fU == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                             | (0x67U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                            | (0x1063U == (0x707fU 
                                           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                           | (0x63U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                          | (0x5063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                         | (0x4063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                        | (0x6063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                       && ((0x2023U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D)) 
                           || (0x6fU != (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D)))));
        }
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__rf_wen_D 
            = (((((((((0x4033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D)) 
                      | (0x2033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                     | (0x40005033U == (0xfe00707fU 
                                        & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                    | (0x5033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                   | (0x1033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                  | (0x13U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                 | (0x7013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                | (0x6013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
               || (((((((((0x4013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D)) 
                          | (0x2013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                         | (0x40005013U == (0xfe00707fU 
                                            & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                        | (0x5013U == (0xfe00707fU 
                                       & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                       | (0x1013U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                      | (0x37U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                     | (0x17U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                    | (0x2003U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                   || (((((((((0x2023U == (0x707fU 
                                           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D)) 
                              | (0x6fU == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                             | (0x67U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                            | (0x1063U == (0x707fU 
                                           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                           | (0x63U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                          | (0x5063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                         | (0x4063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                        | (0x6063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                       && ((0x2023U != (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D)) 
                           && ((0x6fU == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D)) 
                               || (0x67U == (0x707fU 
                                             & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D)))))));
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__rs1_en_D 
            = (((((((((0x4033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D)) 
                      | (0x2033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                     | (0x40005033U == (0xfe00707fU 
                                        & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                    | (0x5033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                   | (0x1033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                  | (0x13U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                 | (0x7013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                | (0x6013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
               || (((((((((0x4013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D)) 
                          | (0x2013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                         | (0x40005013U == (0xfe00707fU 
                                            & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                        | (0x5013U == (0xfe00707fU 
                                       & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                       | (0x1013U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                      | (0x37U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                     | (0x17U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                    | (0x2003U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                   || (((((((((0x2023U == (0x707fU 
                                           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D)) 
                              | (0x6fU == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                             | (0x67U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                            | (0x1063U == (0x707fU 
                                           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                           | (0x63U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                          | (0x5063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                         | (0x4063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                        | (0x6063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                       && ((0x2023U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D)) 
                           || (0x6fU != (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))))));
    }
    if (((((((((0x13U == vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D) 
               | (0x2073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
              | (0x1073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
             | (0x33U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
            | (0x40000033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
           | (0x2000033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
          | (0x7033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
         | (0x6033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D)))) {
        if ((0x13U == vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D)) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__op2_sel_D = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 1U;
        } else if ((0x2073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 0xcU;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__op2_sel_D = 2U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 1U;
        } else {
            if ((0x1073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 0xbU;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 1U;
            } else if ((0x33U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 0U;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 1U;
            } else if ((0x40000033U == (0xfe00707fU 
                                        & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 1U;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 1U;
            } else if ((0x2000033U == (0xfe00707fU 
                                       & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 0U;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 2U;
            } else {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D 
                    = ((0x7033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))
                        ? 2U : 3U);
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 1U;
            }
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__op2_sel_D = 0U;
        }
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__rf_wen_D 
            = ((0x13U != vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D) 
               && ((0x2073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D)) 
                   || (0x1073U != (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))));
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imm_type_D = 0U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__br_type_D = 0U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__rs2_en_D 
            = ((0x13U != vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D) 
               && ((0x2073U != (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D)) 
                   && (0x1073U != (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))));
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__rs1_en_D 
            = ((0x13U != vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D) 
               && (0x2073U != (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D)));
    } else {
        if (((((((((0x4033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D)) 
                   | (0x2033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                  | (0x40005033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                 | (0x5033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                | (0x1033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
               | (0x13U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
              | (0x7013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
             | (0x6013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D)))) {
            if ((0x4033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 4U;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__op2_sel_D = 0U;
            } else if ((0x2033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 5U;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__op2_sel_D = 0U;
            } else if ((0x40005033U == (0xfe00707fU 
                                        & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 6U;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__op2_sel_D = 0U;
            } else if ((0x5033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 7U;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__op2_sel_D = 0U;
            } else if ((0x1033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 8U;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__op2_sel_D = 0U;
            } else {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D 
                    = ((0x13U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))
                        ? 0U : ((0x7013U == (0x707fU 
                                             & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))
                                 ? 2U : 3U));
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__op2_sel_D = 1U;
            }
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imm_type_D = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__br_type_D = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__rs2_en_D 
                = ((0x4033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D)) 
                   || ((0x2033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D)) 
                       || ((0x40005033U == (0xfe00707fU 
                                            & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D)) 
                           || ((0x5033U == (0xfe00707fU 
                                            & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D)) 
                               || (0x1033U == (0xfe00707fU 
                                               & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))))));
        } else {
            if (((((((((0x4013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D)) 
                       | (0x2013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                      | (0x40005013U == (0xfe00707fU 
                                         & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                     | (0x5013U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                    | (0x1013U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                   | (0x37U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                  | (0x17U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                 | (0x2003U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D)))) {
                if ((0x4013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) {
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 4U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imm_type_D = 0U;
                } else if ((0x2013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) {
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 5U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imm_type_D = 0U;
                } else if ((0x40005013U == (0xfe00707fU 
                                            & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) {
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 6U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imm_type_D = 0U;
                } else if ((0x5013U == (0xfe00707fU 
                                        & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) {
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 7U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imm_type_D = 0U;
                } else if ((0x1013U == (0xfe00707fU 
                                        & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) {
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 8U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imm_type_D = 0U;
                } else if ((0x37U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) {
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 0xcU;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imm_type_D = 3U;
                } else {
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 0U;
                    if ((0x17U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) {
                        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
                        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imm_type_D = 3U;
                    } else {
                        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = 1U;
                        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imm_type_D = 0U;
                    }
                }
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__op2_sel_D = 1U;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__br_type_D = 0U;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 1U;
            } else {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 0U;
                if (((((((((0x2023U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D)) 
                           | (0x6fU == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                          | (0x67U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                         | (0x1063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                        | (0x63U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                       | (0x5063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                      | (0x4063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                     | (0x6063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D)))) {
                    if ((0x2023U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) {
                        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = 2U;
                        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__op2_sel_D = 1U;
                        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imm_type_D = 1U;
                        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__br_type_D = 0U;
                        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 1U;
                    } else {
                        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
                        if ((0x6fU == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) {
                            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__op2_sel_D = 1U;
                            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imm_type_D = 4U;
                            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__br_type_D = 6U;
                            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 0U;
                        } else if ((0x67U == (0x707fU 
                                              & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) {
                            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__op2_sel_D = 1U;
                            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imm_type_D = 0U;
                            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__br_type_D = 7U;
                            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 0U;
                        } else {
                            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__op2_sel_D = 0U;
                            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imm_type_D = 2U;
                            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__br_type_D 
                                = ((0x1063U == (0x707fU 
                                                & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))
                                    ? 1U : ((0x63U 
                                             == (0x707fU 
                                                 & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))
                                             ? 2U : 
                                            ((0x5063U 
                                              == (0x707fU 
                                                  & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))
                                              ? 3U : 
                                             ((0x4063U 
                                               == (0x707fU 
                                                   & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))
                                               ? 4U
                                               : 5U))));
                            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 1U;
                        }
                    }
                } else {
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__op2_sel_D = 0U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imm_type_D = 0U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__br_type_D = 0U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 0U;
                }
            }
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__rs2_en_D 
                = ((1U & (~ ((((((((0x4013U == (0x707fU 
                                                & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D)) 
                                   | (0x2013U == (0x707fU 
                                                  & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                                  | (0x40005013U == 
                                     (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                                 | (0x5013U == (0xfe00707fU 
                                                & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                                | (0x1013U == (0xfe00707fU 
                                               & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                               | (0x37U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                              | (0x17U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                             | (0x2003U == (0x707fU 
                                            & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))))) 
                   && (((((((((0x2023U == (0x707fU 
                                           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D)) 
                              | (0x6fU == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                             | (0x67U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                            | (0x1063U == (0x707fU 
                                           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                           | (0x63U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                          | (0x5063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                         | (0x4063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                        | (0x6063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                       && ((0x2023U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D)) 
                           || (0x6fU != (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D)))));
        }
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__rf_wen_D 
            = (((((((((0x4033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D)) 
                      | (0x2033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                     | (0x40005033U == (0xfe00707fU 
                                        & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                    | (0x5033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                   | (0x1033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                  | (0x13U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                 | (0x7013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                | (0x6013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
               || (((((((((0x4013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D)) 
                          | (0x2013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                         | (0x40005013U == (0xfe00707fU 
                                            & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                        | (0x5013U == (0xfe00707fU 
                                       & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                       | (0x1013U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                      | (0x37U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                     | (0x17U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                    | (0x2003U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                   || (((((((((0x2023U == (0x707fU 
                                           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D)) 
                              | (0x6fU == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                             | (0x67U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                            | (0x1063U == (0x707fU 
                                           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                           | (0x63U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                          | (0x5063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                         | (0x4063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                        | (0x6063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                       && ((0x2023U != (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D)) 
                           && ((0x6fU == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D)) 
                               || (0x67U == (0x707fU 
                                             & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D)))))));
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__rs1_en_D 
            = (((((((((0x4033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D)) 
                      | (0x2033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                     | (0x40005033U == (0xfe00707fU 
                                        & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                    | (0x5033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                   | (0x1033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                  | (0x13U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                 | (0x7013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                | (0x6013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
               || (((((((((0x4013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D)) 
                          | (0x2013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                         | (0x40005013U == (0xfe00707fU 
                                            & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                        | (0x5013U == (0xfe00707fU 
                                       & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                       | (0x1013U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                      | (0x37U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                     | (0x17U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                    | (0x2003U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                   || (((((((((0x2023U == (0x707fU 
                                           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D)) 
                              | (0x6fU == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                             | (0x67U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                            | (0x1063U == (0x707fU 
                                           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                           | (0x63U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                          | (0x5063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                         | (0x4063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                        | (0x6063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                       && ((0x2023U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D)) 
                           || (0x6fU != (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))))));
    }
    if (((((((((0x13U == vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D) 
               | (0x2073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
              | (0x1073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
             | (0x33U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
            | (0x40000033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
           | (0x2000033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
          | (0x7033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
         | (0x6033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D)))) {
        if ((0x13U == vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D)) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__op2_sel_D = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 1U;
        } else if ((0x2073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 0xcU;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__op2_sel_D = 2U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 1U;
        } else {
            if ((0x1073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 0xbU;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 1U;
            } else if ((0x33U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 0U;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 1U;
            } else if ((0x40000033U == (0xfe00707fU 
                                        & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 1U;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 1U;
            } else if ((0x2000033U == (0xfe00707fU 
                                       & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 0U;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 2U;
            } else {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D 
                    = ((0x7033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))
                        ? 2U : 3U);
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 1U;
            }
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__op2_sel_D = 0U;
        }
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__rf_wen_D 
            = ((0x13U != vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D) 
               && ((0x2073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D)) 
                   || (0x1073U != (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))));
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imm_type_D = 0U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__br_type_D = 0U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__rs2_en_D 
            = ((0x13U != vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D) 
               && ((0x2073U != (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D)) 
                   && (0x1073U != (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))));
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__rs1_en_D 
            = ((0x13U != vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D) 
               && (0x2073U != (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D)));
    } else {
        if (((((((((0x4033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D)) 
                   | (0x2033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                  | (0x40005033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                 | (0x5033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                | (0x1033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
               | (0x13U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
              | (0x7013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
             | (0x6013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D)))) {
            if ((0x4033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 4U;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__op2_sel_D = 0U;
            } else if ((0x2033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 5U;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__op2_sel_D = 0U;
            } else if ((0x40005033U == (0xfe00707fU 
                                        & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 6U;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__op2_sel_D = 0U;
            } else if ((0x5033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 7U;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__op2_sel_D = 0U;
            } else if ((0x1033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 8U;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__op2_sel_D = 0U;
            } else {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D 
                    = ((0x13U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))
                        ? 0U : ((0x7013U == (0x707fU 
                                             & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))
                                 ? 2U : 3U));
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__op2_sel_D = 1U;
            }
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imm_type_D = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__br_type_D = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__rs2_en_D 
                = ((0x4033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D)) 
                   || ((0x2033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D)) 
                       || ((0x40005033U == (0xfe00707fU 
                                            & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D)) 
                           || ((0x5033U == (0xfe00707fU 
                                            & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D)) 
                               || (0x1033U == (0xfe00707fU 
                                               & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))))));
        } else {
            if (((((((((0x4013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D)) 
                       | (0x2013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                      | (0x40005013U == (0xfe00707fU 
                                         & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                     | (0x5013U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                    | (0x1013U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                   | (0x37U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                  | (0x17U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                 | (0x2003U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D)))) {
                if ((0x4013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) {
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 4U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imm_type_D = 0U;
                } else if ((0x2013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) {
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 5U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imm_type_D = 0U;
                } else if ((0x40005013U == (0xfe00707fU 
                                            & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) {
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 6U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imm_type_D = 0U;
                } else if ((0x5013U == (0xfe00707fU 
                                        & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) {
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 7U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imm_type_D = 0U;
                } else if ((0x1013U == (0xfe00707fU 
                                        & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) {
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 8U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imm_type_D = 0U;
                } else if ((0x37U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) {
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 0xcU;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imm_type_D = 3U;
                } else {
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 0U;
                    if ((0x17U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) {
                        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
                        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imm_type_D = 3U;
                    } else {
                        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = 1U;
                        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imm_type_D = 0U;
                    }
                }
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__op2_sel_D = 1U;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__br_type_D = 0U;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 1U;
            } else {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 0U;
                if (((((((((0x2023U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D)) 
                           | (0x6fU == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                          | (0x67U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                         | (0x1063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                        | (0x63U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                       | (0x5063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                      | (0x4063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                     | (0x6063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D)))) {
                    if ((0x2023U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) {
                        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = 2U;
                        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__op2_sel_D = 1U;
                        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imm_type_D = 1U;
                        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__br_type_D = 0U;
                        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 1U;
                    } else {
                        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
                        if ((0x6fU == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) {
                            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__op2_sel_D = 1U;
                            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imm_type_D = 4U;
                            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__br_type_D = 6U;
                            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 0U;
                        } else if ((0x67U == (0x707fU 
                                              & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) {
                            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__op2_sel_D = 1U;
                            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imm_type_D = 0U;
                            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__br_type_D = 7U;
                            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 0U;
                        } else {
                            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__op2_sel_D = 0U;
                            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imm_type_D = 2U;
                            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__br_type_D 
                                = ((0x1063U == (0x707fU 
                                                & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))
                                    ? 1U : ((0x63U 
                                             == (0x707fU 
                                                 & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))
                                             ? 2U : 
                                            ((0x5063U 
                                              == (0x707fU 
                                                  & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))
                                              ? 3U : 
                                             ((0x4063U 
                                               == (0x707fU 
                                                   & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))
                                               ? 4U
                                               : 5U))));
                            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 1U;
                        }
                    }
                } else {
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__op2_sel_D = 0U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imm_type_D = 0U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__br_type_D = 0U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 0U;
                }
            }
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__rs2_en_D 
                = ((1U & (~ ((((((((0x4013U == (0x707fU 
                                                & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D)) 
                                   | (0x2013U == (0x707fU 
                                                  & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                                  | (0x40005013U == 
                                     (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                                 | (0x5013U == (0xfe00707fU 
                                                & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                                | (0x1013U == (0xfe00707fU 
                                               & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                               | (0x37U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                              | (0x17U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                             | (0x2003U == (0x707fU 
                                            & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))))) 
                   && (((((((((0x2023U == (0x707fU 
                                           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D)) 
                              | (0x6fU == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                             | (0x67U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                            | (0x1063U == (0x707fU 
                                           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                           | (0x63U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                          | (0x5063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                         | (0x4063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                        | (0x6063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                       && ((0x2023U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D)) 
                           || (0x6fU != (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D)))));
        }
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__rf_wen_D 
            = (((((((((0x4033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D)) 
                      | (0x2033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                     | (0x40005033U == (0xfe00707fU 
                                        & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                    | (0x5033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                   | (0x1033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                  | (0x13U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                 | (0x7013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                | (0x6013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
               || (((((((((0x4013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D)) 
                          | (0x2013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                         | (0x40005013U == (0xfe00707fU 
                                            & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                        | (0x5013U == (0xfe00707fU 
                                       & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                       | (0x1013U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                      | (0x37U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                     | (0x17U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                    | (0x2003U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                   || (((((((((0x2023U == (0x707fU 
                                           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D)) 
                              | (0x6fU == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                             | (0x67U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                            | (0x1063U == (0x707fU 
                                           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                           | (0x63U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                          | (0x5063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                         | (0x4063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                        | (0x6063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                       && ((0x2023U != (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D)) 
                           && ((0x6fU == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D)) 
                               || (0x67U == (0x707fU 
                                             & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D)))))));
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__rs1_en_D 
            = (((((((((0x4033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D)) 
                      | (0x2033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                     | (0x40005033U == (0xfe00707fU 
                                        & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                    | (0x5033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                   | (0x1033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                  | (0x13U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                 | (0x7013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                | (0x6013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
               || (((((((((0x4013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D)) 
                          | (0x2013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                         | (0x40005013U == (0xfe00707fU 
                                            & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                        | (0x5013U == (0xfe00707fU 
                                       & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                       | (0x1013U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                      | (0x37U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                     | (0x17U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                    | (0x2003U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                   || (((((((((0x2023U == (0x707fU 
                                           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D)) 
                              | (0x6fU == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                             | (0x67U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                            | (0x1063U == (0x707fU 
                                           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                           | (0x63U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                          | (0x5063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                         | (0x4063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                        | (0x6063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                       && ((0x2023U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D)) 
                           || (0x6fU != (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))))));
    }
    if (((((((((0x13U == vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D) 
               | (0x2073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
              | (0x1073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
             | (0x33U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
            | (0x40000033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
           | (0x2000033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
          | (0x7033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
         | (0x6033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D)))) {
        if ((0x13U == vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D)) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__op2_sel_D = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 1U;
        } else if ((0x2073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 0xcU;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__op2_sel_D = 2U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 1U;
        } else {
            if ((0x1073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 0xbU;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 1U;
            } else if ((0x33U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 0U;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 1U;
            } else if ((0x40000033U == (0xfe00707fU 
                                        & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 1U;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 1U;
            } else if ((0x2000033U == (0xfe00707fU 
                                       & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 0U;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 2U;
            } else {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D 
                    = ((0x7033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))
                        ? 2U : 3U);
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 1U;
            }
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__op2_sel_D = 0U;
        }
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__rf_wen_D 
            = ((0x13U != vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D) 
               && ((0x2073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D)) 
                   || (0x1073U != (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))));
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imm_type_D = 0U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__br_type_D = 0U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__rs2_en_D 
            = ((0x13U != vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D) 
               && ((0x2073U != (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D)) 
                   && (0x1073U != (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))));
    } else {
        if (((((((((0x4033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D)) 
                   | (0x2033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                  | (0x40005033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                 | (0x5033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                | (0x1033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
               | (0x13U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
              | (0x7013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
             | (0x6013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D)))) {
            if ((0x4033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 4U;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__op2_sel_D = 0U;
            } else if ((0x2033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 5U;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__op2_sel_D = 0U;
            } else if ((0x40005033U == (0xfe00707fU 
                                        & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 6U;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__op2_sel_D = 0U;
            } else if ((0x5033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 7U;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__op2_sel_D = 0U;
            } else if ((0x1033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 8U;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__op2_sel_D = 0U;
            } else {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D 
                    = ((0x13U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))
                        ? 0U : ((0x7013U == (0x707fU 
                                             & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))
                                 ? 2U : 3U));
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__op2_sel_D = 1U;
            }
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imm_type_D = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__br_type_D = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 1U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__rs2_en_D 
                = ((0x4033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D)) 
                   || ((0x2033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D)) 
                       || ((0x40005033U == (0xfe00707fU 
                                            & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D)) 
                           || ((0x5033U == (0xfe00707fU 
                                            & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D)) 
                               || (0x1033U == (0xfe00707fU 
                                               & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))))));
        } else {
            if (((((((((0x4013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D)) 
                       | (0x2013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                      | (0x40005013U == (0xfe00707fU 
                                         & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                     | (0x5013U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                    | (0x1013U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                   | (0x37U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                  | (0x17U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                 | (0x2003U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D)))) {
                if ((0x4013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) {
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 4U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imm_type_D = 0U;
                } else if ((0x2013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) {
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 5U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imm_type_D = 0U;
                } else if ((0x40005013U == (0xfe00707fU 
                                            & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) {
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 6U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imm_type_D = 0U;
                } else if ((0x5013U == (0xfe00707fU 
                                        & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) {
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 7U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imm_type_D = 0U;
                } else if ((0x1013U == (0xfe00707fU 
                                        & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) {
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 8U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imm_type_D = 0U;
                } else if ((0x37U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) {
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 0xcU;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imm_type_D = 3U;
                } else {
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 0U;
                    if ((0x17U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) {
                        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
                        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imm_type_D = 3U;
                    } else {
                        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = 1U;
                        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imm_type_D = 0U;
                    }
                }
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__op2_sel_D = 1U;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__br_type_D = 0U;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 1U;
            } else {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__alu_fn_D = 0U;
                if (((((((((0x2023U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D)) 
                           | (0x6fU == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                          | (0x67U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                         | (0x1063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                        | (0x63U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                       | (0x5063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                      | (0x4063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                     | (0x6063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D)))) {
                    if ((0x2023U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) {
                        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = 2U;
                        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__op2_sel_D = 1U;
                        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imm_type_D = 1U;
                        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__br_type_D = 0U;
                        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 1U;
                    } else {
                        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
                        if ((0x6fU == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) {
                            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__op2_sel_D = 1U;
                            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imm_type_D = 4U;
                            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__br_type_D = 6U;
                            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 0U;
                        } else if ((0x67U == (0x707fU 
                                              & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) {
                            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__op2_sel_D = 1U;
                            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imm_type_D = 0U;
                            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__br_type_D = 7U;
                            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 0U;
                        } else {
                            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__op2_sel_D = 0U;
                            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imm_type_D = 2U;
                            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__br_type_D 
                                = ((0x1063U == (0x707fU 
                                                & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))
                                    ? 1U : ((0x63U 
                                             == (0x707fU 
                                                 & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))
                                             ? 2U : 
                                            ((0x5063U 
                                              == (0x707fU 
                                                  & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))
                                              ? 3U : 
                                             ((0x4063U 
                                               == (0x707fU 
                                                   & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))
                                               ? 4U
                                               : 5U))));
                            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 1U;
                        }
                    }
                } else {
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__op2_sel_D = 0U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imm_type_D = 0U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__br_type_D = 0U;
                    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 0U;
                }
            }
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__rs2_en_D 
                = ((1U & (~ ((((((((0x4013U == (0x707fU 
                                                & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D)) 
                                   | (0x2013U == (0x707fU 
                                                  & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                                  | (0x40005013U == 
                                     (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                                 | (0x5013U == (0xfe00707fU 
                                                & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                                | (0x1013U == (0xfe00707fU 
                                               & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                               | (0x37U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                              | (0x17U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                             | (0x2003U == (0x707fU 
                                            & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))))) 
                   && (((((((((0x2023U == (0x707fU 
                                           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D)) 
                              | (0x6fU == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                             | (0x67U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                            | (0x1063U == (0x707fU 
                                           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                           | (0x63U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                          | (0x5063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                         | (0x4063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                        | (0x6063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                       && ((0x2023U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D)) 
                           || (0x6fU != (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D)))));
        }
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__rf_wen_D 
            = (((((((((0x4033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D)) 
                      | (0x2033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                     | (0x40005033U == (0xfe00707fU 
                                        & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                    | (0x5033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                   | (0x1033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                  | (0x13U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                 | (0x7013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                | (0x6013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
               || (((((((((0x4013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D)) 
                          | (0x2013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                         | (0x40005013U == (0xfe00707fU 
                                            & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                        | (0x5013U == (0xfe00707fU 
                                       & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                       | (0x1013U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                      | (0x37U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                     | (0x17U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                    | (0x2003U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                   || (((((((((0x2023U == (0x707fU 
                                           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D)) 
                              | (0x6fU == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                             | (0x67U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                            | (0x1063U == (0x707fU 
                                           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                           | (0x63U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                          | (0x5063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                         | (0x4063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                        | (0x6063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                       && ((0x2023U != (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D)) 
                           && ((0x6fU == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D)) 
                               || (0x67U == (0x707fU 
                                             & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D)))))));
    }
    if ((0U != (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
        if ((1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__add_mux_sel 
                = (1U & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out);
        }
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__add_mux_sel = 0U;
    if ((0U != (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
        if ((1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__add_mux_sel 
                = (1U & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out);
        }
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__add_mux_sel = 0U;
    if ((0U != (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
        if ((1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__add_mux_sel 
                = (1U & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out);
        }
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__add_mux_sel = 0U;
    if ((0U != (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
        if ((1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__add_mux_sel 
                = (1U & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out);
        }
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__data_array_wen 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && (1U & ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                             ? ((2U 
                                                 & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                                 ? (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state)
                                                 : 
                                                (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state)))
                                             : ((1U 
                                                 & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                    >> 1U)) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__data_array_wen 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && (1U & ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                             ? ((2U 
                                                 & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                                 ? (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state)
                                                 : 
                                                (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state)))
                                             : ((1U 
                                                 & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                    >> 1U)) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__data_array_wen 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && (1U & ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                             ? ((2U 
                                                 & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                                 ? (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state)
                                                 : 
                                                (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state)))
                                             : ((1U 
                                                 & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                    >> 1U)) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__data_array_wen 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && (1U & ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                             ? ((2U 
                                                 & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                                 ? (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state)
                                                 : 
                                                (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state)))
                                             : ((1U 
                                                 & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                    >> 1U)) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__data_array_wen 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && (1U & ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))
                                             ? ((2U 
                                                 & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))
                                                 ? (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state)
                                                 : 
                                                (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state)))
                                             : ((1U 
                                                 & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                    >> 1U)) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__data_array_wen 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && (1U & ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))
                                             ? ((2U 
                                                 & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))
                                                 ? (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state)
                                                 : 
                                                (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state)))
                                             : ((1U 
                                                 & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                    >> 1U)) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__data_array_wen 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && (1U & ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))
                                             ? ((2U 
                                                 & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))
                                                 ? (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state)
                                                 : 
                                                (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state)))
                                             : ((1U 
                                                 & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                    >> 1U)) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__data_array_wen 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && (1U & ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))
                                             ? ((2U 
                                                 & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))
                                                 ? (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state)
                                                 : 
                                                (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state)))
                                             : ((1U 
                                                 & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                    >> 1U)) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__csrw_D 
        = (((((((((0x13U == vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D) 
                  | (0x2073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                 | (0x1073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                | (0x33U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
               | (0x40000033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
              | (0x2000033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
             | (0x7033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
            | (0x6033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
           && ((0x13U != vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D) 
               && ((0x2073U != (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D)) 
                   && (0x1073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D)))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__op1_sel_D 
        = (((((((((0x13U == vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D) 
                  | (0x2073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                 | (0x1073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                | (0x33U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
               | (0x40000033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
              | (0x2000033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
             | (0x7033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
            | (0x6033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
           || (((((((((0x4033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D)) 
                      | (0x2033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                     | (0x40005033U == (0xfe00707fU 
                                        & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                    | (0x5033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                   | (0x1033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                  | (0x13U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                 | (0x7013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                | (0x6013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
               || (((((((((0x4013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D)) 
                          | (0x2013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                         | (0x40005013U == (0xfe00707fU 
                                            & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                        | (0x5013U == (0xfe00707fU 
                                       & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                       | (0x1013U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                      | (0x37U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                     | (0x17U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                    | (0x2003U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D)))
                    ? ((0x4013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D)) 
                       || ((0x2013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D)) 
                           || ((0x40005013U == (0xfe00707fU 
                                                & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D)) 
                               || ((0x5013U == (0xfe00707fU 
                                                & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D)) 
                                   || ((0x1013U == 
                                        (0xfe00707fU 
                                         & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D)) 
                                       || ((0x37U == 
                                            (0x7fU 
                                             & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D)) 
                                           || (0x17U 
                                               != (0x7fU 
                                                   & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))))))))
                    : ((((((((0x2023U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D)) 
                             | (0x6fU == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                            | (0x67U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                           | (0x1063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                          | (0x63U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                         | (0x5063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                        | (0x4063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                       | (0x6063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__op1_sel_D 
        = (((((((((0x13U == vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D) 
                  | (0x2073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                 | (0x1073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                | (0x33U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
               | (0x40000033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
              | (0x2000033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
             | (0x7033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
            | (0x6033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
           || (((((((((0x4033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D)) 
                      | (0x2033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                     | (0x40005033U == (0xfe00707fU 
                                        & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                    | (0x5033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                   | (0x1033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                  | (0x13U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                 | (0x7013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                | (0x6013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
               || (((((((((0x4013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D)) 
                          | (0x2013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                         | (0x40005013U == (0xfe00707fU 
                                            & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                        | (0x5013U == (0xfe00707fU 
                                       & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                       | (0x1013U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                      | (0x37U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                     | (0x17U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                    | (0x2003U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D)))
                    ? ((0x4013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D)) 
                       || ((0x2013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D)) 
                           || ((0x40005013U == (0xfe00707fU 
                                                & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D)) 
                               || ((0x5013U == (0xfe00707fU 
                                                & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D)) 
                                   || ((0x1013U == 
                                        (0xfe00707fU 
                                         & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D)) 
                                       || ((0x37U == 
                                            (0x7fU 
                                             & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D)) 
                                           || (0x17U 
                                               != (0x7fU 
                                                   & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))))))))
                    : ((((((((0x2023U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D)) 
                             | (0x6fU == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                            | (0x67U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                           | (0x1063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                          | (0x63U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                         | (0x5063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                        | (0x4063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                       | (0x6063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__op1_sel_D 
        = (((((((((0x13U == vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D) 
                  | (0x2073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                 | (0x1073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                | (0x33U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
               | (0x40000033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
              | (0x2000033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
             | (0x7033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
            | (0x6033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
           || (((((((((0x4033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D)) 
                      | (0x2033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                     | (0x40005033U == (0xfe00707fU 
                                        & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                    | (0x5033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                   | (0x1033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                  | (0x13U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                 | (0x7013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                | (0x6013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
               || (((((((((0x4013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D)) 
                          | (0x2013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                         | (0x40005013U == (0xfe00707fU 
                                            & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                        | (0x5013U == (0xfe00707fU 
                                       & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                       | (0x1013U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                      | (0x37U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                     | (0x17U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                    | (0x2003U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D)))
                    ? ((0x4013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D)) 
                       || ((0x2013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D)) 
                           || ((0x40005013U == (0xfe00707fU 
                                                & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D)) 
                               || ((0x5013U == (0xfe00707fU 
                                                & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D)) 
                                   || ((0x1013U == 
                                        (0xfe00707fU 
                                         & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D)) 
                                       || ((0x37U == 
                                            (0x7fU 
                                             & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D)) 
                                           || (0x17U 
                                               != (0x7fU 
                                                   & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))))))))
                    : ((((((((0x2023U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D)) 
                             | (0x6fU == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                            | (0x67U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                           | (0x1063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                          | (0x63U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                         | (0x5063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                        | (0x4063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                       | (0x6063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__op1_sel_D 
        = (((((((((0x13U == vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D) 
                  | (0x2073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                 | (0x1073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                | (0x33U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
               | (0x40000033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
              | (0x2000033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
             | (0x7033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
            | (0x6033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
           || (((((((((0x4033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D)) 
                      | (0x2033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                     | (0x40005033U == (0xfe00707fU 
                                        & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                    | (0x5033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                   | (0x1033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                  | (0x13U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                 | (0x7013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                | (0x6013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
               || (((((((((0x4013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D)) 
                          | (0x2013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                         | (0x40005013U == (0xfe00707fU 
                                            & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                        | (0x5013U == (0xfe00707fU 
                                       & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                       | (0x1013U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                      | (0x37U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                     | (0x17U == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                    | (0x2003U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D)))
                    ? ((0x4013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D)) 
                       || ((0x2013U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D)) 
                           || ((0x40005013U == (0xfe00707fU 
                                                & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D)) 
                               || ((0x5013U == (0xfe00707fU 
                                                & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D)) 
                                   || ((0x1013U == 
                                        (0xfe00707fU 
                                         & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D)) 
                                       || ((0x37U == 
                                            (0x7fU 
                                             & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D)) 
                                           || (0x17U 
                                               != (0x7fU 
                                                   & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))))))))
                    : ((((((((0x2023U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D)) 
                             | (0x6fU == (0x7fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                            | (0x67U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                           | (0x1063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                          | (0x63U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                         | (0x5063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                        | (0x4063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                       | (0x6063U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memresp2netmsg_ostream_msg[0U][0U] 
        = vlSelf->dmem_respstream_msg[0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memresp2netmsg_ostream_msg[0U][1U] 
        = vlSelf->dmem_respstream_msg[1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memresp2netmsg_ostream_msg[0U][2U] 
        = vlSelf->dmem_respstream_msg[2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memresp2netmsg_ostream_msg[0U][3U] 
        = vlSelf->dmem_respstream_msg[3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memresp2netmsg_ostream_msg[0U][4U] 
        = ((0x30000000U & (vlSelf->dmem_respstream_msg[4U] 
                           << 0x12U)) | ((0xc000000U 
                                          & (vlSelf->dmem_respstream_msg[4U] 
                                             << 0xeU)) 
                                         | vlSelf->dmem_respstream_msg[4U]));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memresp2netmsg_ostream_msg[0U][0U] 
        = vlSelf->imem_respstream_msg[0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memresp2netmsg_ostream_msg[0U][1U] 
        = vlSelf->imem_respstream_msg[1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memresp2netmsg_ostream_msg[0U][2U] 
        = vlSelf->imem_respstream_msg[2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memresp2netmsg_ostream_msg[0U][3U] 
        = vlSelf->imem_respstream_msg[3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memresp2netmsg_ostream_msg[0U][4U] 
        = ((0x30000000U & (vlSelf->imem_respstream_msg[4U] 
                           << 0x12U)) | ((0xc000000U 
                                          & (vlSelf->imem_respstream_msg[4U] 
                                             << 0xeU)) 
                                         | vlSelf->imem_respstream_msg[4U]));
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__b_zero 
        = (0U == vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out);
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__b_lsb 
        = (1U & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out);
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__shamt = 0U;
    if (MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__b_zero) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__shamt = 0U;
    } else if (MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__b_lsb) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__shamt = 1U;
    } else {
        if ((1U & (~ vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out))) {
            MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                = (0x1fU & ((IData)(1U) + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
            if ((1U & (~ (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                          >> 1U)))) {
                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                    = (0x1fU & ((IData)(1U) + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                if ((1U & (~ (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                              >> 2U)))) {
                    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                        = (0x1fU & ((IData)(1U) + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                    if ((1U & (~ (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                  >> 3U)))) {
                        MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                            = (0x1fU & ((IData)(1U) 
                                        + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                        if ((1U & (~ (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                      >> 4U)))) {
                            MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                = (0x1fU & ((IData)(1U) 
                                            + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                            if ((1U & (~ (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                          >> 5U)))) {
                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                    = (0x1fU & ((IData)(1U) 
                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                if ((1U & (~ (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                              >> 6U)))) {
                                    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                        = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                    if ((1U & (~ (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                  >> 7U)))) {
                                        MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                            = (0x1fU 
                                               & ((IData)(1U) 
                                                  + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                        if ((1U & (~ 
                                                   (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                    >> 8U)))) {
                                            MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                = (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                     >> 9U)))) {
                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                    = 
                                                    (0x1fU 
                                                     & ((IData)(1U) 
                                                        + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                         >> 0xaU)))) {
                                                    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                             >> 0xbU)))) {
                                                        MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                 >> 0xcU)))) {
                                                            MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                = 
                                                                (0x1fU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                     >> 0xdU)))) {
                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                    = 
                                                                    (0x1fU 
                                                                     & ((IData)(1U) 
                                                                        + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                         >> 0xeU)))) {
                                                                    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                        = 
                                                                        (0x1fU 
                                                                         & ((IData)(1U) 
                                                                            + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                             >> 0xfU)))) {
                                                                        MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                            = 
                                                                            (0x1fU 
                                                                             & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x10U)))) {
                                                                            MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                            if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x11U)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x12U)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x13U)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x14U)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x15U)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x16U)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x17U)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x18U)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x19U)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x1aU)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x1bU)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x1cU)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x1dU)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x1eU)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x1fU)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__shamt 
            = MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k;
    }
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__b_zero 
        = (0U == vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out);
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__b_lsb 
        = (1U & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out);
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__shamt = 0U;
    if (MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__b_zero) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__shamt = 0U;
    } else if (MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__b_lsb) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__shamt = 1U;
    } else {
        if ((1U & (~ vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out))) {
            MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                = (0x1fU & ((IData)(1U) + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
            if ((1U & (~ (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                          >> 1U)))) {
                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                    = (0x1fU & ((IData)(1U) + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                if ((1U & (~ (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                              >> 2U)))) {
                    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                        = (0x1fU & ((IData)(1U) + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                    if ((1U & (~ (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                  >> 3U)))) {
                        MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                            = (0x1fU & ((IData)(1U) 
                                        + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                        if ((1U & (~ (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                      >> 4U)))) {
                            MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                = (0x1fU & ((IData)(1U) 
                                            + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                            if ((1U & (~ (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                          >> 5U)))) {
                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                    = (0x1fU & ((IData)(1U) 
                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                if ((1U & (~ (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                              >> 6U)))) {
                                    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                        = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                    if ((1U & (~ (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                  >> 7U)))) {
                                        MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                            = (0x1fU 
                                               & ((IData)(1U) 
                                                  + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                        if ((1U & (~ 
                                                   (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                    >> 8U)))) {
                                            MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                = (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                     >> 9U)))) {
                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                    = 
                                                    (0x1fU 
                                                     & ((IData)(1U) 
                                                        + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                         >> 0xaU)))) {
                                                    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                             >> 0xbU)))) {
                                                        MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                 >> 0xcU)))) {
                                                            MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                = 
                                                                (0x1fU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                     >> 0xdU)))) {
                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                    = 
                                                                    (0x1fU 
                                                                     & ((IData)(1U) 
                                                                        + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                         >> 0xeU)))) {
                                                                    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                        = 
                                                                        (0x1fU 
                                                                         & ((IData)(1U) 
                                                                            + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                             >> 0xfU)))) {
                                                                        MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                            = 
                                                                            (0x1fU 
                                                                             & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x10U)))) {
                                                                            MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                            if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x11U)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x12U)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x13U)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x14U)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x15U)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x16U)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x17U)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x18U)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x19U)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x1aU)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x1bU)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x1cU)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x1dU)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x1eU)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x1fU)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__shamt 
            = MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k;
    }
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__b_zero 
        = (0U == vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out);
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__b_lsb 
        = (1U & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out);
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__shamt = 0U;
    if (MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__b_zero) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__shamt = 0U;
    } else if (MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__b_lsb) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__shamt = 1U;
    } else {
        if ((1U & (~ vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out))) {
            MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                = (0x1fU & ((IData)(1U) + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
            if ((1U & (~ (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                          >> 1U)))) {
                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                    = (0x1fU & ((IData)(1U) + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                if ((1U & (~ (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                              >> 2U)))) {
                    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                        = (0x1fU & ((IData)(1U) + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                    if ((1U & (~ (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                  >> 3U)))) {
                        MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                            = (0x1fU & ((IData)(1U) 
                                        + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                        if ((1U & (~ (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                      >> 4U)))) {
                            MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                = (0x1fU & ((IData)(1U) 
                                            + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                            if ((1U & (~ (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                          >> 5U)))) {
                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                    = (0x1fU & ((IData)(1U) 
                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                if ((1U & (~ (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                              >> 6U)))) {
                                    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                        = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                    if ((1U & (~ (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                  >> 7U)))) {
                                        MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                            = (0x1fU 
                                               & ((IData)(1U) 
                                                  + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                        if ((1U & (~ 
                                                   (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                    >> 8U)))) {
                                            MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                = (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                     >> 9U)))) {
                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                    = 
                                                    (0x1fU 
                                                     & ((IData)(1U) 
                                                        + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                         >> 0xaU)))) {
                                                    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                             >> 0xbU)))) {
                                                        MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                 >> 0xcU)))) {
                                                            MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                = 
                                                                (0x1fU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                     >> 0xdU)))) {
                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                    = 
                                                                    (0x1fU 
                                                                     & ((IData)(1U) 
                                                                        + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                         >> 0xeU)))) {
                                                                    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                        = 
                                                                        (0x1fU 
                                                                         & ((IData)(1U) 
                                                                            + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                             >> 0xfU)))) {
                                                                        MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                            = 
                                                                            (0x1fU 
                                                                             & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x10U)))) {
                                                                            MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                            if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x11U)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x12U)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x13U)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x14U)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x15U)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x16U)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x17U)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x18U)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x19U)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x1aU)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x1bU)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x1cU)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x1dU)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x1eU)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x1fU)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__shamt 
            = MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k;
    }
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__b_zero 
        = (0U == vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out);
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__b_lsb 
        = (1U & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out);
    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k = 0U;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__shamt = 0U;
    if (MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__b_zero) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__shamt = 0U;
    } else if (MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__b_lsb) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__shamt = 1U;
    } else {
        if ((1U & (~ vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out))) {
            MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                = (0x1fU & ((IData)(1U) + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
            if ((1U & (~ (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                          >> 1U)))) {
                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                    = (0x1fU & ((IData)(1U) + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                if ((1U & (~ (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                              >> 2U)))) {
                    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                        = (0x1fU & ((IData)(1U) + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                    if ((1U & (~ (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                  >> 3U)))) {
                        MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                            = (0x1fU & ((IData)(1U) 
                                        + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                        if ((1U & (~ (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                      >> 4U)))) {
                            MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                = (0x1fU & ((IData)(1U) 
                                            + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                            if ((1U & (~ (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                          >> 5U)))) {
                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                    = (0x1fU & ((IData)(1U) 
                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                if ((1U & (~ (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                              >> 6U)))) {
                                    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                        = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                    if ((1U & (~ (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                  >> 7U)))) {
                                        MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                            = (0x1fU 
                                               & ((IData)(1U) 
                                                  + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                        if ((1U & (~ 
                                                   (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                    >> 8U)))) {
                                            MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                = (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                     >> 9U)))) {
                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                    = 
                                                    (0x1fU 
                                                     & ((IData)(1U) 
                                                        + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                         >> 0xaU)))) {
                                                    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                             >> 0xbU)))) {
                                                        MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                 >> 0xcU)))) {
                                                            MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                = 
                                                                (0x1fU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                     >> 0xdU)))) {
                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                    = 
                                                                    (0x1fU 
                                                                     & ((IData)(1U) 
                                                                        + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                         >> 0xeU)))) {
                                                                    MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                        = 
                                                                        (0x1fU 
                                                                         & ((IData)(1U) 
                                                                            + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                             >> 0xfU)))) {
                                                                        MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                            = 
                                                                            (0x1fU 
                                                                             & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x10U)))) {
                                                                            MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                            if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x11U)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x12U)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x13U)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x14U)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x15U)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x16U)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x17U)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x18U)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x19U)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x1aU)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x1bU)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x1cU)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x1dU)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x1eU)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x1fU)))) {
                                                                                MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__shamt 
            = MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k;
    }
    vlSelf->MultiCoreSys_noparam__DOT____Vcellout__v__proc2mngr_msg[0U] 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)
            ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore
            : ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)
                ? 0U : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__wb_result_W));
    vlSelf->MultiCoreSys_noparam__DOT____Vcellout__v__proc2mngr_msg[1U] 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)
            ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore
            : ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)
                ? 0U : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__wb_result_W));
    vlSelf->MultiCoreSys_noparam__DOT____Vcellout__v__proc2mngr_msg[2U] 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)
            ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore
            : ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)
                ? 0U : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__wb_result_W));
    vlSelf->MultiCoreSys_noparam__DOT____Vcellout__v__proc2mngr_msg[3U] 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)
            ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore
            : ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)
                ? 0U : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__wb_result_W));
    vlSelf->MultiCoreSys_noparam__DOT____Vcellinp__v__mngr2proc_msg[0U] 
        = vlSelf->mngr2proc_msg[0U];
    vlSelf->MultiCoreSys_noparam__DOT____Vcellinp__v__mngr2proc_msg[1U] 
        = vlSelf->mngr2proc_msg[1U];
    vlSelf->MultiCoreSys_noparam__DOT____Vcellinp__v__mngr2proc_msg[2U] 
        = vlSelf->mngr2proc_msg[2U];
    vlSelf->MultiCoreSys_noparam__DOT____Vcellinp__v__mngr2proc_msg[3U] 
        = vlSelf->mngr2proc_msg[3U];
    if ((0x10U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__memreq_type = 0U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__cacheresp_type = 0U;
    } else if ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__memreq_type = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__cacheresp_type = 0U;
        } else if ((2U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__memreq_type = 0U;
            if ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
                vlSelf->__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__cs__4144__cs_cacheresp_type 
                    = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__cacheresp_type 
                    = vlSelf->__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__cs__4144__cs_cacheresp_type;
            } else {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__cacheresp_type = 0U;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__memreq_type 
                = ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))
                    ? 1U : 0U);
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__cacheresp_type = 0U;
        }
    } else {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__memreq_type = 0U;
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
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__mem_req_addr_mux_sel 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && (1U & ((2U 
                                                 & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                                 ? 
                                                (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                                 : (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))))));
    if ((0x10U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__memreq_type = 0U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cacheresp_type = 0U;
    } else if ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__memreq_type = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cacheresp_type = 0U;
        } else if ((2U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__memreq_type = 0U;
            if ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
                vlSelf->__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__cs__4210__cs_cacheresp_type 
                    = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cacheresp_type 
                    = vlSelf->__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__cs__4210__cs_cacheresp_type;
            } else {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cacheresp_type = 0U;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__memreq_type 
                = ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))
                    ? 1U : 0U);
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__cacheresp_type = 0U;
        }
    } else {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__memreq_type = 0U;
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
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__mem_req_addr_mux_sel 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && (1U & ((2U 
                                                 & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                                 ? 
                                                (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                                 : (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))))));
    if ((0x10U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__memreq_type = 0U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cacheresp_type = 0U;
    } else if ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__memreq_type = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cacheresp_type = 0U;
        } else if ((2U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__memreq_type = 0U;
            if ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
                vlSelf->__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__cs__4276__cs_cacheresp_type 
                    = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cacheresp_type 
                    = vlSelf->__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__cs__4276__cs_cacheresp_type;
            } else {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cacheresp_type = 0U;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__memreq_type 
                = ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))
                    ? 1U : 0U);
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__cacheresp_type = 0U;
        }
    } else {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__memreq_type = 0U;
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
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__mem_req_addr_mux_sel 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && (1U & ((2U 
                                                 & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                                 ? 
                                                (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                                 : (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))))));
    if ((0x10U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__memreq_type = 0U;
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cacheresp_type = 0U;
    } else if ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
        if ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__memreq_type = 0U;
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cacheresp_type = 0U;
        } else if ((2U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__memreq_type = 0U;
            if ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))) {
                vlSelf->__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__cs__4342__cs_cacheresp_type 
                    = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out;
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cacheresp_type 
                    = vlSelf->__Vtask_MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__cs__4342__cs_cacheresp_type;
            } else {
                vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cacheresp_type = 0U;
            }
        } else {
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__memreq_type 
                = ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))
                    ? 1U : 0U);
            vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__cacheresp_type = 0U;
        }
    } else {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__memreq_type = 0U;
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
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__mem_req_addr_mux_sel 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && (1U & ((2U 
                                                 & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                                 ? 
                                                (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                                 : (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__mem_req_addr_mux_sel 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && (1U & ((2U 
                                                 & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))
                                                 ? 
                                                (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))
                                                 : (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__mem_req_addr_mux_sel 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && (1U & ((2U 
                                                 & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))
                                                 ? 
                                                (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))
                                                 : (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__mem_req_addr_mux_sel 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && (1U & ((2U 
                                                 & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))
                                                 ? 
                                                (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))
                                                 : (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__mem_req_addr_mux_sel 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && (1U & ((2U 
                                                 & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))
                                                 ? 
                                                (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))
                                                 : (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__data 
        = ((1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out))
            ? 0U : ((8U & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out)
                     ? ((4U & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out)
                         ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__read_data_reg_out[3U]
                         : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__read_data_reg_out[2U])
                     : ((4U & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out)
                         ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__read_data_reg_out[1U]
                         : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__read_data_reg_out[0U])));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__data 
        = ((1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out))
            ? 0U : ((8U & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out)
                     ? ((4U & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out)
                         ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__read_data_reg_out[3U]
                         : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__read_data_reg_out[2U])
                     : ((4U & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out)
                         ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__read_data_reg_out[1U]
                         : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__read_data_reg_out[0U])));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__data 
        = ((1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out))
            ? 0U : ((8U & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out)
                     ? ((4U & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out)
                         ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__read_data_reg_out[3U]
                         : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__read_data_reg_out[2U])
                     : ((4U & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out)
                         ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__read_data_reg_out[1U]
                         : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__read_data_reg_out[0U])));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__proc2cache_respstream_trace__DOT__data 
        = ((1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out))
            ? 0U : ((8U & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out)
                     ? ((4U & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out)
                         ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__read_data_reg_out[3U]
                         : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__read_data_reg_out[2U])
                     : ((4U & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out)
                         ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__read_data_reg_out[1U]
                         : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__read_data_reg_out[0U])));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__0__KET____DOT__icache__proc2cache_reqstream_rdy 
        = ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                  >> 4U)) || (1U & ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))
                                     ? ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                        >> 2U) : ((1U 
                                                   & (~ 
                                                      ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                       >> 2U))) 
                                                  && ((1U 
                                                       & (~ 
                                                          ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                           >> 1U))) 
                                                      && (1U 
                                                          & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__1__KET____DOT__icache__proc2cache_reqstream_rdy 
        = ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                  >> 4U)) || (1U & ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))
                                     ? ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                        >> 2U) : ((1U 
                                                   & (~ 
                                                      ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                       >> 2U))) 
                                                  && ((1U 
                                                       & (~ 
                                                          ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                           >> 1U))) 
                                                      && (1U 
                                                          & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__2__KET____DOT__icache__proc2cache_reqstream_rdy 
        = ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                  >> 4U)) || (1U & ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))
                                     ? ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                        >> 2U) : ((1U 
                                                   & (~ 
                                                      ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                       >> 2U))) 
                                                  && ((1U 
                                                       & (~ 
                                                          ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                           >> 1U))) 
                                                      && (1U 
                                                          & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__3__KET____DOT__icache__proc2cache_reqstream_rdy 
        = ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                  >> 4U)) || (1U & ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))
                                     ? ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                        >> 2U) : ((1U 
                                                   & (~ 
                                                      ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                       >> 2U))) 
                                                  && ((1U 
                                                       & (~ 
                                                          ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                           >> 1U))) 
                                                      && (1U 
                                                          & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__rf_wen_W 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__rf_wen_pending_W) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__val_W));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_14 
        = ((0U != (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__rf_waddr_X)) 
           & (1U != vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__inst_X));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_11 
        = ((0U != (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__rf_waddr_M)) 
           & (1U != vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__inst_M));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_8 
        = ((0U != (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__rf_waddr_W)) 
           & (1U != vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__inst_W));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__rf_wen_W 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__rf_wen_pending_W) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__val_W));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_14 
        = ((0U != (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__rf_waddr_X)) 
           & (1U != vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__inst_X));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_11 
        = ((0U != (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__rf_waddr_M)) 
           & (1U != vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__inst_M));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_8 
        = ((0U != (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__rf_waddr_W)) 
           & (1U != vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__inst_W));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__rf_wen_W 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__rf_wen_pending_W) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__val_W));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_14 
        = ((0U != (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__rf_waddr_X)) 
           & (1U != vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__inst_X));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_11 
        = ((0U != (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__rf_waddr_M)) 
           & (1U != vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__inst_M));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_8 
        = ((0U != (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__rf_waddr_W)) 
           & (1U != vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__inst_W));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__rf_wen_W 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__rf_wen_pending_W) 
           & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__val_W));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_14 
        = ((0U != (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__rf_waddr_X)) 
           & (1U != vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__inst_X));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_11 
        = ((0U != (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__rf_waddr_M)) 
           & (1U != vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__inst_M));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_8 
        = ((0U != (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__rf_waddr_W)) 
           & (1U != vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__inst_W));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__valid_way0 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__valid_bits_way0__DOT__rfile
        [(7U & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                >> 6U))];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__valid_way1 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__valid_bits_way1__DOT__rfile
        [(7U & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                >> 6U))];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__valid_way0 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__valid_bits_way0__DOT__rfile
        [(7U & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                >> 6U))];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__valid_way1 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__valid_bits_way1__DOT__rfile
        [(7U & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                >> 6U))];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__valid_way0 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__valid_bits_way0__DOT__rfile
        [(7U & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                >> 6U))];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__valid_way1 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__valid_bits_way1__DOT__rfile
        [(7U & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                >> 6U))];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__valid_way0 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__valid_bits_way0__DOT__rfile
        [(7U & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                >> 6U))];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__valid_way1 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__valid_bits_way1__DOT__rfile
        [(7U & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                >> 6U))];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__valid_way0 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__valid_bits_way0__DOT__rfile
        [(7U & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out 
                >> 4U))];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__valid_way1 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__valid_bits_way1__DOT__rfile
        [(7U & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out 
                >> 4U))];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__valid_way0 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__valid_bits_way0__DOT__rfile
        [(7U & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out 
                >> 4U))];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__valid_way1 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__valid_bits_way1__DOT__rfile
        [(7U & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out 
                >> 4U))];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__valid_way0 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__valid_bits_way0__DOT__rfile
        [(7U & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out 
                >> 4U))];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__valid_way1 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__valid_bits_way1__DOT__rfile
        [(7U & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out 
                >> 4U))];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__valid_way0 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__valid_bits_way0__DOT__rfile
        [(7U & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out 
                >> 4U))];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__valid_way1 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__valid_bits_way1__DOT__rfile
        [(7U & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out 
                >> 4U))];
    vlSelf->MultiCoreSys_noparam__DOT____Vcellinp__v__proc2mngr_rdy[0U] 
        = vlSelf->proc2mngr_rdy[0U];
    vlSelf->MultiCoreSys_noparam__DOT____Vcellinp__v__proc2mngr_rdy[1U] 
        = vlSelf->proc2mngr_rdy[1U];
    vlSelf->MultiCoreSys_noparam__DOT____Vcellinp__v__proc2mngr_rdy[2U] 
        = vlSelf->proc2mngr_rdy[2U];
    vlSelf->MultiCoreSys_noparam__DOT____Vcellinp__v__proc2mngr_rdy[3U] 
        = vlSelf->proc2mngr_rdy[3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__alu_result_X 
        = ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__alu_fn_X))
            ? ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__alu_fn_X))
                ? ((2U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__alu_fn_X))
                    ? 0U : ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__alu_fn_X))
                             ? 0U : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__op2_X))
                : ((2U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__alu_fn_X))
                    ? ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__alu_fn_X))
                        ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__op1_X
                        : 0U) : ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__alu_fn_X))
                                  ? 0U : (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__op1_X 
                                          << (0x1fU 
                                              & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__op2_X)))))
            : ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__alu_fn_X))
                ? ((2U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__alu_fn_X))
                    ? ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__alu_fn_X))
                        ? (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__op1_X 
                           >> (0x1fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__op2_X))
                        : VL_SHIFTRS_III(32,32,5, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__op1_X, 
                                         (0x1fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__op2_X)))
                    : ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__alu_fn_X))
                        ? (VL_LTS_III(32, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__op1_X, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__op2_X)
                            ? 1U : 0U) : (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__op1_X 
                                          ^ vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__op2_X)))
                : ((2U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__alu_fn_X))
                    ? ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__alu_fn_X))
                        ? (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__op1_X 
                           | vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__op2_X)
                        : (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__op1_X 
                           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__op2_X))
                    : ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__alu_fn_X))
                        ? (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__op1_X 
                           - vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__op2_X)
                        : (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__op1_X 
                           + vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__op2_X)))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__alu_result_X 
        = ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__alu_fn_X))
            ? ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__alu_fn_X))
                ? ((2U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__alu_fn_X))
                    ? 0U : ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__alu_fn_X))
                             ? 0U : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__op2_X))
                : ((2U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__alu_fn_X))
                    ? ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__alu_fn_X))
                        ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__op1_X
                        : 0U) : ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__alu_fn_X))
                                  ? 0U : (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__op1_X 
                                          << (0x1fU 
                                              & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__op2_X)))))
            : ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__alu_fn_X))
                ? ((2U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__alu_fn_X))
                    ? ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__alu_fn_X))
                        ? (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__op1_X 
                           >> (0x1fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__op2_X))
                        : VL_SHIFTRS_III(32,32,5, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__op1_X, 
                                         (0x1fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__op2_X)))
                    : ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__alu_fn_X))
                        ? (VL_LTS_III(32, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__op1_X, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__op2_X)
                            ? 1U : 0U) : (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__op1_X 
                                          ^ vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__op2_X)))
                : ((2U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__alu_fn_X))
                    ? ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__alu_fn_X))
                        ? (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__op1_X 
                           | vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__op2_X)
                        : (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__op1_X 
                           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__op2_X))
                    : ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__alu_fn_X))
                        ? (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__op1_X 
                           - vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__op2_X)
                        : (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__op1_X 
                           + vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__op2_X)))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__alu_result_X 
        = ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__alu_fn_X))
            ? ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__alu_fn_X))
                ? ((2U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__alu_fn_X))
                    ? 0U : ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__alu_fn_X))
                             ? 0U : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__op2_X))
                : ((2U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__alu_fn_X))
                    ? ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__alu_fn_X))
                        ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__op1_X
                        : 0U) : ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__alu_fn_X))
                                  ? 0U : (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__op1_X 
                                          << (0x1fU 
                                              & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__op2_X)))))
            : ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__alu_fn_X))
                ? ((2U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__alu_fn_X))
                    ? ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__alu_fn_X))
                        ? (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__op1_X 
                           >> (0x1fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__op2_X))
                        : VL_SHIFTRS_III(32,32,5, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__op1_X, 
                                         (0x1fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__op2_X)))
                    : ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__alu_fn_X))
                        ? (VL_LTS_III(32, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__op1_X, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__op2_X)
                            ? 1U : 0U) : (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__op1_X 
                                          ^ vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__op2_X)))
                : ((2U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__alu_fn_X))
                    ? ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__alu_fn_X))
                        ? (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__op1_X 
                           | vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__op2_X)
                        : (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__op1_X 
                           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__op2_X))
                    : ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__alu_fn_X))
                        ? (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__op1_X 
                           - vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__op2_X)
                        : (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__op1_X 
                           + vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__op2_X)))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__alu_result_X 
        = ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__alu_fn_X))
            ? ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__alu_fn_X))
                ? ((2U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__alu_fn_X))
                    ? 0U : ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__alu_fn_X))
                             ? 0U : vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__op2_X))
                : ((2U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__alu_fn_X))
                    ? ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__alu_fn_X))
                        ? vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__op1_X
                        : 0U) : ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__alu_fn_X))
                                  ? 0U : (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__op1_X 
                                          << (0x1fU 
                                              & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__op2_X)))))
            : ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__alu_fn_X))
                ? ((2U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__alu_fn_X))
                    ? ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__alu_fn_X))
                        ? (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__op1_X 
                           >> (0x1fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__op2_X))
                        : VL_SHIFTRS_III(32,32,5, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__op1_X, 
                                         (0x1fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__op2_X)))
                    : ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__alu_fn_X))
                        ? (VL_LTS_III(32, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__op1_X, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__op2_X)
                            ? 1U : 0U) : (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__op1_X 
                                          ^ vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__op2_X)))
                : ((2U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__alu_fn_X))
                    ? ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__alu_fn_X))
                        ? (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__op1_X 
                           | vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__op2_X)
                        : (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__op1_X 
                           & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__op2_X))
                    : ((1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__alu_fn_X))
                        ? (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__op1_X 
                           - vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__op2_X)
                        : (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__op1_X 
                           + vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__op2_X)))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__tag_array_ren 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && (1U & ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                         ? ((1U & (~ 
                                                   ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                    >> 2U))) 
                                            && ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                     >> 1U))) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state)))))
                                         : ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                             ? ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                     >> 1U))) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))))
                                             : (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state)))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__tag_array_ren 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && (1U & ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                         ? ((1U & (~ 
                                                   ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                    >> 2U))) 
                                            && ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                     >> 1U))) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state)))))
                                         : ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                             ? ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                     >> 1U))) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))))
                                             : (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state)))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__tag_array_ren 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && (1U & ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                         ? ((1U & (~ 
                                                   ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                    >> 2U))) 
                                            && ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                     >> 1U))) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state)))))
                                         : ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                             ? ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                     >> 1U))) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))))
                                             : (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state)))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__tag_array_ren 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && (1U & ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                         ? ((1U & (~ 
                                                   ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                    >> 2U))) 
                                            && ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                     >> 1U))) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state)))))
                                         : ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                             ? ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                     >> 1U))) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))))
                                             : (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state)))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__tag_array_ren 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && (1U & ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))
                                         ? ((1U & (~ 
                                                   ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                    >> 2U))) 
                                            && ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                     >> 1U))) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state)))))
                                         : ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))
                                             ? ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                     >> 1U))) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))))
                                             : (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state)))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__tag_array_ren 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && (1U & ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))
                                         ? ((1U & (~ 
                                                   ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                    >> 2U))) 
                                            && ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                     >> 1U))) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state)))))
                                         : ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))
                                             ? ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                     >> 1U))) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))))
                                             : (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state)))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__tag_array_ren 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && (1U & ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))
                                         ? ((1U & (~ 
                                                   ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                    >> 2U))) 
                                            && ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                     >> 1U))) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state)))))
                                         : ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))
                                             ? ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                     >> 1U))) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))))
                                             : (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state)))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__tag_array_ren 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && (1U & ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))
                                         ? ((1U & (~ 
                                                   ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                    >> 2U))) 
                                            && ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                     >> 1U))) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state)))))
                                         : ((4U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))
                                             ? ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                     >> 1U))) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))))
                                             : (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state)))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__0__KET____DOT__icache__proc2cache_respstream_val 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                         >> 3U)) && 
                                  ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                             >> 2U))) 
                                   && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                              >> 1U)) 
                                       && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__1__KET____DOT__icache__proc2cache_respstream_val 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                         >> 3U)) && 
                                  ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                             >> 2U))) 
                                   && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                              >> 1U)) 
                                       && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__2__KET____DOT__icache__proc2cache_respstream_val 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                         >> 3U)) && 
                                  ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                             >> 2U))) 
                                   && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                              >> 1U)) 
                                       && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__3__KET____DOT__icache__proc2cache_respstream_val 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                         >> 3U)) && 
                                  ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                             >> 2U))) 
                                   && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                              >> 1U)) 
                                       && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memresp2netmsg_ostream_val[0U] 
        = vlSelf->dmem_respstream_val;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memresp2netmsg_ostream_val[0U] 
        = vlSelf->imem_respstream_val;
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__0__KET____DOT__dcache__proc2cache_respstream_val 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                         >> 3U)) && 
                                  ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                             >> 2U))) 
                                   && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                              >> 1U)) 
                                       && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__0__KET____DOT__dcache__cache2mem_reqstream_val 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                   ? ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                >> 2U))) 
                                      && ((1U & (~ 
                                                 ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                  >> 1U))) 
                                          && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))))
                                   : ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && ((1U & (~ 
                                                 ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                  >> 1U))) 
                                          && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__0__KET____DOT__dcache__DOT__ctrl__DOT__state))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__1__KET____DOT__dcache__proc2cache_respstream_val 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                         >> 3U)) && 
                                  ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                             >> 2U))) 
                                   && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                              >> 1U)) 
                                       && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__1__KET____DOT__dcache__cache2mem_reqstream_val 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                   ? ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                >> 2U))) 
                                      && ((1U & (~ 
                                                 ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                  >> 1U))) 
                                          && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))))
                                   : ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && ((1U & (~ 
                                                 ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                  >> 1U))) 
                                          && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__1__KET____DOT__dcache__DOT__ctrl__DOT__state))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__2__KET____DOT__dcache__proc2cache_respstream_val 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                         >> 3U)) && 
                                  ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                             >> 2U))) 
                                   && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                              >> 1U)) 
                                       && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__2__KET____DOT__dcache__cache2mem_reqstream_val 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                   ? ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                >> 2U))) 
                                      && ((1U & (~ 
                                                 ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                  >> 1U))) 
                                          && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))))
                                   : ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && ((1U & (~ 
                                                 ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                  >> 1U))) 
                                          && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__2__KET____DOT__dcache__DOT__ctrl__DOT__state))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__3__KET____DOT__dcache__proc2cache_respstream_val 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                         >> 3U)) && 
                                  ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                             >> 2U))) 
                                   && ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                              >> 1U)) 
                                       && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT____Vcellout__DCACHE__BRA__3__KET____DOT__dcache__cache2mem_reqstream_val 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))
                                   ? ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                >> 2U))) 
                                      && ((1U & (~ 
                                                 ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                  >> 1U))) 
                                          && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))))
                                   : ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && ((1U & (~ 
                                                 ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state) 
                                                  >> 1U))) 
                                          && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__DCACHE__BRA__3__KET____DOT__dcache__DOT__ctrl__DOT__state))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__0__KET____DOT__icache__cache2mem_reqstream_val 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))
                                   ? ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                >> 2U))) 
                                      && ((1U & (~ 
                                                 ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                  >> 1U))) 
                                          && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))))
                                   : ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && ((1U & (~ 
                                                 ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                  >> 1U))) 
                                          && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__0__KET____DOT__icache__DOT__ctrl__DOT__state))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__1__KET____DOT__icache__cache2mem_reqstream_val 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))
                                   ? ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                >> 2U))) 
                                      && ((1U & (~ 
                                                 ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                  >> 1U))) 
                                          && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))))
                                   : ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && ((1U & (~ 
                                                 ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                  >> 1U))) 
                                          && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__1__KET____DOT__icache__DOT__ctrl__DOT__state))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__2__KET____DOT__icache__cache2mem_reqstream_val 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))
                                   ? ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                >> 2U))) 
                                      && ((1U & (~ 
                                                 ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                  >> 1U))) 
                                          && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))))
                                   : ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && ((1U & (~ 
                                                 ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                  >> 1U))) 
                                          && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__2__KET____DOT__icache__DOT__ctrl__DOT__state))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT____Vcellout__ICACHE__BRA__3__KET____DOT__icache__cache2mem_reqstream_val 
        = ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((8U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))
                                   ? ((1U & (~ ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                >> 2U))) 
                                      && ((1U & (~ 
                                                 ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                  >> 1U))) 
                                          && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))))
                                   : ((1U & ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && ((1U & (~ 
                                                 ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state) 
                                                  >> 1U))) 
                                          && (1U & (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__ICACHE__BRA__3__KET____DOT__icache__DOT__ctrl__DOT__state))))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream0_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream0_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream0_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream0_deq_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream0_deq_msg[4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream0_deq_msg[5U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][5U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream1_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream1_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream1_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream1_deq_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream1_deq_msg[4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream1_deq_msg[5U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][5U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream2_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream2_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream2_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream2_deq_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream2_deq_msg[4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream2_deq_msg[5U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][5U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream0_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream0_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream0_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream0_deq_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream0_deq_msg[4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream0_deq_msg[5U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][5U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream1_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream1_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream1_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream1_deq_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream1_deq_msg[4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream1_deq_msg[5U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][5U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream2_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream2_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream2_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream2_deq_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream2_deq_msg[4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream2_deq_msg[5U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][5U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream0_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream0_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream0_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream0_deq_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream0_deq_msg[4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream0_deq_msg[5U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][5U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream1_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream1_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream1_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream1_deq_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream1_deq_msg[4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream1_deq_msg[5U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][5U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream2_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream2_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream2_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream2_deq_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream2_deq_msg[4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream2_deq_msg[5U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][5U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream0_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream0_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream0_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream0_deq_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream0_deq_msg[4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream0_deq_msg[5U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][5U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream1_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream1_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream1_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream1_deq_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream1_deq_msg[4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream1_deq_msg[5U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][5U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream2_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream2_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream2_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream2_deq_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream2_deq_msg[4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream2_deq_msg[5U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][5U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0_deq_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0_deq_msg[4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0_deq_msg[5U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][5U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1_deq_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1_deq_msg[4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1_deq_msg[5U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][5U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2_deq_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2_deq_msg[4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2_deq_msg[5U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][5U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0_deq_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0_deq_msg[4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0_deq_msg[5U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][5U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1_deq_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1_deq_msg[4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1_deq_msg[5U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][5U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2_deq_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2_deq_msg[4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2_deq_msg[5U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][5U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0_deq_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0_deq_msg[4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0_deq_msg[5U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][5U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1_deq_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1_deq_msg[4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1_deq_msg[5U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][5U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2_deq_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2_deq_msg[4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2_deq_msg[5U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][5U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0_deq_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0_deq_msg[4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0_deq_msg[5U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][5U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1_deq_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1_deq_msg[4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1_deq_msg[5U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][5U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2_deq_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2_deq_msg[4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2_deq_msg[5U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memreqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][5U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream0_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream0_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream0_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream0_deq_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream0_deq_msg[4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream1_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream1_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream1_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream1_deq_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream1_deq_msg[4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream2_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream2_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream2_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream2_deq_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream2_deq_msg[4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream0_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream0_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream0_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream0_deq_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream0_deq_msg[4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream1_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream1_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream1_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream1_deq_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream1_deq_msg[4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream2_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream2_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream2_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream2_deq_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream2_deq_msg[4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream0_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream0_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream0_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream0_deq_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream0_deq_msg[4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream1_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream1_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream1_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream1_deq_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream1_deq_msg[4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream2_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream2_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream2_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream2_deq_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream2_deq_msg[4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream0_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream0_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream0_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream0_deq_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream0_deq_msg[4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream1_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream1_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream1_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream1_deq_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream1_deq_msg[4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream2_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream2_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream2_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream2_deq_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream2_deq_msg[4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__imemnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cachereqnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0_deq_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0_deq_msg[4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1_deq_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1_deq_msg[4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2_deq_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2_deq_msg[4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0_deq_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0_deq_msg[4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1_deq_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1_deq_msg[4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2_deq_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2_deq_msg[4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0_deq_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0_deq_msg[4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1_deq_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1_deq_msg[4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2_deq_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2_deq_msg[4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0_deq_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0_deq_msg[4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1_deq_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1_deq_msg[4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2_deq_msg[0U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2_deq_msg[1U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2_deq_msg[2U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2_deq_msg[3U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][3U];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2_deq_msg[4U] 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__memnet__DOT__memrespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][4U];
    __Vtableidx2 = (((vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__op1_X 
                      < vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__op2_X) 
                     << 6U) | ((VL_LTS_III(32, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__op1_X, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__op2_X) 
                                << 5U) | (((vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__op1_X 
                                            == vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__op2_X) 
                                           << 4U) | 
                                          (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__br_type_X) 
                                            << 1U) 
                                           | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__val_X)))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__pc_redirect_X 
        = VMultiCoreSys_noparam__ConstPool__TABLE_he92e35b8_0
        [__Vtableidx2];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__pc_sel_X 
        = VMultiCoreSys_noparam__ConstPool__TABLE_h81fecf40_0
        [__Vtableidx2];
    __Vtableidx5 = (((vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__op1_X 
                      < vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__op2_X) 
                     << 6U) | ((VL_LTS_III(32, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__op1_X, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__op2_X) 
                                << 5U) | (((vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__op1_X 
                                            == vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__op2_X) 
                                           << 4U) | 
                                          (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__br_type_X) 
                                            << 1U) 
                                           | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__val_X)))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__pc_redirect_X 
        = VMultiCoreSys_noparam__ConstPool__TABLE_he92e35b8_0
        [__Vtableidx5];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__pc_sel_X 
        = VMultiCoreSys_noparam__ConstPool__TABLE_h81fecf40_0
        [__Vtableidx5];
    __Vtableidx8 = (((vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__op1_X 
                      < vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__op2_X) 
                     << 6U) | ((VL_LTS_III(32, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__op1_X, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__op2_X) 
                                << 5U) | (((vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__op1_X 
                                            == vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__op2_X) 
                                           << 4U) | 
                                          (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__br_type_X) 
                                            << 1U) 
                                           | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__val_X)))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__pc_redirect_X 
        = VMultiCoreSys_noparam__ConstPool__TABLE_he92e35b8_0
        [__Vtableidx8];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__pc_sel_X 
        = VMultiCoreSys_noparam__ConstPool__TABLE_h81fecf40_0
        [__Vtableidx8];
    __Vtableidx11 = (((vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__op1_X 
                       < vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__op2_X) 
                      << 6U) | ((VL_LTS_III(32, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__op1_X, vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__op2_X) 
                                 << 5U) | (((vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__op1_X 
                                             == vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__op2_X) 
                                            << 4U) 
                                           | (((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__br_type_X) 
                                               << 1U) 
                                              | (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__val_X)))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__pc_redirect_X 
        = VMultiCoreSys_noparam__ConstPool__TABLE_he92e35b8_0
        [__Vtableidx11];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__pc_sel_X 
        = VMultiCoreSys_noparam__ConstPool__TABLE_h81fecf40_0
        [__Vtableidx11];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_22 
        = ((0U != (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__rf_waddr_X)) 
           & (1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_X)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_22 
        = ((0U != (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__rf_waddr_X)) 
           & (1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_X)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_22 
        = ((0U != (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__rf_waddr_X)) 
           & (1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_X)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_22 
        = ((0U != (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__rf_waddr_X)) 
           & (1U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__dmem_type_X)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imul_req_rdy_D = 0U;
    if ((0U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__imul_req_rdy_D = 1U;
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imul_req_rdy_D = 0U;
    if ((0U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__imul_req_rdy_D = 1U;
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imul_req_rdy_D = 0U;
    if ((0U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__imul_req_rdy_D = 1U;
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imul_req_rdy_D = 0U;
    if ((0U == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
        vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__imul_req_rdy_D = 1U;
    }
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0_deq_msg 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1_deq_msg 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2_deq_msg 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router0__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0_deq_msg 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1_deq_msg 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2_deq_msg 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router1__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0_deq_msg 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1_deq_msg 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2_deq_msg 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router2__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0_deq_msg 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1_deq_msg 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2_deq_msg 
        = vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
        [vlSelf->MultiCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachenet__DOT__cacherespnet__DOT__router3__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr];
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__csrr_D 
        = (((((((((0x13U == vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D) 
                  | (0x2073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                 | (0x1073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
                | (0x33U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
               | (0x40000033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
              | (0x2000033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
             | (0x7033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
            | (0x6033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))) 
           && ((0x13U != vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D) 
               && (0x2073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__csrr_D 
        = (((((((((0x13U == vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D) 
                  | (0x2073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                 | (0x1073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
                | (0x33U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
               | (0x40000033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
              | (0x2000033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
             | (0x7033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
            | (0x6033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))) 
           && ((0x13U != vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D) 
               && (0x2073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__csrr_D 
        = (((((((((0x13U == vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D) 
                  | (0x2073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                 | (0x1073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
                | (0x33U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
               | (0x40000033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
              | (0x2000033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
             | (0x7033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
            | (0x6033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))) 
           && ((0x13U != vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D) 
               && (0x2073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__csrr_D 
        = (((((((((0x13U == vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D) 
                  | (0x2073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                 | (0x1073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
                | (0x33U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
               | (0x40000033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
              | (0x2000033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
             | (0x7033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
            | (0x6033U == (0xfe00707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))) 
           && ((0x13U != vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D) 
               && (0x2073U == (0x707fU & vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D))));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_17 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__rf_wen_X) 
           & ((0x1fU & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D 
                        >> 0xfU)) == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__rf_waddr_X)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_15 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__rf_wen_X) 
           & ((0x1fU & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__inst_D 
                        >> 0x14U)) == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__0__KET____DOT__proc__DOT__ctrl__DOT__rf_waddr_X)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_17 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__rf_wen_X) 
           & ((0x1fU & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D 
                        >> 0xfU)) == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__rf_waddr_X)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_15 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__rf_wen_X) 
           & ((0x1fU & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__inst_D 
                        >> 0x14U)) == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__1__KET____DOT__proc__DOT__ctrl__DOT__rf_waddr_X)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_17 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__rf_wen_X) 
           & ((0x1fU & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D 
                        >> 0xfU)) == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__rf_waddr_X)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_15 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__rf_wen_X) 
           & ((0x1fU & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__inst_D 
                        >> 0x14U)) == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__2__KET____DOT__proc__DOT__ctrl__DOT__rf_waddr_X)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_17 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__rf_wen_X) 
           & ((0x1fU & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D 
                        >> 0xfU)) == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__rf_waddr_X)));
    vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_15 
        = ((IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__rf_wen_X) 
           & ((0x1fU & (vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__inst_D 
                        >> 0x14U)) == (IData)(vlSelf->MultiCoreSys_noparam__DOT__v__DOT__PROC__BRA__3__KET____DOT__proc__DOT__ctrl__DOT__rf_waddr_X)));
}
