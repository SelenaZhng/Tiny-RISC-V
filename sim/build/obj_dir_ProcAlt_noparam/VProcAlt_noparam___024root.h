// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VProcAlt_noparam.h for the primary calling header

#ifndef VERILATED_VPROCALT_NOPARAM___024ROOT_H_
#define VERILATED_VPROCALT_NOPARAM___024ROOT_H_  // guard

#include "verilated.h"


class VProcAlt_noparam__Syms;

class alignas(VL_CACHE_LINE_BYTES) VProcAlt_noparam___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(reset,0,0);
        VL_OUT8(commit_inst,0,0);
        VL_OUT8(stats_en,0,0);
        VL_IN8(dmem_reqstream_rdy,0,0);
        VL_OUT8(dmem_reqstream_val,0,0);
        VL_OUT8(dmem_respstream_rdy,0,0);
        VL_IN8(dmem_respstream_val,0,0);
        VL_IN8(imem_reqstream_rdy,0,0);
        VL_OUT8(imem_reqstream_val,0,0);
        VL_OUT8(imem_respstream_rdy,0,0);
        VL_IN8(imem_respstream_val,0,0);
        VL_OUT8(mngr2proc_rdy,0,0);
        VL_IN8(mngr2proc_val,0,0);
        VL_IN8(proc2mngr_rdy,0,0);
        VL_OUT8(proc2mngr_val,0,0);
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop_rdy;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__reg_en_D;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__op1_sel_D;
        CData/*1:0*/ ProcAlt_noparam__DOT__v__DOT__op2_sel_D;
        CData/*1:0*/ ProcAlt_noparam__DOT__v__DOT__csrr_sel_D;
        CData/*1:0*/ ProcAlt_noparam__DOT__v__DOT__op1_byp_sel_D;
        CData/*1:0*/ ProcAlt_noparam__DOT__v__DOT__op2_byp_sel_D;
        CData/*1:0*/ ProcAlt_noparam__DOT__v__DOT__ex_result_sel_X;
        CData/*3:0*/ ProcAlt_noparam__DOT__v__DOT__alu_fn_X;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__wb_result_sel_M;
        CData/*4:0*/ ProcAlt_noparam__DOT__v__DOT__rf_waddr_W;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__rf_wen_W;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__imul_req_rdy_D;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__imul_req_val_D;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__imul_resp_rdy_X;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__imul_resp_val_X;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__write_en;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__bypass_mux_sel;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop_unit__DOT__state;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__imem_respstream_drop_unit__DOT__next_state;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__write_en;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_F;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_D;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_X;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_M;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__val_W;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__ostall_W;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_F;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_D;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_X;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_M;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stall_W;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__squash_F;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__squash_D;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__pc_redirect_X;
        CData/*1:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__pc_sel_X;
    };
    struct {
        CData/*2:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__br_type_D;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rs1_en_D;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rs2_en_D;
        CData/*3:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__alu_fn_D;
        CData/*1:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__dmem_type_D;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__wb_result_sel_D;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_D;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_D;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__mngr2proc_rdy_D;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stats_en_wen_D;
        CData/*1:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__ex_result_sel_D;
        CData/*1:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__dmem_type_X;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__wb_result_sel_X;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_X;
        CData/*4:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_X;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_X;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stats_en_wen_X;
        CData/*2:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__br_type_X;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__next_val_X;
        CData/*1:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__dmem_type_M;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_M;
        CData/*4:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_waddr_M;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_M;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stats_en_wen_M;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__next_val_M;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__proc2mngr_val_W;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__rf_wen_pending_W;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__stats_en_wen_pending_W;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_7;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_15;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_17;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_22;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT____VdfgRegularize_hd14aa9f2_0_23;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__b_mux_sel;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__a_mux_sel;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__result_mux_sel;
        CData/*0:0*/ ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__result_en;
        CData/*1:0*/ ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state;
        CData/*1:0*/ ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__ctrl__DOT__next_state;
        CData/*4:0*/ ProcAlt_noparam__DOT__v__DOT__tinyrv2__DOT__rs1;
        CData/*4:0*/ ProcAlt_noparam__DOT__v__DOT__tinyrv2__DOT__rs2;
        CData/*4:0*/ ProcAlt_noparam__DOT__v__DOT__tinyrv2__DOT__rd;
        CData/*6:0*/ ProcAlt_noparam__DOT__v__DOT__tinyrv2__DOT__funct;
        CData/*0:0*/ __Vdpi_export_trigger;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ ProcAlt_noparam__DOT__v__DOT__tinyrv2__DOT__funct_str;
        SData/*11:0*/ ProcAlt_noparam__DOT__v__DOT__tinyrv2__DOT__csr;
        VL_IN(core_id,31,0);
        VL_OUTW(dmem_reqstream_msg,77,0,3);
        VL_OUTW(imem_reqstream_msg,77,0,3);
        VL_IN(mngr2proc_msg,31,0);
        VL_OUT(proc2mngr_msg,31,0);
        VlWide<3>/*77:0*/ ProcAlt_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg;
        VlWide<3>/*77:0*/ ProcAlt_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg;
        IData/*31:0*/ ProcAlt_noparam__DOT__v__DOT__inst_D;
        VlWide<128>/*4095:0*/ ProcAlt_noparam__DOT__v__DOT__str;
        VlWide<3>/*77:0*/ ProcAlt_noparam__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore;
        IData/*31:0*/ ProcAlt_noparam__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore;
        IData/*31:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__inst_X;
        IData/*31:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__inst_M;
    };
    struct {
        IData/*31:0*/ ProcAlt_noparam__DOT__v__DOT__ctrl__DOT__inst_W;
        IData/*31:0*/ ProcAlt_noparam__DOT__v__DOT__dpath__DOT__pc_F;
        IData/*31:0*/ ProcAlt_noparam__DOT__v__DOT__dpath__DOT__pc_next_F;
        IData/*31:0*/ ProcAlt_noparam__DOT__v__DOT__dpath__DOT__br_target_X;
        IData/*31:0*/ ProcAlt_noparam__DOT__v__DOT__dpath__DOT__jal_target_D;
        IData/*31:0*/ ProcAlt_noparam__DOT__v__DOT__dpath__DOT__dmem_write_reg_out;
        IData/*31:0*/ ProcAlt_noparam__DOT__v__DOT__dpath__DOT__alu_result_X;
        IData/*31:0*/ ProcAlt_noparam__DOT__v__DOT__dpath__DOT__pc_D;
        IData/*31:0*/ ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imm_D;
        IData/*31:0*/ ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op2_D;
        IData/*31:0*/ ProcAlt_noparam__DOT__v__DOT__dpath__DOT__pc_reg_X_out;
        IData/*31:0*/ ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op1_sel_mux_out;
        IData/*31:0*/ ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op2_byp_out_D;
        IData/*31:0*/ ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op1_X;
        IData/*31:0*/ ProcAlt_noparam__DOT__v__DOT__dpath__DOT__op2_X;
        IData/*31:0*/ ProcAlt_noparam__DOT__v__DOT__dpath__DOT__ex_result_X;
        IData/*31:0*/ ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul_resp_msg;
        IData/*31:0*/ ProcAlt_noparam__DOT__v__DOT__dpath__DOT__ex_result_M;
        IData/*31:0*/ ProcAlt_noparam__DOT__v__DOT__dpath__DOT__wb_result_M;
        IData/*31:0*/ ProcAlt_noparam__DOT__v__DOT__dpath__DOT__wb_result_W;
        IData/*31:0*/ ProcAlt_noparam__DOT__v__DOT__dpath__DOT__stats_en_W;
        VlWide<128>/*4095:0*/ ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__str;
        IData/*31:0*/ ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__b_reg_out;
        IData/*31:0*/ ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__b_mux_in0;
        IData/*31:0*/ ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__a_reg_out;
        IData/*31:0*/ ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__a_mux_in0;
        IData/*31:0*/ ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__dp__DOT__add_mux_output;
        IData/*31:0*/ ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0;
        IData/*31:0*/ ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
        IData/*31:0*/ ProcAlt_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1;
        IData/*23:0*/ ProcAlt_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str;
        IData/*23:0*/ ProcAlt_noparam__DOT__v__DOT__tinyrv2__DOT__rs2_str;
        IData/*23:0*/ ProcAlt_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str;
        VlWide<3>/*71:0*/ ProcAlt_noparam__DOT__v__DOT__tinyrv2__DOT__csr_str;
        IData/*31:0*/ ProcAlt_noparam__DOT__v__DOT__vc_trace__DOT__len0;
        IData/*31:0*/ ProcAlt_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        IData/*31:0*/ ProcAlt_noparam__DOT__v__DOT__vc_trace__DOT__idx1;
        VlWide<128>/*4095:0*/ ProcAlt_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__str;
        IData/*31:0*/ ProcAlt_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0;
        IData/*31:0*/ ProcAlt_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0;
        IData/*31:0*/ ProcAlt_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1;
        VlWide<128>/*4095:0*/ ProcAlt_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__str;
        IData/*31:0*/ ProcAlt_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0;
        IData/*31:0*/ ProcAlt_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0;
        IData/*31:0*/ ProcAlt_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1;
        VlWide<128>/*4095:0*/ ProcAlt_noparam__DOT__v__DOT__imem_respstream_trace__DOT__str;
        IData/*31:0*/ ProcAlt_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0;
        IData/*31:0*/ ProcAlt_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0;
        IData/*31:0*/ ProcAlt_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1;
        VlWide<128>/*4095:0*/ ProcAlt_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__str;
        IData/*31:0*/ ProcAlt_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0;
        IData/*31:0*/ ProcAlt_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0;
        IData/*31:0*/ ProcAlt_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1;
        IData/*31:0*/ __VactIterCount;
        VL_IN64(dmem_respstream_msg,47,0);
        VL_IN64(imem_respstream_msg,47,0);
        VlWide<3>/*77:0*/ ProcAlt_noparam__DOT__v__DOT__dmem_reqstream_enq_msg;
        VlUnpacked<VlWide<3>/*77:0*/, 2> ProcAlt_noparam__DOT__v__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile;
        VlUnpacked<IData/*31:0*/, 32> ProcAlt_noparam__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VicoTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    VProcAlt_noparam__Syms* const vlSymsp;

    // CONSTRUCTORS
    VProcAlt_noparam___024root(VProcAlt_noparam__Syms* symsp, const char* v__name);
    ~VProcAlt_noparam___024root();
    VL_UNCOPYABLE(VProcAlt_noparam___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
