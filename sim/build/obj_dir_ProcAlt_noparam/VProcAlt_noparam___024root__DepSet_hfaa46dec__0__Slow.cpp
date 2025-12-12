// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VProcAlt_noparam.h for the primary calling header

#include "VProcAlt_noparam__pch.h"
#include "VProcAlt_noparam__Syms.h"
#include "VProcAlt_noparam___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VProcAlt_noparam___024root___dump_triggers__stl(VProcAlt_noparam___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VProcAlt_noparam___024root___eval_triggers__stl(VProcAlt_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcAlt_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcAlt_noparam___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VProcAlt_noparam___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

extern const VlUnpacked<CData/*0:0*/, 128> VProcAlt_noparam__ConstPool__TABLE_he92e35b8_0;
extern const VlUnpacked<CData/*1:0*/, 128> VProcAlt_noparam__ConstPool__TABLE_h81fecf40_0;
extern const VlUnpacked<CData/*1:0*/, 64> VProcAlt_noparam__ConstPool__TABLE_hc577786b_0;
extern const VlUnpacked<CData/*1:0*/, 64> VProcAlt_noparam__ConstPool__TABLE_h89e50ef4_0;
extern const VlUnpacked<CData/*1:0*/, 64> VProcAlt_noparam__ConstPool__TABLE_h8b2b421b_0;

VL_ATTR_COLD void VProcAlt_noparam___024root___stl_sequent__TOP__0(VProcAlt_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcAlt_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcAlt_noparam___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__imem_reqstream_enq_val;
    ProcAlt_noparam__DOT__v__DOT__imem_reqstream_enq_val = 0;
    CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop_val;
    ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop_val = 0;
    CData/*1:0*/ ProcAlt_noparam__DOT__v__DOT__pc_sel_F;
    ProcAlt_noparam__DOT__v__DOT__pc_sel_F = 0;
    CData/*2:0*/ ProcAlt_noparam__DOT__v__DOT__imm_type_D;
    ProcAlt_noparam__DOT__v__DOT__imm_type_D = 0;
    CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq = 0;
    CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____VdfgRegularize_h1851b5ac_0_0;
    ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____VdfgRegularize_h1851b5ac_0_0 = 0;
    CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop_unit__DOT____VdfgExtracted_hff9b16a6__0;
    ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop_unit__DOT____VdfgExtracted_hff9b16a6__0 = 0;
    CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq = 0;
    CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__osquash_D;
    ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__osquash_D = 0;
    CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__osquash_X;
    ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__osquash_X = 0;
    CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__csrr_D;
    ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__csrr_D = 0;
    CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__csrw_D;
    ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__csrw_D = 0;
    CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_8;
    ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_8 = 0;
    CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_11;
    ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_11 = 0;
    CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_14;
    ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_14 = 0;
    CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_16;
    ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_16 = 0;
    CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_18;
    ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_18 = 0;
    CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_19;
    ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_19 = 0;
    CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__add_mux_sel;
    ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__add_mux_sel = 0;
    CData/*4:0*/ ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__shamt;
    ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__shamt = 0;
    CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__b_zero;
    ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__b_zero = 0;
    CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__b_lsb;
    ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__b_lsb = 0;
    CData/*4:0*/ ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k;
    ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_0;
    __VdfgRegularize_hd87f99a1_0_0 = 0;
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*5:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state)) 
                               << 2U) | (((1U == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state)))))))) {
        if ((((2U == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state)) 
              << 2U) | (((1U == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state)) 
                         << 1U) | (0U == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF_NX("[%0t] %%Error: IntMulAlt.v:250: Assertion failed in %NProcAlt_noparam.v.dpath.imul.ctrl: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state));
                VL_STOP_MT("lab1_imul/IntMulAlt.v", 250, "");
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF_NX("[%0t] %%Error: IntMulAlt.v:250: Assertion failed in %NProcAlt_noparam.v.dpath.imul.ctrl: unique case, but none matched for '2'h%x'\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),2,(IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state));
            VL_STOP_MT("lab1_imul/IntMulAlt.v", 250, "");
        }
    }
    if (((((((((0x13U == vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D) 
               | (0x2073U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
              | (0x1073U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
             | (0x33U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
            | (0x40000033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
           | (0x2000033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
          | (0x7033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
         | (0x6033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)))) {
        if ((0x13U == vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) {
            vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 0U;
            vlSelf->ProcAlt_noparam__DOT__v__DOT__op2_sel_D = 0U;
            vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_D = 1U;
        } else if ((0x2073U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) {
            vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 0xcU;
            vlSelf->ProcAlt_noparam__DOT__v__DOT__op2_sel_D = 2U;
            vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_D = 1U;
        } else {
            if ((0x1073U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) {
                vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 0xbU;
                vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_D = 1U;
            } else if ((0x33U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) {
                vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 0U;
                vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_D = 1U;
            } else if ((0x40000033U == (0xfe00707fU 
                                        & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) {
                vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 1U;
                vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_D = 1U;
            } else if ((0x2000033U == (0xfe00707fU 
                                       & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) {
                vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 0U;
                vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_D = 2U;
            } else {
                vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D 
                    = ((0x7033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))
                        ? 2U : 3U);
                vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_D = 1U;
            }
            vlSelf->ProcAlt_noparam__DOT__v__DOT__op2_sel_D = 0U;
        }
        vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_D 
            = ((0x13U != vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D) 
               && ((0x2073U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                   || (0x1073U != (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))));
        vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__dmem_type_D = 0U;
        ProcAlt_noparam__DOT__v__DOT__imm_type_D = 0U;
        vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__br_type_D = 0U;
        vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rs2_en_D 
            = ((0x13U != vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D) 
               && ((0x2073U != (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                   && (0x1073U != (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))));
        vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rs1_en_D 
            = ((0x13U != vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D) 
               && (0x2073U != (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)));
    } else {
        if (((((((((0x4033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                   | (0x2033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                  | (0x40005033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                 | (0x5033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                | (0x1033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
               | (0x13U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
              | (0x7013U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
             | (0x6013U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)))) {
            if ((0x4033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) {
                vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 4U;
                vlSelf->ProcAlt_noparam__DOT__v__DOT__op2_sel_D = 0U;
            } else if ((0x2033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) {
                vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 5U;
                vlSelf->ProcAlt_noparam__DOT__v__DOT__op2_sel_D = 0U;
            } else if ((0x40005033U == (0xfe00707fU 
                                        & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) {
                vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 6U;
                vlSelf->ProcAlt_noparam__DOT__v__DOT__op2_sel_D = 0U;
            } else if ((0x5033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) {
                vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 7U;
                vlSelf->ProcAlt_noparam__DOT__v__DOT__op2_sel_D = 0U;
            } else if ((0x1033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) {
                vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 8U;
                vlSelf->ProcAlt_noparam__DOT__v__DOT__op2_sel_D = 0U;
            } else {
                vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D 
                    = ((0x13U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))
                        ? 0U : ((0x7013U == (0x707fU 
                                             & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))
                                 ? 2U : 3U));
                vlSelf->ProcAlt_noparam__DOT__v__DOT__op2_sel_D = 1U;
            }
            vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__dmem_type_D = 0U;
            ProcAlt_noparam__DOT__v__DOT__imm_type_D = 0U;
            vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__br_type_D = 0U;
            vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_D = 1U;
            vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rs2_en_D 
                = ((0x4033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                   || ((0x2033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                       || ((0x40005033U == (0xfe00707fU 
                                            & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                           || ((0x5033U == (0xfe00707fU 
                                            & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                               || (0x1033U == (0xfe00707fU 
                                               & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))))));
        } else {
            if (((((((((0x4013U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                       | (0x2013U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                      | (0x40005013U == (0xfe00707fU 
                                         & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                     | (0x5013U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                    | (0x1013U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                   | (0x37U == (0x7fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                  | (0x17U == (0x7fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                 | (0x2003U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)))) {
                if ((0x4013U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) {
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 4U;
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__dmem_type_D = 0U;
                    ProcAlt_noparam__DOT__v__DOT__imm_type_D = 0U;
                } else if ((0x2013U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) {
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 5U;
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__dmem_type_D = 0U;
                    ProcAlt_noparam__DOT__v__DOT__imm_type_D = 0U;
                } else if ((0x40005013U == (0xfe00707fU 
                                            & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) {
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 6U;
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__dmem_type_D = 0U;
                    ProcAlt_noparam__DOT__v__DOT__imm_type_D = 0U;
                } else if ((0x5013U == (0xfe00707fU 
                                        & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) {
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 7U;
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__dmem_type_D = 0U;
                    ProcAlt_noparam__DOT__v__DOT__imm_type_D = 0U;
                } else if ((0x1013U == (0xfe00707fU 
                                        & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) {
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 8U;
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__dmem_type_D = 0U;
                    ProcAlt_noparam__DOT__v__DOT__imm_type_D = 0U;
                } else if ((0x37U == (0x7fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) {
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 0xcU;
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__dmem_type_D = 0U;
                    ProcAlt_noparam__DOT__v__DOT__imm_type_D = 3U;
                } else {
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 0U;
                    if ((0x17U == (0x7fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) {
                        vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__dmem_type_D = 0U;
                        ProcAlt_noparam__DOT__v__DOT__imm_type_D = 3U;
                    } else {
                        vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__dmem_type_D = 1U;
                        ProcAlt_noparam__DOT__v__DOT__imm_type_D = 0U;
                    }
                }
                vlSelf->ProcAlt_noparam__DOT__v__DOT__op2_sel_D = 1U;
                vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__br_type_D = 0U;
                vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_D = 1U;
            } else {
                vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D = 0U;
                if (((((((((0x2023U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                           | (0x6fU == (0x7fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                          | (0x67U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                         | (0x1063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                        | (0x63U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                       | (0x5063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                      | (0x4063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                     | (0x6063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)))) {
                    if ((0x2023U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) {
                        vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__dmem_type_D = 2U;
                        vlSelf->ProcAlt_noparam__DOT__v__DOT__op2_sel_D = 1U;
                        ProcAlt_noparam__DOT__v__DOT__imm_type_D = 1U;
                        vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__br_type_D = 0U;
                        vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_D = 1U;
                    } else {
                        vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__dmem_type_D = 0U;
                        if ((0x6fU == (0x7fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) {
                            vlSelf->ProcAlt_noparam__DOT__v__DOT__op2_sel_D = 1U;
                            ProcAlt_noparam__DOT__v__DOT__imm_type_D = 4U;
                            vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__br_type_D = 6U;
                            vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_D = 0U;
                        } else if ((0x67U == (0x707fU 
                                              & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) {
                            vlSelf->ProcAlt_noparam__DOT__v__DOT__op2_sel_D = 1U;
                            ProcAlt_noparam__DOT__v__DOT__imm_type_D = 0U;
                            vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__br_type_D = 7U;
                            vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_D = 0U;
                        } else {
                            vlSelf->ProcAlt_noparam__DOT__v__DOT__op2_sel_D = 0U;
                            ProcAlt_noparam__DOT__v__DOT__imm_type_D = 2U;
                            vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__br_type_D 
                                = ((0x1063U == (0x707fU 
                                                & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))
                                    ? 1U : ((0x63U 
                                             == (0x707fU 
                                                 & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))
                                             ? 2U : 
                                            ((0x5063U 
                                              == (0x707fU 
                                                  & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))
                                              ? 3U : 
                                             ((0x4063U 
                                               == (0x707fU 
                                                   & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))
                                               ? 4U
                                               : 5U))));
                            vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_D = 1U;
                        }
                    }
                } else {
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__dmem_type_D = 0U;
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__op2_sel_D = 0U;
                    ProcAlt_noparam__DOT__v__DOT__imm_type_D = 0U;
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__br_type_D = 0U;
                    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_D = 0U;
                }
            }
            vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rs2_en_D 
                = ((1U & (~ ((((((((0x4013U == (0x707fU 
                                                & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                                   | (0x2013U == (0x707fU 
                                                  & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                                  | (0x40005013U == 
                                     (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                                 | (0x5013U == (0xfe00707fU 
                                                & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                                | (0x1013U == (0xfe00707fU 
                                               & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                               | (0x37U == (0x7fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                              | (0x17U == (0x7fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                             | (0x2003U == (0x707fU 
                                            & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))))) 
                   && (((((((((0x2023U == (0x707fU 
                                           & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                              | (0x6fU == (0x7fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                             | (0x67U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                            | (0x1063U == (0x707fU 
                                           & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                           | (0x63U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                          | (0x5063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                         | (0x4063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                        | (0x6063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                       && ((0x2023U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                           || (0x6fU != (0x7fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)))));
        }
        vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_D 
            = (((((((((0x4033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                      | (0x2033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                     | (0x40005033U == (0xfe00707fU 
                                        & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                    | (0x5033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                   | (0x1033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                  | (0x13U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                 | (0x7013U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                | (0x6013U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
               || (((((((((0x4013U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                          | (0x2013U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                         | (0x40005013U == (0xfe00707fU 
                                            & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                        | (0x5013U == (0xfe00707fU 
                                       & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                       | (0x1013U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                      | (0x37U == (0x7fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                     | (0x17U == (0x7fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                    | (0x2003U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                   || (((((((((0x2023U == (0x707fU 
                                           & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                              | (0x6fU == (0x7fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                             | (0x67U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                            | (0x1063U == (0x707fU 
                                           & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                           | (0x63U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                          | (0x5063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                         | (0x4063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                        | (0x6063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                       && ((0x2023U != (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                           && ((0x6fU == (0x7fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                               || (0x67U == (0x707fU 
                                             & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)))))));
        vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rs1_en_D 
            = (((((((((0x4033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                      | (0x2033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                     | (0x40005033U == (0xfe00707fU 
                                        & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                    | (0x5033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                   | (0x1033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                  | (0x13U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                 | (0x7013U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                | (0x6013U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
               || (((((((((0x4013U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                          | (0x2013U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                         | (0x40005013U == (0xfe00707fU 
                                            & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                        | (0x5013U == (0xfe00707fU 
                                       & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                       | (0x1013U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                      | (0x37U == (0x7fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                     | (0x17U == (0x7fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                    | (0x2003U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)))
                    ? ((0x4013U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                       || ((0x2013U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                           || ((0x40005013U == (0xfe00707fU 
                                                & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                               || ((0x5013U == (0xfe00707fU 
                                                & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                                   || ((0x1013U == 
                                        (0xfe00707fU 
                                         & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                                       || ((0x37U != 
                                            (0x7fU 
                                             & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                                           && (0x17U 
                                               != (0x7fU 
                                                   & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))))))))
                    : (((((((((0x2023U == (0x707fU 
                                           & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                              | (0x6fU == (0x7fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                             | (0x67U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                            | (0x1063U == (0x707fU 
                                           & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                           | (0x63U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                          | (0x5063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                         | (0x4063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                        | (0x6063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                       && ((0x2023U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                           || (0x6fU != (0x7fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))))));
    }
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__wb_result_sel_D 
        = ((1U & (~ ((((((((0x13U == vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D) 
                           | (0x2073U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                          | (0x1073U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                         | (0x33U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                        | (0x40000033U == (0xfe00707fU 
                                           & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                       | (0x2000033U == (0xfe00707fU 
                                         & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                      | (0x7033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                     | (0x6033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))))) 
           && ((1U & (~ ((((((((0x4033U == (0xfe00707fU 
                                            & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                               | (0x2033U == (0xfe00707fU 
                                              & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                              | (0x40005033U == (0xfe00707fU 
                                                 & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                             | (0x5033U == (0xfe00707fU 
                                            & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                            | (0x1033U == (0xfe00707fU 
                                           & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                           | (0x13U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                          | (0x7013U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                         | (0x6013U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))))) 
               && (((((((((0x4013U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                          | (0x2013U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                         | (0x40005013U == (0xfe00707fU 
                                            & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                        | (0x5013U == (0xfe00707fU 
                                       & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                       | (0x1013U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                      | (0x37U == (0x7fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                     | (0x17U == (0x7fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                    | (0x2003U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                   && ((0x4013U != (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                       && ((0x2013U != (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                           && ((0x40005013U != (0xfe00707fU 
                                                & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                               && ((0x5013U != (0xfe00707fU 
                                                & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                                   && ((0x1013U != 
                                        (0xfe00707fU 
                                         & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                                       && ((0x37U != 
                                            (0x7fU 
                                             & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                                           && (0x17U 
                                               != (0x7fU 
                                                   & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)))))))))));
    vlSelf->stats_en = (0U != vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__stats_en_W);
    vlSelf->proc2mngr_msg = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)
                              ? vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore
                              : ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)
                                  ? 0U : vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__wb_result_W));
    ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__add_mux_sel = 0U;
    ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__csrw_D 
        = (((((((((0x13U == vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D) 
                  | (0x2073U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                 | (0x1073U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                | (0x33U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
               | (0x40000033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
              | (0x2000033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
             | (0x7033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
            | (0x6033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
           && ((0x13U != vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D) 
               && ((0x2073U != (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                   && (0x1073U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)))));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__op1_sel_D 
        = (((((((((0x13U == vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D) 
                  | (0x2073U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                 | (0x1073U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                | (0x33U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
               | (0x40000033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
              | (0x2000033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
             | (0x7033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
            | (0x6033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
           || (((((((((0x4033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                      | (0x2033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                     | (0x40005033U == (0xfe00707fU 
                                        & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                    | (0x5033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                   | (0x1033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                  | (0x13U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                 | (0x7013U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                | (0x6013U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
               || (((((((((0x4013U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                          | (0x2013U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                         | (0x40005013U == (0xfe00707fU 
                                            & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                        | (0x5013U == (0xfe00707fU 
                                       & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                       | (0x1013U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                      | (0x37U == (0x7fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                     | (0x17U == (0x7fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                    | (0x2003U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)))
                    ? ((0x4013U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                       || ((0x2013U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                           || ((0x40005013U == (0xfe00707fU 
                                                & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                               || ((0x5013U == (0xfe00707fU 
                                                & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                                   || ((0x1013U == 
                                        (0xfe00707fU 
                                         & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                                       || ((0x37U == 
                                            (0x7fU 
                                             & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                                           || (0x17U 
                                               != (0x7fU 
                                                   & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))))))))
                    : ((((((((0x2023U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)) 
                             | (0x6fU == (0x7fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                            | (0x67U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                           | (0x1063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                          | (0x63U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                         | (0x5063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                        | (0x4063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                       | (0x6063U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))))));
    ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__b_zero 
        = (0U == vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out);
    ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__b_lsb 
        = (1U & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out);
    ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k = 0U;
    ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__shamt = 0U;
    if (ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__b_zero) {
        ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__shamt = 0U;
    } else if (ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__b_lsb) {
        ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__shamt = 1U;
    } else {
        if ((1U & (~ vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out))) {
            ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                = (0x1fU & ((IData)(1U) + (IData)(ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
            if ((1U & (~ (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                          >> 1U)))) {
                ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                    = (0x1fU & ((IData)(1U) + (IData)(ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                if ((1U & (~ (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                              >> 2U)))) {
                    ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                        = (0x1fU & ((IData)(1U) + (IData)(ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                    if ((1U & (~ (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                  >> 3U)))) {
                        ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                            = (0x1fU & ((IData)(1U) 
                                        + (IData)(ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                        if ((1U & (~ (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                      >> 4U)))) {
                            ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                = (0x1fU & ((IData)(1U) 
                                            + (IData)(ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                            if ((1U & (~ (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                          >> 5U)))) {
                                ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                    = (0x1fU & ((IData)(1U) 
                                                + (IData)(ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                if ((1U & (~ (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                              >> 6U)))) {
                                    ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                        = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                    if ((1U & (~ (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                  >> 7U)))) {
                                        ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                            = (0x1fU 
                                               & ((IData)(1U) 
                                                  + (IData)(ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                        if ((1U & (~ 
                                                   (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                    >> 8U)))) {
                                            ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                = (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                     >> 9U)))) {
                                                ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                    = 
                                                    (0x1fU 
                                                     & ((IData)(1U) 
                                                        + (IData)(ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                         >> 0xaU)))) {
                                                    ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                             >> 0xbU)))) {
                                                        ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                 >> 0xcU)))) {
                                                            ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                = 
                                                                (0x1fU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                     >> 0xdU)))) {
                                                                ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                    = 
                                                                    (0x1fU 
                                                                     & ((IData)(1U) 
                                                                        + (IData)(ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                         >> 0xeU)))) {
                                                                    ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                        = 
                                                                        (0x1fU 
                                                                         & ((IData)(1U) 
                                                                            + (IData)(ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                             >> 0xfU)))) {
                                                                        ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                            = 
                                                                            (0x1fU 
                                                                             & ((IData)(1U) 
                                                                                + (IData)(ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x10U)))) {
                                                                            ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                            if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x11U)))) {
                                                                                ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x12U)))) {
                                                                                ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x13U)))) {
                                                                                ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x14U)))) {
                                                                                ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x15U)))) {
                                                                                ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x16U)))) {
                                                                                ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x17U)))) {
                                                                                ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x18U)))) {
                                                                                ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x19U)))) {
                                                                                ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x1aU)))) {
                                                                                ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x1bU)))) {
                                                                                ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x1cU)))) {
                                                                                ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x1dU)))) {
                                                                                ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x1eU)))) {
                                                                                ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x1fU)))) {
                                                                                ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
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
        ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__shamt 
            = ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k;
    }
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__wb_result_M 
        = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__wb_result_sel_M)
            ? ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__wb_result_sel_M)
                ? (IData)(vlSelf->dmem_respstream_msg)
                : 0U) : vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__ex_result_M);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__rf_wen_W 
        = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_pending_W) 
           & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_W));
    ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_14 
        = ((0U != (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_X)) 
           & (1U != vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__inst_X));
    ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_11 
        = ((0U != (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_M)) 
           & (1U != vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__inst_M));
    ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_8 
        = ((0U != (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__rf_waddr_W)) 
           & (1U != vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__inst_W));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__alu_result_X 
        = ((8U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__alu_fn_X))
            ? ((4U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__alu_fn_X))
                ? ((2U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__alu_fn_X))
                    ? 0U : ((1U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__alu_fn_X))
                             ? 0U : vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op2_X))
                : ((2U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__alu_fn_X))
                    ? ((1U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__alu_fn_X))
                        ? vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op1_X
                        : 0U) : ((1U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__alu_fn_X))
                                  ? 0U : (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op1_X 
                                          << (0x1fU 
                                              & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op2_X)))))
            : ((4U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__alu_fn_X))
                ? ((2U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__alu_fn_X))
                    ? ((1U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__alu_fn_X))
                        ? (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op1_X 
                           >> (0x1fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op2_X))
                        : VL_SHIFTRS_III(32,32,5, vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op1_X, 
                                         (0x1fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op2_X)))
                    : ((1U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__alu_fn_X))
                        ? (VL_LTS_III(32, vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op1_X, vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op2_X)
                            ? 1U : 0U) : (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op1_X 
                                          ^ vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op2_X)))
                : ((2U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__alu_fn_X))
                    ? ((1U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__alu_fn_X))
                        ? (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op1_X 
                           | vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op2_X)
                        : (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op1_X 
                           & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op2_X))
                    : ((1U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__alu_fn_X))
                        ? (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op1_X 
                           - vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op2_X)
                        : (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op1_X 
                           + vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op2_X)))));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    __Vtableidx2 = (((vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op1_X 
                      < vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op2_X) 
                     << 6U) | ((VL_LTS_III(32, vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op1_X, vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op2_X) 
                                << 5U) | (((vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op1_X 
                                            == vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op2_X) 
                                           << 4U) | 
                                          (((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__br_type_X) 
                                            << 1U) 
                                           | (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_X)))));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__pc_redirect_X 
        = VProcAlt_noparam__ConstPool__TABLE_he92e35b8_0
        [__Vtableidx2];
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__pc_sel_X 
        = VProcAlt_noparam__ConstPool__TABLE_h81fecf40_0
        [__Vtableidx2];
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_22 
        = ((0U != (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_X)) 
           & (1U == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__dmem_type_X)));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imul_req_rdy_D = 0U;
    ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__csrr_D 
        = (((((((((0x13U == vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D) 
                  | (0x2073U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                 | (0x1073U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
                | (0x33U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
               | (0x40000033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
              | (0x2000033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
             | (0x7033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
            | (0x6033U == (0xfe00707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))) 
           && ((0x13U != vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D) 
               && (0x2073U == (0x707fU & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D))));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_17 
        = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_X) 
           & ((0x1fU & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                        >> 0xfU)) == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_X)));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_15 
        = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_X) 
           & ((0x1fU & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                        >> 0x14U)) == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_X)));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imul_resp_val_X = 0U;
    if ((0U != (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
        if ((1U == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
            ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__add_mux_sel 
                = (1U & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out);
        }
        if ((1U != (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
            if ((2U == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
                vlSelf->ProcAlt_noparam__DOT__v__DOT__imul_resp_val_X = 1U;
            }
        }
    }
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__ostall_W 
        = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_W) 
           & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_W) 
              & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__add_mux_output 
        = ((IData)(ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__add_mux_sel)
            ? ((IData)(ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__add_mux_sel)
                ? (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__a_reg_out 
                   + vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul_resp_msg)
                : 0U) : vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul_resp_msg);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_D = 0U;
    if (((IData)(ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__csrw_D) 
         & (0x7c0U == (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                       >> 0x14U)))) {
        vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_D = 1U;
    }
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stats_en_wen_D = 0U;
    if (((IData)(ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__csrw_D) 
         & (0x7c1U == (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                       >> 0x14U)))) {
        vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stats_en_wen_D = 1U;
    }
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__a_mux_in0 
        = (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__a_reg_out 
           << (IData)(ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__shamt));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__b_mux_in0 
        = (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
           >> (IData)(ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__shamt));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imm_D 
        = ((4U & (IData)(ProcAlt_noparam__DOT__v__DOT__imm_type_D))
            ? ((2U & (IData)(ProcAlt_noparam__DOT__v__DOT__imm_type_D))
                ? 0U : ((1U & (IData)(ProcAlt_noparam__DOT__v__DOT__imm_type_D))
                         ? 0U : (((- (IData)((vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                              >> 0x1fU))) 
                                  << 0x14U) | ((0xff000U 
                                                & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D) 
                                               | ((0x800U 
                                                   & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                                        >> 0x14U)))))))
            : ((2U & (IData)(ProcAlt_noparam__DOT__v__DOT__imm_type_D))
                ? ((1U & (IData)(ProcAlt_noparam__DOT__v__DOT__imm_type_D))
                    ? (0xfffff000U & vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D)
                    : (((- (IData)((vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0x800U & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                     << 4U)) | ((0x7e0U 
                                                 & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                                      >> 7U))))))
                : ((1U & (IData)(ProcAlt_noparam__DOT__v__DOT__imm_type_D))
                    ? (((- (IData)((vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                    >> 0x1fU))) << 0xbU) 
                       | ((0x7e0U & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                                      >> 7U))))
                    : (((- (IData)((vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                    >> 0x1fU))) << 0xbU) 
                       | (0x7ffU & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                    >> 0x14U))))));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_reqstream_enq_msg[0U] 
        = (IData)((QData)((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__dmem_write_reg_out)));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_reqstream_enq_msg[1U] 
        = ((vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__alu_result_X 
            << 2U) | (IData)(((QData)((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__dmem_write_reg_out)) 
                              >> 0x20U)));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_reqstream_enq_msg[2U] 
        = ((0xfffffffcU & (((2U == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__dmem_type_X))
                             ? 1U : 0U) << 0xaU)) | 
           (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__alu_result_X 
            >> 0x1eU));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__ex_result_X 
        = ((0U == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ex_result_sel_X))
            ? ((IData)(4U) + vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__pc_reg_X_out)
            : ((1U == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ex_result_sel_X))
                ? vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__alu_result_X
                : ((2U == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ex_result_sel_X))
                    ? vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul_resp_msg
                    : 0U)));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__csrr_sel_D = 0U;
    if (((IData)(ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__csrr_D) 
         & (0xfc1U == (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                       >> 0x14U)))) {
        vlSelf->ProcAlt_noparam__DOT__v__DOT__csrr_sel_D = 1U;
    }
    if (((IData)(ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__csrr_D) 
         & (0xf14U == (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                       >> 0x14U)))) {
        vlSelf->ProcAlt_noparam__DOT__v__DOT__csrr_sel_D = 2U;
    }
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__mngr2proc_rdy_D = 0U;
    if (((IData)(ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__csrr_D) 
         & (0xfc0U == (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                       >> 0x14U)))) {
        vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__mngr2proc_rdy_D = 1U;
    }
    ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_16 
        = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rs2_en_D) 
           & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_D));
    ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_18 
        = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rs1_en_D) 
           & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_D));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_W 
        = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_W) 
           & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__ostall_W));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_7 
        = (((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_M) 
            & ((~ (IData)(vlSelf->dmem_respstream_val)) 
               & (0U != (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__dmem_type_M)))) 
           | (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__ostall_W));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__jal_target_D 
        = (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__pc_D 
           + vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imm_D);
    if (vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
        vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[0U] 
            = vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U];
        vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[1U] 
            = vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U];
        vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[2U] 
            = vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U];
    } else if (vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
        vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[0U] = 0U;
        vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[1U] = 0U;
        vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[2U] = 0U;
    } else {
        vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[0U] 
            = vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_reqstream_enq_msg[0U];
        vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[1U] 
            = vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_reqstream_enq_msg[1U];
        vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[2U] 
            = vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_reqstream_enq_msg[2U];
    }
    __Vtableidx1 = ((((IData)(ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_16) 
                      & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_W) 
                         & (((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__rf_wen_W) 
                             & ((0x1fU & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                          >> 0x14U)) 
                                == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__rf_waddr_W))) 
                            & (IData)(ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_8)))) 
                     << 5U) | ((((IData)(ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_16) 
                                 & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_M) 
                                    & (((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_M) 
                                        & ((0x1fU & 
                                            (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                             >> 0x14U)) 
                                           == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_M))) 
                                       & (IData)(ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_11)))) 
                                << 4U) | ((((IData)(ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_16) 
                                            & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_X) 
                                               & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_15) 
                                                  & (IData)(ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_14)))) 
                                           << 3U) | 
                                          ((((IData)(ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_18) 
                                             & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_W) 
                                                & (((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__rf_wen_W) 
                                                    & ((0x1fU 
                                                        & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                                           >> 0xfU)) 
                                                       == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__rf_waddr_W))) 
                                                   & (IData)(ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_8)))) 
                                            << 2U) 
                                           | ((((IData)(ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_18) 
                                                & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_M) 
                                                   & (((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_M) 
                                                       & ((0x1fU 
                                                           & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                                              >> 0xfU)) 
                                                          == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_M))) 
                                                      & (IData)(ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_11)))) 
                                               << 1U) 
                                              | ((IData)(ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_18) 
                                                 & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_X) 
                                                    & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_17) 
                                                       & (IData)(ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_14)))))))));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__op1_byp_sel_D 
        = VProcAlt_noparam__ConstPool__TABLE_hc577786b_0
        [__Vtableidx1];
    vlSelf->ProcAlt_noparam__DOT__v__DOT__op2_byp_sel_D 
        = VProcAlt_noparam__ConstPool__TABLE_h89e50ef4_0
        [__Vtableidx1];
    vlSelf->commit_inst = ((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_W)) 
                           & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_W));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_M 
        = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_M) 
           & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_7));
    __VdfgRegularize_hd87f99a1_0_0 = ((((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_X) 
                                        & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
                                           & (0U != (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__dmem_type_X)))) 
                                       | (((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_X) 
                                           & (2U == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ex_result_sel_X))) 
                                          & (~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imul_resp_val_X)))) 
                                      | (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_7));
    vlSelf->dmem_reqstream_msg[0U] = vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[0U];
    vlSelf->dmem_reqstream_msg[1U] = vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[1U];
    vlSelf->dmem_reqstream_msg[2U] = vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[2U];
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op1_sel_mux_out 
        = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__op1_sel_D)
            ? ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__op1_sel_D)
                ? ((2U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__op1_byp_sel_D))
                    ? ((1U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__op1_byp_sel_D))
                        ? ((0U == (0x1fU & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                            >> 0xfU)))
                            ? 0U : vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile
                           [(0x1fU & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                      >> 0xfU))]) : vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__ex_result_X)
                    : ((1U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__op1_byp_sel_D))
                        ? vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__wb_result_M
                        : vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__wb_result_W))
                : 0U) : vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__pc_D);
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op2_byp_out_D 
        = ((2U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__op2_byp_sel_D))
            ? ((1U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__op2_byp_sel_D))
                ? vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__ex_result_X
                : vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__wb_result_M)
            : ((1U & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__op2_byp_sel_D))
                ? vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__wb_result_W
                : ((0U == (0x1fU & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                                    >> 0x14U))) ? 0U
                    : vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile
                   [(0x1fU & (vlSelf->ProcAlt_noparam__DOT__v__DOT__inst_D 
                              >> 0x14U))])));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->commit_inst) & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_W)));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__next_val_M 
        = ((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_M)) 
           & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_M));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_X 
        = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_X) 
           & (IData)(__VdfgRegularize_hd87f99a1_0_0));
    if ((0U == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
        vlSelf->ProcAlt_noparam__DOT__v__DOT__imul_req_rdy_D = 1U;
    }
    ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_19 
        = (((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_D) 
            & (((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_D) 
                & ((~ (IData)(vlSelf->mngr2proc_val)) 
                   & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__mngr2proc_rdy_D))) 
               | (((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rs1_en_D) 
                   & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_X) 
                      & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_17) 
                         & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_22)))) 
                  | (((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rs2_en_D) 
                      & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_X) 
                         & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_15) 
                            & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_22)))) 
                     | (((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_D) 
                         & (2U == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_D))) 
                        & (~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imul_req_rdy_D))))))) 
           | (IData)(__VdfgRegularize_hd87f99a1_0_0));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op2_D 
        = ((0U == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__op2_sel_D))
            ? vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op2_byp_out_D
            : ((1U == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__op2_sel_D))
                ? vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imm_D
                : ((2U == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__op2_sel_D))
                    ? ((0U == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__csrr_sel_D))
                        ? vlSelf->mngr2proc_msg : (
                                                   (1U 
                                                    == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__csrr_sel_D))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__csrr_sel_D))
                                                     ? vlSelf->core_id
                                                     : 0U)))
                    : 0U)));
    vlSelf->proc2mngr_val = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
                             | (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    vlSelf->dmem_respstream_rdy = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__next_val_M) 
                                   & (0U != (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__dmem_type_M)));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imul_resp_rdy_X 
        = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_X) 
           & ((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_X)) 
              & (2U == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ex_result_sel_X))));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__next_val_X 
        = ((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_X)) 
           & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_X));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_D 
        = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_D) 
           & (IData)(ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_19));
    ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlSelf->proc2mngr_rdy) & (IData)(vlSelf->proc2mngr_val));
    ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__next_val_X) 
              & (0U != (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__dmem_type_X))));
    ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__osquash_X 
        = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__next_val_X) 
           & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__pc_redirect_X));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_23 
        = ((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_D)) 
           & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_D));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en 
        = ((~ ((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
               & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
                  & (IData)(ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)))) 
           & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    vlSelf->dmem_reqstream_val = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
                                  | (IData)(ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__squash_D 
        = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_D) 
           & (IData)(ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__osquash_X));
    vlSelf->mngr2proc_rdy = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_23) 
                             & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__mngr2proc_rdy_D));
    ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__osquash_D 
        = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_23) 
           & (6U == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__br_type_D)));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en) 
              | (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlSelf->dmem_reqstream_rdy) & (IData)(vlSelf->dmem_reqstream_val));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__reg_en_D 
        = (1U & ((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_D)) 
                 | (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__squash_D)));
    ProcAlt_noparam__DOT__v__DOT__pc_sel_F = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__pc_redirect_X)
                                               ? (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__pc_sel_X)
                                               : ((IData)(ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__osquash_D)
                                                   ? 2U
                                                   : 0U));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imul_req_val_D 
        = ((2U == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_D)) 
           & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_D) 
              & ((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_D)) 
                 & (~ (IData)(ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__osquash_D)))));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__squash_F 
        = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_F) 
           & ((IData)(ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__osquash_D) 
              | (IData)(ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__osquash_X)));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__write_en 
        = ((~ ((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
               & ((IData)(ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
                  & (IData)(ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)))) 
           & (IData)(ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__pc_next_F 
        = ((2U & (IData)(ProcAlt_noparam__DOT__v__DOT__pc_sel_F))
            ? ((1U & (IData)(ProcAlt_noparam__DOT__v__DOT__pc_sel_F))
                ? (0xfffffffeU & vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__alu_result_X)
                : vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__jal_target_D)
            : ((1U & (IData)(ProcAlt_noparam__DOT__v__DOT__pc_sel_F))
                ? vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__br_target_X
                : ((IData)(4U) + vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__pc_F)));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__b_mux_sel = 0U;
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__a_mux_sel = 0U;
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__result_mux_sel = 0U;
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__result_en = 0U;
    if ((0U == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
        vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__b_mux_sel 
            = vlSelf->ProcAlt_noparam__DOT__v__DOT__imul_req_val_D;
        vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__a_mux_sel 
            = vlSelf->ProcAlt_noparam__DOT__v__DOT__imul_req_val_D;
        vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__result_mux_sel 
            = vlSelf->ProcAlt_noparam__DOT__v__DOT__imul_req_val_D;
        vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__result_en 
            = vlSelf->ProcAlt_noparam__DOT__v__DOT__imul_req_val_D;
    } else if ((1U == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
        vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__b_mux_sel = 0U;
        vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__a_mux_sel = 0U;
        vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__result_mux_sel = 0U;
        vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__result_en = 1U;
    } else if ((2U == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
        vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__result_en = 0U;
    }
    __Vtableidx3 = (((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imul_resp_rdy_X) 
                     << 5U) | (((0U == vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__b_mux_in0) 
                                << 4U) | (((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imul_req_rdy_D) 
                                           << 3U) | 
                                          (((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imul_req_val_D) 
                                            << 2U) 
                                           | (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state)))));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__ctrl__DOT__next_state 
        = VProcAlt_noparam__ConstPool__TABLE_h8b2b421b_0
        [__Vtableidx3];
    ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop_val 
        = ((1U & (~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop_unit__DOT__state))) 
           && ((IData)(vlSelf->imem_respstream_val) 
               & (~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__squash_F))));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__write_en) 
              | (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if (vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel) {
        vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[0U] = 0U;
        if (vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel) {
            vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[1U] 
                = (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__pc_next_F 
                   << 2U);
            vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[2U] 
                = (vlSelf->ProcAlt_noparam__DOT__v__DOT__dpath__DOT__pc_next_F 
                   >> 0x1eU);
        } else {
            vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[1U] = 0U;
            vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[2U] = 0U;
        }
    } else {
        vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[0U] 
            = vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
            [vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
        vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[1U] 
            = vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
            [vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
        vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[2U] 
            = vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
            [vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    }
    vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_F 
        = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_F) 
           & (((~ (IData)(ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop_val)) 
               & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_F)) 
              | (IData)(ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_19)));
    vlSelf->imem_reqstream_msg[0U] = vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[0U];
    vlSelf->imem_reqstream_msg[1U] = vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[1U];
    vlSelf->imem_reqstream_msg[2U] = vlSelf->ProcAlt_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[2U];
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop_rdy 
        = (1U & ((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_F)) 
                 | (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__squash_F)));
    vlSelf->imem_respstream_rdy = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop_unit__DOT__state) 
                                   || (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop_rdy));
    ProcAlt_noparam__DOT__v__DOT__imem_reqstream_enq_val 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop_rdy));
    ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop_unit__DOT____VdfgExtracted_hff9b16a6__0 
        = (1U & (~ ((IData)(vlSelf->imem_respstream_rdy) 
                    & (IData)(vlSelf->imem_respstream_val))));
    ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & (IData)(ProcAlt_noparam__DOT__v__DOT__imem_reqstream_enq_val));
    vlSelf->imem_reqstream_val = (1U & ((~ (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel)) 
                                        | ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel) 
                                           & (IData)(ProcAlt_noparam__DOT__v__DOT__imem_reqstream_enq_val))));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop_unit__DOT__next_state 
        = ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop_unit__DOT__state)
            ? (IData)(ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop_unit__DOT____VdfgExtracted_hff9b16a6__0)
            : ((IData)(ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop_unit__DOT____VdfgExtracted_hff9b16a6__0) 
               & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__squash_F)));
    ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlSelf->imem_reqstream_rdy) & (IData)(vlSelf->imem_reqstream_val));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
            & ((~ (IData)(ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((1U & ((IData)(1U) + (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____VdfgRegularize_h1851b5ac_0_0 
        = (1U & (~ ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel) 
                    & ((IData)(ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
                       & (IData)(ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)))));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (1U & (((IData)(ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____VdfgRegularize_h1851b5ac_0_0) 
                  & (IData)(ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq))
                  ? ((IData)(1U) + (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                  : (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__write_en 
        = ((IData)(ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____VdfgRegularize_h1851b5ac_0_0) 
           & (IData)(ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (1U & ((IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__write_en)
                  ? ((IData)(1U) + (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                  : (IData)(vlSelf->ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
}
