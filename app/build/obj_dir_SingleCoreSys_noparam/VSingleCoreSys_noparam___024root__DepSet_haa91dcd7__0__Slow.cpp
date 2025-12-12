// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSingleCoreSys_noparam.h for the primary calling header

#include "VSingleCoreSys_noparam__pch.h"
#include "VSingleCoreSys_noparam__Syms.h"
#include "VSingleCoreSys_noparam___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCoreSys_noparam___024root___dump_triggers__stl(VSingleCoreSys_noparam___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VSingleCoreSys_noparam___024root___eval_triggers__stl(VSingleCoreSys_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSingleCoreSys_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCoreSys_noparam___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VSingleCoreSys_noparam___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

extern const VlUnpacked<CData/*0:0*/, 128> VSingleCoreSys_noparam__ConstPool__TABLE_he92e35b8_0;
extern const VlUnpacked<CData/*1:0*/, 128> VSingleCoreSys_noparam__ConstPool__TABLE_h81fecf40_0;
extern const VlUnpacked<CData/*1:0*/, 64> VSingleCoreSys_noparam__ConstPool__TABLE_hc577786b_0;
extern const VlUnpacked<CData/*1:0*/, 64> VSingleCoreSys_noparam__ConstPool__TABLE_h89e50ef4_0;
extern const VlUnpacked<CData/*1:0*/, 64> VSingleCoreSys_noparam__ConstPool__TABLE_h8b2b421b_0;

VL_ATTR_COLD void VSingleCoreSys_noparam___024root___stl_sequent__TOP__0(VSingleCoreSys_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSingleCoreSys_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCoreSys_noparam___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_enq_val;
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_enq_val = 0;
    CData/*0:0*/ SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_drop_val;
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_drop_val = 0;
    CData/*1:0*/ SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__pc_sel_F;
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__pc_sel_F = 0;
    CData/*0:0*/ SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__op1_sel_D;
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__op1_sel_D = 0;
    CData/*2:0*/ SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imm_type_D;
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imm_type_D = 0;
    CData/*1:0*/ SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__op1_byp_sel_D;
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__op1_byp_sel_D = 0;
    CData/*1:0*/ SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__op2_byp_sel_D;
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__op2_byp_sel_D = 0;
    CData/*0:0*/ SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq = 0;
    CData/*0:0*/ SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____VdfgRegularize_h1851b5ac_0_0;
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____VdfgRegularize_h1851b5ac_0_0 = 0;
    CData/*0:0*/ SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_drop_unit__DOT____VdfgExtracted_hff9b16a6__0;
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_drop_unit__DOT____VdfgExtracted_hff9b16a6__0 = 0;
    CData/*0:0*/ SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq = 0;
    CData/*0:0*/ SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq = 0;
    CData/*0:0*/ SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__osquash_D;
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__osquash_D = 0;
    CData/*0:0*/ SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__csrr_D;
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__csrr_D = 0;
    CData/*0:0*/ SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__csrw_D;
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__csrw_D = 0;
    CData/*0:0*/ SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_7;
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_7 = 0;
    CData/*0:0*/ SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_8;
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_8 = 0;
    CData/*0:0*/ SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_11;
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_11 = 0;
    CData/*0:0*/ SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_14;
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_14 = 0;
    CData/*0:0*/ SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_16;
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_16 = 0;
    CData/*0:0*/ SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_18;
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_18 = 0;
    CData/*0:0*/ SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_19;
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_19 = 0;
    CData/*0:0*/ SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__add_mux_sel;
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__add_mux_sel = 0;
    CData/*4:0*/ SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__shamt;
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__shamt = 0;
    CData/*0:0*/ SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__b_zero;
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__b_zero = 0;
    CData/*0:0*/ SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__b_lsb;
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__b_lsb = 0;
    CData/*4:0*/ SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k;
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k = 0;
    IData/*31:0*/ SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__data;
    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__data = 0;
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*5:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state)) 
                               << 2U) | (((1U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state)))))))) {
        if ((((2U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state)) 
              << 2U) | (((1U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state)) 
                         << 1U) | (0U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF_NX("[%0t] %%Error: IntMulAlt.v:250: Assertion failed in %NSingleCoreSys_noparam.v.proc.dpath.imul.ctrl: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state));
                VL_STOP_MT("lab1_imul/IntMulAlt.v", 250, "");
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF_NX("[%0t] %%Error: IntMulAlt.v:250: Assertion failed in %NSingleCoreSys_noparam.v.proc.dpath.imul.ctrl: unique case, but none matched for '2'h%x'\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),2,(IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state));
            VL_STOP_MT("lab1_imul/IntMulAlt.v", 250, "");
        }
    }
    if (((((((((0x13U == vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D) 
               | (0x2073U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
              | (0x1073U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
             | (0x33U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
            | (0x40000033U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
           | (0x2000033U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
          | (0x7033U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
         | (0x6033U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D)))) {
        if ((0x13U == vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D)) {
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__alu_fn_D = 0U;
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__op2_sel_D = 0U;
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 1U;
        } else if ((0x2073U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) {
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__alu_fn_D = 0xcU;
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__op2_sel_D = 2U;
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 1U;
        } else {
            if ((0x1073U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) {
                vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__alu_fn_D = 0xbU;
                vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 1U;
            } else if ((0x33U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) {
                vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__alu_fn_D = 0U;
                vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 1U;
            } else if ((0x40000033U == (0xfe00707fU 
                                        & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) {
                vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__alu_fn_D = 1U;
                vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 1U;
            } else if ((0x2000033U == (0xfe00707fU 
                                       & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) {
                vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__alu_fn_D = 0U;
                vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 2U;
            } else {
                vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__alu_fn_D 
                    = ((0x7033U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))
                        ? 2U : 3U);
                vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 1U;
            }
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__op2_sel_D = 0U;
        }
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__rf_wen_D 
            = ((0x13U != vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D) 
               && ((0x2073U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D)) 
                   || (0x1073U != (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))));
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
        SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imm_type_D = 0U;
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__br_type_D = 0U;
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__rs2_en_D 
            = ((0x13U != vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D) 
               && ((0x2073U != (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D)) 
                   && (0x1073U != (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))));
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__rs1_en_D 
            = ((0x13U != vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D) 
               && (0x2073U != (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D)));
    } else {
        if (((((((((0x4033U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D)) 
                   | (0x2033U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                  | (0x40005033U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                 | (0x5033U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                | (0x1033U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
               | (0x13U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
              | (0x7013U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
             | (0x6013U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D)))) {
            if ((0x4033U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) {
                vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__alu_fn_D = 4U;
                vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__op2_sel_D = 0U;
            } else if ((0x2033U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) {
                vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__alu_fn_D = 5U;
                vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__op2_sel_D = 0U;
            } else if ((0x40005033U == (0xfe00707fU 
                                        & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) {
                vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__alu_fn_D = 6U;
                vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__op2_sel_D = 0U;
            } else if ((0x5033U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) {
                vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__alu_fn_D = 7U;
                vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__op2_sel_D = 0U;
            } else if ((0x1033U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) {
                vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__alu_fn_D = 8U;
                vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__op2_sel_D = 0U;
            } else {
                vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__alu_fn_D 
                    = ((0x13U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))
                        ? 0U : ((0x7013U == (0x707fU 
                                             & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))
                                 ? 2U : 3U));
                vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__op2_sel_D = 1U;
            }
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
            SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imm_type_D = 0U;
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__br_type_D = 0U;
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 1U;
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__rs2_en_D 
                = ((0x4033U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D)) 
                   || ((0x2033U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D)) 
                       || ((0x40005033U == (0xfe00707fU 
                                            & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D)) 
                           || ((0x5033U == (0xfe00707fU 
                                            & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D)) 
                               || (0x1033U == (0xfe00707fU 
                                               & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))))));
        } else {
            if (((((((((0x4013U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D)) 
                       | (0x2013U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                      | (0x40005013U == (0xfe00707fU 
                                         & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                     | (0x5013U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                    | (0x1013U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                   | (0x37U == (0x7fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                  | (0x17U == (0x7fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                 | (0x2003U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D)))) {
                if ((0x4013U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) {
                    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__alu_fn_D = 4U;
                    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
                    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imm_type_D = 0U;
                } else if ((0x2013U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) {
                    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__alu_fn_D = 5U;
                    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
                    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imm_type_D = 0U;
                } else if ((0x40005013U == (0xfe00707fU 
                                            & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) {
                    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__alu_fn_D = 6U;
                    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
                    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imm_type_D = 0U;
                } else if ((0x5013U == (0xfe00707fU 
                                        & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) {
                    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__alu_fn_D = 7U;
                    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
                    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imm_type_D = 0U;
                } else if ((0x1013U == (0xfe00707fU 
                                        & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) {
                    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__alu_fn_D = 8U;
                    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
                    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imm_type_D = 0U;
                } else if ((0x37U == (0x7fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) {
                    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__alu_fn_D = 0xcU;
                    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
                    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imm_type_D = 3U;
                } else {
                    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__alu_fn_D = 0U;
                    if ((0x17U == (0x7fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) {
                        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
                        SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imm_type_D = 3U;
                    } else {
                        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__dmem_type_D = 1U;
                        SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imm_type_D = 0U;
                    }
                }
                vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__op2_sel_D = 1U;
                vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__br_type_D = 0U;
                vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 1U;
            } else {
                vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__alu_fn_D = 0U;
                if (((((((((0x2023U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D)) 
                           | (0x6fU == (0x7fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                          | (0x67U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                         | (0x1063U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                        | (0x63U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                       | (0x5063U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                      | (0x4063U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                     | (0x6063U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D)))) {
                    if ((0x2023U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) {
                        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__dmem_type_D = 2U;
                        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__op2_sel_D = 1U;
                        SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imm_type_D = 1U;
                        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__br_type_D = 0U;
                        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 1U;
                    } else {
                        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
                        if ((0x6fU == (0x7fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) {
                            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__op2_sel_D = 1U;
                            SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imm_type_D = 4U;
                            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__br_type_D = 6U;
                            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 0U;
                        } else if ((0x67U == (0x707fU 
                                              & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) {
                            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__op2_sel_D = 1U;
                            SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imm_type_D = 0U;
                            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__br_type_D = 7U;
                            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 0U;
                        } else {
                            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__op2_sel_D = 0U;
                            SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imm_type_D = 2U;
                            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__br_type_D 
                                = ((0x1063U == (0x707fU 
                                                & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))
                                    ? 1U : ((0x63U 
                                             == (0x707fU 
                                                 & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))
                                             ? 2U : 
                                            ((0x5063U 
                                              == (0x707fU 
                                                  & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))
                                              ? 3U : 
                                             ((0x4063U 
                                               == (0x707fU 
                                                   & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))
                                               ? 4U
                                               : 5U))));
                            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 1U;
                        }
                    }
                } else {
                    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__dmem_type_D = 0U;
                    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__op2_sel_D = 0U;
                    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imm_type_D = 0U;
                    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__br_type_D = 0U;
                    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__ex_result_sel_D = 0U;
                }
            }
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__rs2_en_D 
                = ((1U & (~ ((((((((0x4013U == (0x707fU 
                                                & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D)) 
                                   | (0x2013U == (0x707fU 
                                                  & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                                  | (0x40005013U == 
                                     (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                                 | (0x5013U == (0xfe00707fU 
                                                & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                                | (0x1013U == (0xfe00707fU 
                                               & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                               | (0x37U == (0x7fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                              | (0x17U == (0x7fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                             | (0x2003U == (0x707fU 
                                            & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))))) 
                   && (((((((((0x2023U == (0x707fU 
                                           & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D)) 
                              | (0x6fU == (0x7fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                             | (0x67U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                            | (0x1063U == (0x707fU 
                                           & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                           | (0x63U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                          | (0x5063U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                         | (0x4063U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                        | (0x6063U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                       && ((0x2023U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D)) 
                           || (0x6fU != (0x7fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D)))));
        }
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__rf_wen_D 
            = (((((((((0x4033U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D)) 
                      | (0x2033U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                     | (0x40005033U == (0xfe00707fU 
                                        & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                    | (0x5033U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                   | (0x1033U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                  | (0x13U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                 | (0x7013U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                | (0x6013U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
               || (((((((((0x4013U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D)) 
                          | (0x2013U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                         | (0x40005013U == (0xfe00707fU 
                                            & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                        | (0x5013U == (0xfe00707fU 
                                       & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                       | (0x1013U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                      | (0x37U == (0x7fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                     | (0x17U == (0x7fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                    | (0x2003U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                   || (((((((((0x2023U == (0x707fU 
                                           & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D)) 
                              | (0x6fU == (0x7fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                             | (0x67U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                            | (0x1063U == (0x707fU 
                                           & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                           | (0x63U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                          | (0x5063U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                         | (0x4063U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                        | (0x6063U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                       && ((0x2023U != (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D)) 
                           && ((0x6fU == (0x7fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D)) 
                               || (0x67U == (0x707fU 
                                             & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D)))))));
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__rs1_en_D 
            = (((((((((0x4033U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D)) 
                      | (0x2033U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                     | (0x40005033U == (0xfe00707fU 
                                        & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                    | (0x5033U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                   | (0x1033U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                  | (0x13U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                 | (0x7013U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                | (0x6013U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
               || (((((((((0x4013U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D)) 
                          | (0x2013U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                         | (0x40005013U == (0xfe00707fU 
                                            & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                        | (0x5013U == (0xfe00707fU 
                                       & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                       | (0x1013U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                      | (0x37U == (0x7fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                     | (0x17U == (0x7fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                    | (0x2003U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                   || (((((((((0x2023U == (0x707fU 
                                           & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D)) 
                              | (0x6fU == (0x7fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                             | (0x67U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                            | (0x1063U == (0x707fU 
                                           & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                           | (0x63U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                          | (0x5063U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                         | (0x4063U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                        | (0x6063U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                       && ((0x2023U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D)) 
                           || (0x6fU != (0x7fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))))));
    }
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__wb_result_sel_D 
        = ((1U & (~ ((((((((0x13U == vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D) 
                           | (0x2073U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                          | (0x1073U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                         | (0x33U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                        | (0x40000033U == (0xfe00707fU 
                                           & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                       | (0x2000033U == (0xfe00707fU 
                                         & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                      | (0x7033U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                     | (0x6033U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))))) 
           && ((1U & (~ ((((((((0x4033U == (0xfe00707fU 
                                            & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D)) 
                               | (0x2033U == (0xfe00707fU 
                                              & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                              | (0x40005033U == (0xfe00707fU 
                                                 & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                             | (0x5033U == (0xfe00707fU 
                                            & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                            | (0x1033U == (0xfe00707fU 
                                           & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                           | (0x13U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                          | (0x7013U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                         | (0x6013U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))))) 
               && (((((((((0x4013U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D)) 
                          | (0x2013U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                         | (0x40005013U == (0xfe00707fU 
                                            & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                        | (0x5013U == (0xfe00707fU 
                                       & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                       | (0x1013U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                      | (0x37U == (0x7fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                     | (0x17U == (0x7fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                    | (0x2003U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                   && ((0x4013U != (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D)) 
                       && ((0x2013U != (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D)) 
                           && ((0x40005013U != (0xfe00707fU 
                                                & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D)) 
                               && ((0x5013U != (0xfe00707fU 
                                                & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D)) 
                                   && ((0x1013U != 
                                        (0xfe00707fU 
                                         & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D)) 
                                       && ((0x37U != 
                                            (0x7fU 
                                             & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D)) 
                                           && (0x17U 
                                               != (0x7fU 
                                                   & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D)))))))))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__read_data_reg_en 
        = ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && (1U & ((8U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))
                                         ? ((1U & (~ 
                                                   ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                    >> 2U))) 
                                            && ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                     >> 1U))) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state)))))
                                         : ((4U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))
                                             ? ((1U 
                                                 & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                    >> 1U)) 
                                                && (1U 
                                                    & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state)))
                                             : ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                >> 1U)))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__evict_addr_reg_en 
        = ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                         >> 3U)) && 
                                  ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                             >> 2U))) 
                                   && ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                 >> 1U))) 
                                       && (1U & (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state)))))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__memresp_en 
        = ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & 
                                              (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state)))))));
    vlSelf->imem_reqstream_val = ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                            >> 4U))) 
                                  && ((8U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))
                                       ? ((1U & (~ 
                                                 ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                   >> 1U))) 
                                              && (1U 
                                                  & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))))
                                       : ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                 >> 2U)) 
                                          && ((1U & 
                                               (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                   >> 1U))) 
                                              && (1U 
                                                  & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))))));
    vlSelf->imem_respstream_rdy = ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                             >> 4U))) 
                                   && ((8U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))
                                        ? ((1U & (~ 
                                                  ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                   >> 2U))) 
                                           && ((1U 
                                                & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                   >> 1U)) 
                                               && (1U 
                                                   & (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state)))))
                                        : ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                  >> 2U)) 
                                           && (1U & 
                                               ((2U 
                                                 & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))
                                                 ? 
                                                (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))
                                                 : (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cachereq_en 
        = ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                  >> 4U)) || (1U & ((8U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))
                                     ? ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                        >> 2U) : ((1U 
                                                   & (~ 
                                                      ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                       >> 2U))) 
                                                  && ((1U 
                                                       & (~ 
                                                          ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                           >> 1U))) 
                                                      && (1U 
                                                          & (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))))))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__data_array_ren 
        = ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((8U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))
                                   ? ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                >> 2U))) 
                                      && ((1U & (~ 
                                                 ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                  >> 1U))) 
                                          && (1U & 
                                              (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state)))))
                                   : ((4U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))
                                       ? ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state)))
                                       : ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__read_data_reg_en 
        = ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && (1U & ((8U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))
                                         ? ((1U & (~ 
                                                   ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                    >> 2U))) 
                                            && ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                     >> 1U))) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state)))))
                                         : ((4U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))
                                             ? ((1U 
                                                 & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                    >> 1U)) 
                                                && (1U 
                                                    & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state)))
                                             : ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                >> 1U)))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__evict_addr_reg_en 
        = ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                         >> 3U)) && 
                                  ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                             >> 2U))) 
                                   && ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                 >> 1U))) 
                                       && (1U & (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state)))))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__memresp_en 
        = ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & 
                                              (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state)))))));
    vlSelf->dmem_reqstream_val = ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                            >> 4U))) 
                                  && ((8U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))
                                       ? ((1U & (~ 
                                                 ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                   >> 1U))) 
                                              && (1U 
                                                  & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))))
                                       : ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                 >> 2U)) 
                                          && ((1U & 
                                               (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                   >> 1U))) 
                                              && (1U 
                                                  & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))))));
    vlSelf->dmem_respstream_rdy = ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                             >> 4U))) 
                                   && ((8U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))
                                        ? ((1U & (~ 
                                                  ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                   >> 2U))) 
                                           && ((1U 
                                                & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                   >> 1U)) 
                                               && (1U 
                                                   & (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state)))))
                                        : ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                  >> 2U)) 
                                           && (1U & 
                                               ((2U 
                                                 & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))
                                                 ? 
                                                (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))
                                                 : (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cachereq_en 
        = ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                  >> 4U)) || (1U & ((8U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))
                                     ? ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                        >> 2U) : ((1U 
                                                   & (~ 
                                                      ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                       >> 2U))) 
                                                  && ((1U 
                                                       & (~ 
                                                          ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                           >> 1U))) 
                                                      && (1U 
                                                          & (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))))))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__data_array_ren 
        = ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((8U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))
                                   ? ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                >> 2U))) 
                                      && ((1U & (~ 
                                                 ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                  >> 1U))) 
                                          && (1U & 
                                              (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state)))))
                                   : ((4U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))
                                       ? ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state)))
                                       : ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))))));
    vlSelf->stats_en = (0U != vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__stats_en_W);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__tag_array_wen_way1 = 0U;
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__tag_array_wen_way0 = 0U;
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__valid_wen_way1 = 0U;
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__valid_wen_way0 = 0U;
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__tag_array_wen_way1 = 0U;
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__tag_array_wen_way0 = 0U;
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__valid_wen_way1 = 0U;
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__valid_wen_way0 = 0U;
    vlSelf->proc2mngr_msg = ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)
                              ? vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore
                              : ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)
                                  ? 0U : vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__wb_result_W));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__data 
        = ((1U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__cachereq_type_reg_out))
            ? 0U : ((8U & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out)
                     ? ((4U & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out)
                         ? vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__read_data_reg_out[3U]
                         : vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__read_data_reg_out[2U])
                     : ((4U & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out)
                         ? vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__read_data_reg_out[1U]
                         : vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__read_data_reg_out[0U])));
    if ((0x10U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))) {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cacheresp_type = 0U;
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__memreq_type = 0U;
    } else if ((8U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))) {
        if ((4U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))) {
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cacheresp_type = 0U;
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__memreq_type = 0U;
        } else if ((2U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))) {
            if ((1U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))) {
                vlSelf->__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__cs__255__cs_cacheresp_type 
                    = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__cachereq_type_reg_out;
                vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cacheresp_type 
                    = vlSelf->__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__cs__255__cs_cacheresp_type;
            } else {
                vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cacheresp_type = 0U;
            }
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__memreq_type = 0U;
        } else {
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cacheresp_type = 0U;
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__memreq_type 
                = ((1U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))
                    ? 1U : 0U);
        }
    } else {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cacheresp_type 
            = ((4U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))
                ? ((2U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))
                    ? 0U : ((1U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))
                             ? 0U : 1U)) : ((2U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))
                                             ? ((1U 
                                                 & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))
                                                 ? 0U
                                                 : 2U)
                                             : 0U));
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__memreq_type = 0U;
    }
    if ((0x10U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cacheresp_type = 0U;
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__memreq_type = 0U;
    } else if ((8U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))) {
        if ((4U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))) {
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cacheresp_type = 0U;
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__memreq_type = 0U;
        } else if ((2U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))) {
            if ((1U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))) {
                vlSelf->__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__cs__321__cs_cacheresp_type 
                    = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out;
                vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cacheresp_type 
                    = vlSelf->__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__cs__321__cs_cacheresp_type;
            } else {
                vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cacheresp_type = 0U;
            }
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__memreq_type = 0U;
        } else {
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cacheresp_type = 0U;
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__memreq_type 
                = ((1U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))
                    ? 1U : 0U);
        }
    } else {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cacheresp_type 
            = ((4U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))
                ? ((2U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))
                    ? 0U : ((1U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))
                             ? 0U : 1U)) : ((2U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))
                                             ? ((1U 
                                                 & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))
                                                 ? 0U
                                                 : 2U)
                                             : 0U));
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__memreq_type = 0U;
    }
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__wben_mux_sel 
        = ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__wben_mux_sel 
        = ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__write_data_mux_sel 
        = ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__write_data_mux_sel 
        = ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))))));
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__add_mux_sel = 0U;
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__mem_req_addr_mux_sel 
        = ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && (1U & ((2U 
                                                 & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))
                                                 ? 
                                                (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))
                                                 : (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__mem_req_addr_mux_sel 
        = ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                             >> 2U)) 
                                      && (1U & ((2U 
                                                 & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))
                                                 ? 
                                                (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))
                                                 : (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))))));
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__csrw_D 
        = (((((((((0x13U == vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D) 
                  | (0x2073U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                 | (0x1073U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                | (0x33U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
               | (0x40000033U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
              | (0x2000033U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
             | (0x7033U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
            | (0x6033U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
           && ((0x13U != vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D) 
               && ((0x2073U != (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D)) 
                   && (0x1073U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D)))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__data_array_wen 
        = ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && (1U & ((4U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))
                                             ? ((2U 
                                                 & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))
                                                 ? (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state)
                                                 : 
                                                (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state)))
                                             : ((1U 
                                                 & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                    >> 1U)) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))))))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__data_array_wen 
        = ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                            >> 3U))) 
                                  && (1U & ((4U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))
                                             ? ((2U 
                                                 & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))
                                                 ? (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state)
                                                 : 
                                                (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state)))
                                             : ((1U 
                                                 & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                    >> 1U)) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))))))));
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__op1_sel_D 
        = (((((((((0x13U == vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D) 
                  | (0x2073U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                 | (0x1073U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                | (0x33U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
               | (0x40000033U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
              | (0x2000033U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
             | (0x7033U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
            | (0x6033U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
           || (((((((((0x4033U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D)) 
                      | (0x2033U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                     | (0x40005033U == (0xfe00707fU 
                                        & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                    | (0x5033U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                   | (0x1033U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                  | (0x13U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                 | (0x7013U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                | (0x6013U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
               || (((((((((0x4013U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D)) 
                          | (0x2013U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                         | (0x40005013U == (0xfe00707fU 
                                            & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                        | (0x5013U == (0xfe00707fU 
                                       & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                       | (0x1013U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                      | (0x37U == (0x7fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                     | (0x17U == (0x7fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                    | (0x2003U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D)))
                    ? ((0x4013U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D)) 
                       || ((0x2013U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D)) 
                           || ((0x40005013U == (0xfe00707fU 
                                                & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D)) 
                               || ((0x5013U == (0xfe00707fU 
                                                & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D)) 
                                   || ((0x1013U == 
                                        (0xfe00707fU 
                                         & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D)) 
                                       || ((0x37U == 
                                            (0x7fU 
                                             & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D)) 
                                           || (0x17U 
                                               != (0x7fU 
                                                   & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))))))))
                    : ((((((((0x2023U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D)) 
                             | (0x6fU == (0x7fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                            | (0x67U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                           | (0x1063U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                          | (0x63U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                         | (0x5063U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                        | (0x4063U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                       | (0x6063U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache_reqstream_rdy 
        = ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                  >> 4U)) || (1U & ((8U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))
                                     ? ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                        >> 2U) : ((1U 
                                                   & (~ 
                                                      ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                       >> 2U))) 
                                                  && ((1U 
                                                       & (~ 
                                                          ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                           >> 1U))) 
                                                      && (1U 
                                                          & (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))))))));
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__b_zero 
        = (0U == vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out);
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__b_lsb 
        = (1U & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out);
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k = 0U;
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__shamt = 0U;
    if (SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__b_zero) {
        SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__shamt = 0U;
    } else if (SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__b_lsb) {
        SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__shamt = 1U;
    } else {
        if ((1U & (~ vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out))) {
            SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                = (0x1fU & ((IData)(1U) + (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
            if ((1U & (~ (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                          >> 1U)))) {
                SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                    = (0x1fU & ((IData)(1U) + (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                if ((1U & (~ (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                              >> 2U)))) {
                    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                        = (0x1fU & ((IData)(1U) + (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                    if ((1U & (~ (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                  >> 3U)))) {
                        SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                            = (0x1fU & ((IData)(1U) 
                                        + (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                        if ((1U & (~ (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                      >> 4U)))) {
                            SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                = (0x1fU & ((IData)(1U) 
                                            + (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                            if ((1U & (~ (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                          >> 5U)))) {
                                SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                    = (0x1fU & ((IData)(1U) 
                                                + (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                if ((1U & (~ (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                              >> 6U)))) {
                                    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                        = (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                    if ((1U & (~ (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                  >> 7U)))) {
                                        SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                            = (0x1fU 
                                               & ((IData)(1U) 
                                                  + (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                        if ((1U & (~ 
                                                   (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                    >> 8U)))) {
                                            SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                = (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                     >> 9U)))) {
                                                SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                    = 
                                                    (0x1fU 
                                                     & ((IData)(1U) 
                                                        + (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                         >> 0xaU)))) {
                                                    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                             >> 0xbU)))) {
                                                        SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                            = 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                 >> 0xcU)))) {
                                                            SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                = 
                                                                (0x1fU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                     >> 0xdU)))) {
                                                                SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                    = 
                                                                    (0x1fU 
                                                                     & ((IData)(1U) 
                                                                        + (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                         >> 0xeU)))) {
                                                                    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                        = 
                                                                        (0x1fU 
                                                                         & ((IData)(1U) 
                                                                            + (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                             >> 0xfU)))) {
                                                                        SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                            = 
                                                                            (0x1fU 
                                                                             & ((IData)(1U) 
                                                                                + (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x10U)))) {
                                                                            SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                            if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x11U)))) {
                                                                                SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x12U)))) {
                                                                                SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x13U)))) {
                                                                                SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x14U)))) {
                                                                                SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x15U)))) {
                                                                                SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x16U)))) {
                                                                                SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x17U)))) {
                                                                                SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x18U)))) {
                                                                                SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x19U)))) {
                                                                                SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x1aU)))) {
                                                                                SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x1bU)))) {
                                                                                SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x1cU)))) {
                                                                                SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x1dU)))) {
                                                                                SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x1eU)))) {
                                                                                SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
                                                                                if (
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
                                                                                >> 0x1fU)))) {
                                                                                SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k 
                                                                                = 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k)));
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
        SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__shamt 
            = SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__pe__DOT__k;
    }
    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__data 
        = ((1U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out))
            ? 0U : ((8U & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out)
                     ? ((4U & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out)
                         ? vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__read_data_reg_out[3U]
                         : vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__read_data_reg_out[2U])
                     : ((4U & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out)
                         ? vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__read_data_reg_out[1U]
                         : vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__read_data_reg_out[0U])));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache_reqstream_rdy 
        = ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                  >> 4U)) || (1U & ((8U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))
                                     ? ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                        >> 2U) : ((1U 
                                                   & (~ 
                                                      ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                       >> 2U))) 
                                                  && ((1U 
                                                       & (~ 
                                                          ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                           >> 1U))) 
                                                      && (1U 
                                                          & (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))))))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__rf_wen_W 
        = ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__rf_wen_pending_W) 
           & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__val_W));
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_14 
        = ((0U != (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__rf_waddr_X)) 
           & (1U != vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__inst_X));
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_11 
        = ((0U != (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__rf_waddr_M)) 
           & (1U != vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__inst_M));
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_8 
        = ((0U != (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__rf_waddr_W)) 
           & (1U != vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__inst_W));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__valid_way0 
        = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__valid_bits_way0__DOT__rfile
        [(7U & (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out 
                >> 4U))];
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__valid_way1 
        = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__valid_bits_way1__DOT__rfile
        [(7U & (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out 
                >> 4U))];
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__valid_way0 
        = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__valid_bits_way0__DOT__rfile
        [(7U & (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                >> 4U))];
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__valid_way1 
        = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__valid_bits_way1__DOT__rfile
        [(7U & (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                >> 4U))];
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__alu_result_X 
        = ((8U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__alu_fn_X))
            ? ((4U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__alu_fn_X))
                ? ((2U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__alu_fn_X))
                    ? 0U : ((1U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__alu_fn_X))
                             ? 0U : vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__op2_X))
                : ((2U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__alu_fn_X))
                    ? ((1U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__alu_fn_X))
                        ? vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__op1_X
                        : 0U) : ((1U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__alu_fn_X))
                                  ? 0U : (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__op1_X 
                                          << (0x1fU 
                                              & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__op2_X)))))
            : ((4U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__alu_fn_X))
                ? ((2U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__alu_fn_X))
                    ? ((1U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__alu_fn_X))
                        ? (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__op1_X 
                           >> (0x1fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__op2_X))
                        : VL_SHIFTRS_III(32,32,5, vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__op1_X, 
                                         (0x1fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__op2_X)))
                    : ((1U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__alu_fn_X))
                        ? (VL_LTS_III(32, vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__op1_X, vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__op2_X)
                            ? 1U : 0U) : (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__op1_X 
                                          ^ vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__op2_X)))
                : ((2U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__alu_fn_X))
                    ? ((1U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__alu_fn_X))
                        ? (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__op1_X 
                           | vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__op2_X)
                        : (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__op1_X 
                           & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__op2_X))
                    : ((1U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__alu_fn_X))
                        ? (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__op1_X 
                           - vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__op2_X)
                        : (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__op1_X 
                           + vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__op2_X)))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel 
        = ((~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
              == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__tag_array_ren 
        = ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && (1U & ((8U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))
                                         ? ((1U & (~ 
                                                   ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                    >> 2U))) 
                                            && ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                     >> 1U))) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state)))))
                                         : ((4U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))
                                             ? ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                                     >> 1U))) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))))
                                             : (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state)))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__tag_array_ren 
        = ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && (1U & ((8U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))
                                         ? ((1U & (~ 
                                                   ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                    >> 2U))) 
                                            && ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                     >> 1U))) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state)))))
                                         : ((4U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))
                                             ? ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                                     >> 1U))) 
                                                && (1U 
                                                    & (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))))
                                             : (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state)))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache_respstream_val 
        = ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                         >> 3U)) && 
                                  ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                             >> 2U))) 
                                   && ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state) 
                                              >> 1U)) 
                                       && (1U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))))));
    __Vtableidx2 = (((vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__op1_X 
                      < vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__op2_X) 
                     << 6U) | ((VL_LTS_III(32, vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__op1_X, vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__op2_X) 
                                << 5U) | (((vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__op1_X 
                                            == vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__op2_X) 
                                           << 4U) | 
                                          (((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__br_type_X) 
                                            << 1U) 
                                           | (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__val_X)))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__pc_redirect_X 
        = VSingleCoreSys_noparam__ConstPool__TABLE_he92e35b8_0
        [__Vtableidx2];
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__pc_sel_X 
        = VSingleCoreSys_noparam__ConstPool__TABLE_h81fecf40_0
        [__Vtableidx2];
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_22 
        = ((0U != (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__rf_waddr_X)) 
           & (1U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__dmem_type_X)));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imul_req_rdy_D = 0U;
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__csrr_D 
        = (((((((((0x13U == vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D) 
                  | (0x2073U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                 | (0x1073U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
                | (0x33U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
               | (0x40000033U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
              | (0x2000033U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
             | (0x7033U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
            | (0x6033U == (0xfe00707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))) 
           && ((0x13U != vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D) 
               && (0x2073U == (0x707fU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_17 
        = ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__rf_wen_X) 
           & ((0x1fU & (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D 
                        >> 0xfU)) == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__rf_waddr_X)));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_15 
        = ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__rf_wen_X) 
           & ((0x1fU & (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D 
                        >> 0x14U)) == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__rf_waddr_X)));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imul_resp_val_X = 0U;
    if ((0U != (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
        if ((1U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
            SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__add_mux_sel 
                = (1U & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out);
        }
        if ((1U != (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
            if ((2U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
                vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imul_resp_val_X = 1U;
            }
        }
    }
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache_respstream_val 
        = ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                     >> 4U))) && ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                         >> 3U)) && 
                                  ((1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                             >> 2U))) 
                                   && ((1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state) 
                                              >> 1U)) 
                                       && (1U & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__ostall_W 
        = ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__val_W) 
           & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__proc2mngr_val_W) 
              & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__wben_mux_out 
        = (0xffffU & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__wben_mux_sel)
                       ? ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__wben_mux_sel)
                           ? 0xffffU : 0U) : ((IData)(0xfU) 
                                              << (0xcU 
                                                  & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__wben_mux_out 
        = (0xffffU & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__wben_mux_sel)
                       ? ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__wben_mux_sel)
                           ? 0xffffU : 0U) : ((IData)(0xfU) 
                                              << (0xcU 
                                                  & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out))));
    if (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__write_data_mux_sel) {
        if (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__write_data_mux_sel) {
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__write_data_mux_out[0U] 
                = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__memresp_data_reg_out[0U];
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__write_data_mux_out[1U] 
                = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__memresp_data_reg_out[1U];
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__write_data_mux_out[2U] 
                = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__memresp_data_reg_out[2U];
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__write_data_mux_out[3U] 
                = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__memresp_data_reg_out[3U];
        } else {
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__write_data_mux_out[0U] = 0U;
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__write_data_mux_out[1U] = 0U;
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__write_data_mux_out[2U] = 0U;
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__write_data_mux_out[3U] = 0U;
        }
    } else {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__write_data_mux_out[0U] 
            = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__cachereq_data_reg_out;
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__write_data_mux_out[1U] 
            = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__cachereq_data_reg_out;
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__write_data_mux_out[2U] 
            = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__cachereq_data_reg_out;
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__write_data_mux_out[3U] 
            = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__cachereq_data_reg_out;
    }
    if (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__write_data_mux_sel) {
        if (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__write_data_mux_sel) {
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__write_data_mux_out[0U] 
                = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__memresp_data_reg_out[0U];
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__write_data_mux_out[1U] 
                = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__memresp_data_reg_out[1U];
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__write_data_mux_out[2U] 
                = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__memresp_data_reg_out[2U];
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__write_data_mux_out[3U] 
                = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__memresp_data_reg_out[3U];
        } else {
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__write_data_mux_out[0U] = 0U;
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__write_data_mux_out[1U] = 0U;
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__write_data_mux_out[2U] = 0U;
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__write_data_mux_out[3U] = 0U;
        }
    } else {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__write_data_mux_out[0U] 
            = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__cachereq_data_reg_out;
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__write_data_mux_out[1U] 
            = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__cachereq_data_reg_out;
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__write_data_mux_out[2U] 
            = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__cachereq_data_reg_out;
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__write_data_mux_out[3U] 
            = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__cachereq_data_reg_out;
    }
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__add_mux_output 
        = ((IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__add_mux_sel)
            ? ((IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__add_mux_sel)
                ? (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__a_reg_out 
                   + vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul_resp_msg)
                : 0U) : vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul_resp_msg);
    vlSelf->imem_reqstream_msg[0U] = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__read_data_reg_out[0U];
    vlSelf->imem_reqstream_msg[1U] = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__read_data_reg_out[1U];
    vlSelf->imem_reqstream_msg[2U] = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__read_data_reg_out[2U];
    vlSelf->imem_reqstream_msg[3U] = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__read_data_reg_out[3U];
    vlSelf->imem_reqstream_msg[4U] = (((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__mem_req_addr_mux_sel)
                                        ? ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__mem_req_addr_mux_sel)
                                            ? (0x7ffffff0U 
                                               & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out)
                                            : 0U) : vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__evict_addr_reg_out) 
                                      << 4U);
    vlSelf->imem_reqstream_msg[5U] = (((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__memreq_type) 
                                       << 0xcU) | (
                                                   ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__mem_req_addr_mux_sel)
                                                     ? 
                                                    ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__mem_req_addr_mux_sel)
                                                      ? 
                                                     (0x7ffffff0U 
                                                      & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out)
                                                      : 0U)
                                                     : vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__evict_addr_reg_out) 
                                                   >> 0x1cU));
    vlSelf->dmem_reqstream_msg[0U] = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__read_data_reg_out[0U];
    vlSelf->dmem_reqstream_msg[1U] = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__read_data_reg_out[1U];
    vlSelf->dmem_reqstream_msg[2U] = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__read_data_reg_out[2U];
    vlSelf->dmem_reqstream_msg[3U] = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__read_data_reg_out[3U];
    vlSelf->dmem_reqstream_msg[4U] = (((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__mem_req_addr_mux_sel)
                                        ? ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__mem_req_addr_mux_sel)
                                            ? (0x7ffffff0U 
                                               & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out)
                                            : 0U) : vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__evict_addr_reg_out) 
                                      << 4U);
    vlSelf->dmem_reqstream_msg[5U] = (((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__memreq_type) 
                                       << 0xcU) | (
                                                   ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__mem_req_addr_mux_sel)
                                                     ? 
                                                    ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__mem_req_addr_mux_sel)
                                                      ? 
                                                     (0x7ffffff0U 
                                                      & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out)
                                                      : 0U)
                                                     : vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__evict_addr_reg_out) 
                                                   >> 0x1cU));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__proc2mngr_val_D = 0U;
    if (((IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__csrw_D) 
         & (0x7c0U == (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D 
                       >> 0x14U)))) {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__proc2mngr_val_D = 1U;
    }
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__stats_en_wen_D = 0U;
    if (((IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__csrw_D) 
         & (0x7c1U == (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D 
                       >> 0x14U)))) {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__stats_en_wen_D = 1U;
    }
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__a_mux_in0 
        = (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__a_reg_out 
           << (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__shamt));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_mux_in0 
        = (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out 
           >> (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__shamt));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imm_D 
        = ((4U & (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imm_type_D))
            ? ((2U & (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imm_type_D))
                ? 0U : ((1U & (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imm_type_D))
                         ? 0U : (((- (IData)((vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D 
                                              >> 0x1fU))) 
                                  << 0x14U) | ((0xff000U 
                                                & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D) 
                                               | ((0x800U 
                                                   & (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D 
                                                        >> 0x14U)))))))
            : ((2U & (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imm_type_D))
                ? ((1U & (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imm_type_D))
                    ? (0xfffff000U & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D)
                    : (((- (IData)((vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0x800U & (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D 
                                     << 4U)) | ((0x7e0U 
                                                 & (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D 
                                                      >> 7U))))))
                : ((1U & (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imm_type_D))
                    ? (((- (IData)((vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D 
                                    >> 0x1fU))) << 0xbU) 
                       | ((0x7e0U & (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D 
                                                      >> 7U))))
                    : (((- (IData)((vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D 
                                    >> 0x1fU))) << 0xbU) 
                       | (0x7ffU & (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D 
                                    >> 0x14U))))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__wb_result_M 
        = ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__wb_result_sel_M)
            ? ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__wb_result_sel_M)
                ? SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__data
                : 0U) : vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__ex_result_M);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__victim_sel 
        = ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__valid_way0) 
           && ((1U & (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__valid_way1))) 
               || vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__use_bits__DOT__rfile
               [(7U & (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out 
                       >> 4U))]));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__victim_sel 
        = ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__valid_way0) 
           && ((1U & (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__valid_way1))) 
               || vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__use_bits__DOT__rfile
               [(7U & (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                       >> 4U))]));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_enq_msg[0U] 
        = (IData)((QData)((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__dmem_write_reg_out)));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_enq_msg[1U] 
        = ((vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__alu_result_X 
            << 2U) | (IData)(((QData)((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__dmem_write_reg_out)) 
                              >> 0x20U)));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_enq_msg[2U] 
        = ((0xfffffffcU & (((2U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__dmem_type_X))
                             ? 1U : 0U) << 0xaU)) | 
           (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__alu_result_X 
            >> 0x1eU));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__ex_result_X 
        = ((0U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ex_result_sel_X))
            ? ((IData)(4U) + vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__pc_reg_X_out)
            : ((1U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ex_result_sel_X))
                ? vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__alu_result_X
                : ((2U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ex_result_sel_X))
                    ? vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul_resp_msg
                    : 0U)));
    if (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__tag_array_ren) {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__tag_array0_out 
            = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__tag_array_way0__DOT__mem
            [(7U & (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out 
                    >> 4U))];
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__tag_array1_out 
            = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__tag_array_way1__DOT__mem
            [(7U & (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out 
                    >> 4U))];
    } else {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__tag_array0_out = 0U;
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__tag_array1_out = 0U;
    }
    if (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__tag_array_ren) {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__tag_array0_out 
            = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__tag_array_way0__DOT__mem
            [(7U & (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                    >> 4U))];
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__tag_array1_out 
            = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__tag_array_way1__DOT__mem
            [(7U & (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                    >> 4U))];
    } else {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__tag_array0_out = 0U;
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__tag_array1_out = 0U;
    }
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__csrr_sel_D = 0U;
    if (((IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__csrr_D) 
         & (0xfc1U == (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D 
                       >> 0x14U)))) {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__csrr_sel_D = 1U;
    }
    if (((IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__csrr_D) 
         & (0xf14U == (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D 
                       >> 0x14U)))) {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__csrr_sel_D = 2U;
    }
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__mngr2proc_rdy_D = 0U;
    if (((IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__csrr_D) 
         & (0xfc0U == (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D 
                       >> 0x14U)))) {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__mngr2proc_rdy_D = 1U;
    }
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_16 
        = ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__rs2_en_D) 
           & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__val_D));
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_18 
        = ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__rs1_en_D) 
           & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__val_D));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__stall_W 
        = ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__val_W) 
           & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__ostall_W));
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_7 
        = (((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__val_M) 
            & ((~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache_respstream_val)) 
               & (0U != (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__dmem_type_M)))) 
           | (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__ostall_W));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__jal_target_D 
        = (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__pc_D 
           + vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imm_D);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__active_way 
        = (((8U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state)) 
            | ((9U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state)) 
               | ((0xaU == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state)) 
                  | (7U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state)))))
            ? (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__victim_sel)
            : (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__way_sel_reg_out));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__active_way 
        = (((8U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state)) 
            | ((9U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state)) 
               | ((0xaU == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state)) 
                  | (7U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state)))))
            ? (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__victim_sel)
            : (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out));
    if (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT____Vcellout__dmem_queue__deq_msg[0U] 
            = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U];
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT____Vcellout__dmem_queue__deq_msg[1U] 
            = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U];
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT____Vcellout__dmem_queue__deq_msg[2U] 
            = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U];
    } else if (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT____Vcellout__dmem_queue__deq_msg[0U] = 0U;
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT____Vcellout__dmem_queue__deq_msg[1U] = 0U;
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT____Vcellout__dmem_queue__deq_msg[2U] = 0U;
    } else {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT____Vcellout__dmem_queue__deq_msg[0U] 
            = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_enq_msg[0U];
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT____Vcellout__dmem_queue__deq_msg[1U] 
            = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_enq_msg[1U];
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT____Vcellout__dmem_queue__deq_msg[2U] 
            = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_enq_msg[2U];
    }
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__hit_w0 
        = ((vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__tag_array0_out 
            == (0xffffffU & (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out 
                             >> 7U))) & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__valid_bits_way0__DOT__rfile
           [(7U & (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out 
                   >> 4U))]);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__hit_w1 
        = ((vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__tag_array1_out 
            == (0xffffffU & (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out 
                             >> 7U))) & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__valid_bits_way1__DOT__rfile
           [(7U & (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out 
                   >> 4U))]);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__hit_w0 
        = ((vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__tag_array0_out 
            == (0xffffffU & (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                             >> 7U))) & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__valid_bits_way0__DOT__rfile
           [(7U & (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                   >> 4U))]);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__hit_w1 
        = ((vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__tag_array1_out 
            == (0xffffffU & (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                             >> 7U))) & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__valid_bits_way1__DOT__rfile
           [(7U & (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                   >> 4U))]);
    __Vtableidx1 = ((((IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_16) 
                      & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__val_W) 
                         & (((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__rf_wen_W) 
                             & ((0x1fU & (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D 
                                          >> 0x14U)) 
                                == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__rf_waddr_W))) 
                            & (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_8)))) 
                     << 5U) | ((((IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_16) 
                                 & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__val_M) 
                                    & (((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__rf_wen_M) 
                                        & ((0x1fU & 
                                            (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D 
                                             >> 0x14U)) 
                                           == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__rf_waddr_M))) 
                                       & (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_11)))) 
                                << 4U) | ((((IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_16) 
                                            & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__val_X) 
                                               & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_15) 
                                                  & (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_14)))) 
                                           << 3U) | 
                                          ((((IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_18) 
                                             & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__val_W) 
                                                & (((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__rf_wen_W) 
                                                    & ((0x1fU 
                                                        & (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D 
                                                           >> 0xfU)) 
                                                       == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__rf_waddr_W))) 
                                                   & (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_8)))) 
                                            << 2U) 
                                           | ((((IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_18) 
                                                & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__val_M) 
                                                   & (((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__rf_wen_M) 
                                                       & ((0x1fU 
                                                           & (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D 
                                                              >> 0xfU)) 
                                                          == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__rf_waddr_M))) 
                                                      & (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_11)))) 
                                               << 1U) 
                                              | ((IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_18) 
                                                 & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__val_X) 
                                                    & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_17) 
                                                       & (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_14)))))))));
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__op1_byp_sel_D 
        = VSingleCoreSys_noparam__ConstPool__TABLE_hc577786b_0
        [__Vtableidx1];
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__op2_byp_sel_D 
        = VSingleCoreSys_noparam__ConstPool__TABLE_h89e50ef4_0
        [__Vtableidx1];
    vlSelf->commit_inst = ((~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__stall_W)) 
                           & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__val_W));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__stall_M 
        = ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__val_M) 
           & (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_7));
    vlSelf->__VdfgRegularize_hd87f99a1_0_0 = ((((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__val_X) 
                                                & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
                                                   & (0U 
                                                      != (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__dmem_type_X)))) 
                                               | (((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__val_X) 
                                                   & (2U 
                                                      == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ex_result_sel_X))) 
                                                  & (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imul_resp_val_X)))) 
                                              | (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_7));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT____Vcellinp__data_array_way0__write_en 
        = ((~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__active_way)) 
           & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__data_array_wen));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT____Vcellinp__data_array_way1__write_en 
        = ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__data_array_wen) 
           & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__active_way));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT____Vcellinp__data_array_way0__write_en 
        = ((~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__active_way)) 
           & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__data_array_wen));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT____Vcellinp__data_array_way1__write_en 
        = ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__data_array_wen) 
           & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__active_way));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__use_bit_wen = 0U;
    if (((3U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__hit_w1)))) {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__use_bit_wen = 1U;
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__use_bit_wdata = 0U;
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__use_bit_wdata 
            = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__hit_w0;
    } else {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__use_bit_wdata = 0U;
    }
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__dirty_wdata_way1 = 0U;
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__dirty_wdata_way0 = 0U;
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__dirty_wen_way1 = 0U;
    if (((4U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__hit_w1)))) {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__use_bit_wen = 1U;
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__use_bit_wdata 
            = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__hit_w0;
    }
    if ((2U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__way_sel_reg_out) {
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__tag_array_wen_way1 = 1U;
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__valid_wen_way1 = 1U;
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__dirty_wdata_way1 = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__tag_array_wen_way0 = 1U;
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__valid_wen_way0 = 1U;
        }
    }
    if (((4U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__hit_w1)))) {
        if ((1U & (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__hit_w0)))) {
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__dirty_wdata_way1 = 1U;
        }
    }
    if ((2U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))) {
        if ((1U & (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__dirty_wdata_way0 = 0U;
        }
    }
    if (((4U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__hit_w1)))) {
        if (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__hit_w0) {
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__dirty_wdata_way0 = 1U;
        }
    }
    if ((2U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__way_sel_reg_out) {
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__dirty_wen_way1 = 1U;
        }
    }
    if (((4U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__hit_w1)))) {
        if ((1U & (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__hit_w0)))) {
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__dirty_wen_way1 = 1U;
        }
    }
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__dirty_wen_way0 = 0U;
    if ((2U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))) {
        if ((1U & (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__dirty_wen_way0 = 1U;
        }
    }
    if (((4U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__hit_w1)))) {
        if (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__hit_w0) {
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__dirty_wen_way0 = 1U;
        }
    }
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__0 
        = ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__hit_w0) 
           | (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__hit_w1));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__use_bit_wen = 0U;
    if (((3U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__hit_w1)))) {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__use_bit_wen = 1U;
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__use_bit_wdata = 0U;
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__use_bit_wdata 
            = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__hit_w0;
    } else {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__use_bit_wdata = 0U;
    }
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way1 = 0U;
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way0 = 0U;
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__dirty_wen_way1 = 0U;
    if (((4U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__hit_w1)))) {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__use_bit_wen = 1U;
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__use_bit_wdata 
            = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__hit_w0;
    }
    if ((2U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out) {
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__tag_array_wen_way1 = 1U;
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__valid_wen_way1 = 1U;
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way1 = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__tag_array_wen_way0 = 1U;
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__valid_wen_way0 = 1U;
        }
    }
    if (((4U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__hit_w1)))) {
        if ((1U & (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__hit_w0)))) {
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way1 = 1U;
        }
    }
    if ((2U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))) {
        if ((1U & (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way0 = 0U;
        }
    }
    if (((4U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__hit_w1)))) {
        if (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__hit_w0) {
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way0 = 1U;
        }
    }
    if ((2U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out) {
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__dirty_wen_way1 = 1U;
        }
    }
    if (((4U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__hit_w1)))) {
        if ((1U & (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__hit_w0)))) {
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__dirty_wen_way1 = 1U;
        }
    }
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__dirty_wen_way0 = 0U;
    if ((2U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))) {
        if ((1U & (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__dirty_wen_way0 = 1U;
        }
    }
    if (((4U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state)) 
         & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__hit_w0) 
            | (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__hit_w1)))) {
        if (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__hit_w0) {
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__dirty_wen_way0 = 1U;
        }
    }
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__0 
        = ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__hit_w0) 
           | (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__hit_w1));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__op1_sel_mux_out 
        = ((IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__op1_sel_D)
            ? ((IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__op1_sel_D)
                ? ((2U & (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__op1_byp_sel_D))
                    ? ((1U & (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__op1_byp_sel_D))
                        ? ((0U == (0x1fU & (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D 
                                            >> 0xfU)))
                            ? 0U : vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile
                           [(0x1fU & (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D 
                                      >> 0xfU))]) : vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__ex_result_X)
                    : ((1U & (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__op1_byp_sel_D))
                        ? vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__wb_result_M
                        : vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__wb_result_W))
                : 0U) : vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__pc_D);
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__op2_byp_out_D 
        = ((2U & (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__op2_byp_sel_D))
            ? ((1U & (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__op2_byp_sel_D))
                ? vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__ex_result_X
                : vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__wb_result_M)
            : ((1U & (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__op2_byp_sel_D))
                ? vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__wb_result_W
                : ((0U == (0x1fU & (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D 
                                    >> 0x14U))) ? 0U
                    : vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile
                   [(0x1fU & (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D 
                              >> 0x14U))])));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->commit_inst) & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__proc2mngr_val_W)));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__next_val_M 
        = ((~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__stall_M)) 
           & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__val_M));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__stall_X 
        = ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__val_X) 
           & (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_0));
    if ((0U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imul_req_rdy_D = 1U;
    }
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_19 
        = (((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__val_D) 
            & (((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__val_D) 
                & ((~ (IData)(vlSelf->mngr2proc_val)) 
                   & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__mngr2proc_rdy_D))) 
               | (((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__rs1_en_D) 
                   & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__val_X) 
                      & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_17) 
                         & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_22)))) 
                  | (((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__rs2_en_D) 
                      & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__val_X) 
                         & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_15) 
                            & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_22)))) 
                     | (((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__val_D) 
                         & (2U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__ex_result_sel_D))) 
                        & (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imul_req_rdy_D))))))) 
           | (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_0));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__hit_next 
        = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__hit_out;
    if ((1U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))) {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__hit_next 
            = ((2U != (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__cachereq_type_reg_out)) 
               && (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__0));
    }
    if ((0U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))) {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__hit_next = 0U;
    }
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__hit_next 
        = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__hit_out;
    if ((1U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__hit_next 
            = ((2U != (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out)) 
               && (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__0));
    }
    if ((0U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__hit_next = 0U;
    }
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__op2_D 
        = ((0U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__op2_sel_D))
            ? vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__op2_byp_out_D
            : ((1U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__op2_sel_D))
                ? vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imm_D
                : ((2U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__op2_sel_D))
                    ? ((0U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__csrr_sel_D))
                        ? vlSelf->mngr2proc_msg : (
                                                   (1U 
                                                    == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__csrr_sel_D))
                                                    ? 1U
                                                    : 0U))
                    : 0U)));
    vlSelf->proc2mngr_val = ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
                             | (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache_respstream_rdy 
        = ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__next_val_M) 
           & (0U != (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__dmem_type_M)));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imul_resp_rdy_X 
        = ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__val_X) 
           & ((~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__stall_X)) 
              & (2U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ex_result_sel_X))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__next_val_X 
        = ((~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__stall_X)) 
           & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__val_X));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__stall_D 
        = ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__val_D) 
           & (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_19));
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlSelf->proc2mngr_rdy) & (IData)(vlSelf->proc2mngr_val));
    vlSelf->dcache_miss = ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache_respstream_val) 
                           & ((~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__hit_out)) 
                              & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache_respstream_rdy)));
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__next_val_X) 
              & (0U != (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__dmem_type_X))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__osquash_X 
        = ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__next_val_X) 
           & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__pc_redirect_X));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_23 
        = ((~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__stall_D)) 
           & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__val_D));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en 
        = ((~ ((~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
               & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
                  & (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)))) 
           & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache_reqstream_val 
        = ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
           | (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__squash_D 
        = ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__val_D) 
           & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__osquash_X));
    vlSelf->mngr2proc_rdy = ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_23) 
                             & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__mngr2proc_rdy_D));
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__osquash_D 
        = ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_23) 
           & (6U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__br_type_D)));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en) 
              | (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__next_state 
        = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state;
    if ((0U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache_reqstream_val) {
            if (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache_reqstream_val) {
                vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__next_state = 1U;
            }
        } else {
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__next_state = 0U;
        }
    }
    if ((1U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__next_state 
            = ((2U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out))
                ? 2U : ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__0)
                         ? ((0U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out))
                             ? 3U : 4U) : ((1U & ((~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__valid_way0)) 
                                                  | (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__valid_way1))))
                                            ? 5U : 
                                           ((((~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__victim_sel)) 
                                              & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__dirty_bits_way0__DOT__rfile
                                              [(7U 
                                                & (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                                                   >> 4U))]) 
                                             | ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__victim_sel) 
                                                & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__dirty_bits_way1__DOT__rfile
                                                [(7U 
                                                  & (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__cachereq_addr_reg_out 
                                                     >> 4U))]))
                                             ? 8U : 5U))));
    }
    if ((0xbU == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache_respstream_rdy) {
            if (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache_respstream_rdy) {
                vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__next_state = 0U;
            }
        } else {
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__next_state = 0xbU;
        }
    }
    if ((2U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__next_state = 0xbU;
    }
    if ((3U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__next_state = 0xbU;
    }
    if ((4U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__next_state = 0xbU;
    }
    if ((8U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))) {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__next_state = 9U;
    }
    if ((9U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->dmem_reqstream_rdy) {
            if (vlSelf->dmem_reqstream_rdy) {
                vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__next_state = 0xaU;
            }
        } else {
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__next_state = 9U;
        }
    }
    if ((0xaU == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->dmem_respstream_val) {
            if (vlSelf->dmem_respstream_val) {
                vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__next_state = 5U;
            }
        } else {
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__next_state = 0xaU;
        }
    }
    if ((5U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->dmem_reqstream_rdy) {
            if (vlSelf->dmem_reqstream_rdy) {
                vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__next_state = 6U;
            }
        } else {
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__next_state = 5U;
        }
    }
    if ((6U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->dmem_respstream_val) {
            if (vlSelf->dmem_respstream_val) {
                vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__next_state = 7U;
            }
        } else {
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__next_state = 6U;
        }
    }
    if ((7U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))) {
        if (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out) {
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__tag_array_wen_way1 = 1U;
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__valid_wen_way1 = 1U;
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way1 = 0U;
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__dirty_wen_way1 = 1U;
        }
        if ((1U & (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__tag_array_wen_way0 = 1U;
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__valid_wen_way0 = 1U;
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__dirty_wdata_way0 = 0U;
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__dirty_wen_way0 = 1U;
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__use_bit_wen = 1U;
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__use_bit_wdata = 1U;
        } else {
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__use_bit_wen = 1U;
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__use_bit_wdata = 0U;
        }
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__hit_next = 0U;
        if ((0U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out))) {
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__next_state = 3U;
        } else if ((1U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__dpath__DOT__cachereq_type_reg_out))) {
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__next_state = 4U;
        }
    }
    vlSelf->dcache_access = ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache_reqstream_rdy) 
                             & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__dcache_reqstream_val));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__reg_en_D 
        = (1U & ((~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__stall_D)) 
                 | (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__squash_D)));
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__pc_sel_F 
        = ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__pc_redirect_X)
            ? (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__pc_sel_X)
            : ((IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__osquash_D)
                ? 2U : 0U));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imul_req_val_D 
        = ((2U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__ex_result_sel_D)) 
           & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__val_D) 
              & ((~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__stall_D)) 
                 & (~ (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__osquash_D)))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__squash_F 
        = ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__val_F) 
           & ((IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__osquash_D) 
              | (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__osquash_X)));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__write_en 
        = ((~ ((~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
               & ((IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
                  & (IData)(vlSelf->dcache_access)))) 
           & (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__pc_next_F 
        = ((2U & (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__pc_sel_F))
            ? ((1U & (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__pc_sel_F))
                ? (0xfffffffeU & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__alu_result_X)
                : vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__jal_target_D)
            : ((1U & (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__pc_sel_F))
                ? vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__br_target_X
                : ((IData)(4U) + vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__pc_F)));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__b_mux_sel = 0U;
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__a_mux_sel = 0U;
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__result_mux_sel = 0U;
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__result_en = 0U;
    if ((0U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__b_mux_sel 
            = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imul_req_val_D;
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__a_mux_sel 
            = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imul_req_val_D;
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__result_mux_sel 
            = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imul_req_val_D;
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__result_en 
            = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imul_req_val_D;
    } else if ((1U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__b_mux_sel = 0U;
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__a_mux_sel = 0U;
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__result_mux_sel = 0U;
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__result_en = 1U;
    } else if ((2U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__result_en = 0U;
    }
    __Vtableidx3 = (((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imul_resp_rdy_X) 
                     << 5U) | (((0U == vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__dp__DOT__b_mux_in0) 
                                << 4U) | (((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imul_req_rdy_D) 
                                           << 3U) | 
                                          (((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imul_req_val_D) 
                                            << 2U) 
                                           | (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state)))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__ctrl__DOT__next_state 
        = VSingleCoreSys_noparam__ConstPool__TABLE_h8b2b421b_0
        [__Vtableidx3];
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_drop_val 
        = ((1U & (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_drop_unit__DOT__state))) 
           && ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache_respstream_val) 
               & (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__squash_F))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(vlSelf->dcache_access)) & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__write_en) 
                                                 | (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel) {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT____Vcellout__imem_queue__deq_msg[0U] = 0U;
        if (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel) {
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT____Vcellout__imem_queue__deq_msg[1U] 
                = (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__pc_next_F 
                   << 2U);
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT____Vcellout__imem_queue__deq_msg[2U] 
                = (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__pc_next_F 
                   >> 0x1eU);
        } else {
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT____Vcellout__imem_queue__deq_msg[1U] = 0U;
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT____Vcellout__imem_queue__deq_msg[2U] = 0U;
        }
    } else {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT____Vcellout__imem_queue__deq_msg[0U] 
            = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
            [vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][0U];
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT____Vcellout__imem_queue__deq_msg[1U] 
            = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
            [vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][1U];
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT____Vcellout__imem_queue__deq_msg[2U] 
            = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile
            [vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr][2U];
    }
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__stall_F 
        = ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__val_F) 
           & (((~ (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_drop_val)) 
               & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__val_F)) 
              | (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_19)));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_drop_rdy 
        = (1U & ((~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__stall_F)) 
                 | (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__squash_F)));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache_respstream_rdy 
        = ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_drop_unit__DOT__state) 
           || (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_drop_rdy));
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_enq_val 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_drop_rdy));
    vlSelf->icache_miss = ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache_respstream_val) 
                           & ((~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__hit_out)) 
                              & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache_respstream_rdy)));
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_drop_unit__DOT____VdfgExtracted_hff9b16a6__0 
        = (1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache_respstream_rdy) 
                    & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache_respstream_val))));
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_enq_val));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache_reqstream_val 
        = (1U & ((~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel)) 
                 | ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel) 
                    & (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_enq_val))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_drop_unit__DOT__next_state 
        = ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_drop_unit__DOT__state)
            ? (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_drop_unit__DOT____VdfgExtracted_hff9b16a6__0)
            : ((IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_drop_unit__DOT____VdfgExtracted_hff9b16a6__0) 
               & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__squash_F)));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__next_state 
        = vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state;
    if ((0U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache_reqstream_val) {
            if (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache_reqstream_val) {
                vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__next_state = 1U;
            }
        } else {
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__next_state = 0U;
        }
    }
    if ((1U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))) {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__next_state 
            = ((2U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__cachereq_type_reg_out))
                ? 2U : ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__0)
                         ? ((0U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__cachereq_type_reg_out))
                             ? 3U : 4U) : ((1U & ((~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__valid_way0)) 
                                                  | (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__valid_way1))))
                                            ? 5U : 
                                           ((((~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__victim_sel)) 
                                              & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__dirty_bits_way0__DOT__rfile
                                              [(7U 
                                                & (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out 
                                                   >> 4U))]) 
                                             | ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__victim_sel) 
                                                & vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__dirty_bits_way1__DOT__rfile
                                                [(7U 
                                                  & (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__cachereq_addr_reg_out 
                                                     >> 4U))]))
                                             ? 8U : 5U))));
    }
    if ((0xbU == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache_respstream_rdy) {
            if (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache_respstream_rdy) {
                vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__next_state = 0U;
            }
        } else {
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__next_state = 0xbU;
        }
    }
    if ((2U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))) {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__next_state = 0xbU;
    }
    if ((3U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))) {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__next_state = 0xbU;
    }
    if ((4U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))) {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__next_state = 0xbU;
    }
    if ((8U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))) {
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__next_state = 9U;
    }
    if ((9U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->imem_reqstream_rdy) {
            if (vlSelf->imem_reqstream_rdy) {
                vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__next_state = 0xaU;
            }
        } else {
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__next_state = 9U;
        }
    }
    if ((0xaU == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->imem_respstream_val) {
            if (vlSelf->imem_respstream_val) {
                vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__next_state = 5U;
            }
        } else {
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__next_state = 0xaU;
        }
    }
    if ((5U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->imem_reqstream_rdy) {
            if (vlSelf->imem_reqstream_rdy) {
                vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__next_state = 6U;
            }
        } else {
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__next_state = 5U;
        }
    }
    if ((6U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->imem_respstream_val) {
            if (vlSelf->imem_respstream_val) {
                vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__next_state = 7U;
            }
        } else {
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__next_state = 6U;
        }
    }
    if ((7U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))) {
        if (vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__way_sel_reg_out) {
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__tag_array_wen_way1 = 1U;
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__valid_wen_way1 = 1U;
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__dirty_wdata_way1 = 0U;
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__dirty_wen_way1 = 1U;
        }
        if ((1U & (~ (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__way_sel_reg_out)))) {
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__tag_array_wen_way0 = 1U;
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__valid_wen_way0 = 1U;
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__dirty_wdata_way0 = 0U;
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__dirty_wen_way0 = 1U;
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__use_bit_wen = 1U;
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__use_bit_wdata = 1U;
        } else {
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__use_bit_wen = 1U;
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__use_bit_wdata = 0U;
        }
        vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__hit_next = 0U;
        if ((0U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__cachereq_type_reg_out))) {
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__next_state = 3U;
        } else if ((1U == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__dpath__DOT__cachereq_type_reg_out))) {
            vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__next_state = 4U;
        }
    }
    vlSelf->icache_access = ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache_reqstream_rdy) 
                             & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__icache_reqstream_val));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
            & ((~ (IData)(vlSelf->icache_access)) & 
               ((1U & ((IData)(1U) + (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                == (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->icache_access) & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____VdfgRegularize_h1851b5ac_0_0 
        = (1U & (~ ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel) 
                    & ((IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
                       & (IData)(vlSelf->icache_access)))));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (1U & (((IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____VdfgRegularize_h1851b5ac_0_0) 
                  & (IData)(vlSelf->icache_access))
                  ? ((IData)(1U) + (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                  : (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__write_en 
        = ((IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____VdfgRegularize_h1851b5ac_0_0) 
           & (IData)(SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (1U & ((IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__write_en)
                  ? ((IData)(1U) + (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                  : (IData)(vlSelf->SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
}
