// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCacheBase___05Fp_num_banks_4.h for the primary calling header

#ifndef VERILATED_VCACHEBASE___05FP_NUM_BANKS_4___024ROOT_H_
#define VERILATED_VCACHEBASE___05FP_NUM_BANKS_4___024ROOT_H_  // guard

#include "verilated.h"


class VCacheBase___05Fp_num_banks_4__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCacheBase___05Fp_num_banks_4___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(cache2mem_reqstream_rdy,0,0);
        VL_OUT8(cache2mem_reqstream_val,0,0);
        VL_OUT8(cache2mem_respstream_rdy,0,0);
        VL_IN8(cache2mem_respstream_val,0,0);
        VL_OUT8(proc2cache_reqstream_rdy,0,0);
        VL_IN8(proc2cache_reqstream_val,0,0);
        VL_IN8(proc2cache_respstream_rdy,0,0);
        VL_OUT8(proc2cache_respstream_val,0,0);
        CData/*0:0*/ CacheBase___05Fp_num_banks_4__DOT__v__DOT__cachereq_en;
        CData/*0:0*/ CacheBase___05Fp_num_banks_4__DOT__v__DOT__memresp_en;
        CData/*0:0*/ CacheBase___05Fp_num_banks_4__DOT__v__DOT__write_data_mux_sel;
        CData/*0:0*/ CacheBase___05Fp_num_banks_4__DOT__v__DOT__wben_mux_sel;
        CData/*0:0*/ CacheBase___05Fp_num_banks_4__DOT__v__DOT__tag_array_ren;
        CData/*0:0*/ CacheBase___05Fp_num_banks_4__DOT__v__DOT__tag_array_wen;
        CData/*0:0*/ CacheBase___05Fp_num_banks_4__DOT__v__DOT__data_array_ren;
        CData/*0:0*/ CacheBase___05Fp_num_banks_4__DOT__v__DOT__data_array_wen;
        CData/*0:0*/ CacheBase___05Fp_num_banks_4__DOT__v__DOT__read_data_reg_en;
        CData/*0:0*/ CacheBase___05Fp_num_banks_4__DOT__v__DOT__read_data_zero_mux_sel;
        CData/*0:0*/ CacheBase___05Fp_num_banks_4__DOT__v__DOT__tag_match;
        CData/*0:0*/ CacheBase___05Fp_num_banks_4__DOT__v__DOT__evict_addr_reg_en;
        CData/*0:0*/ CacheBase___05Fp_num_banks_4__DOT__v__DOT__mem_req_addr_mux_sel;
        CData/*3:0*/ CacheBase___05Fp_num_banks_4__DOT__v__DOT__cacheresp_type;
        CData/*3:0*/ CacheBase___05Fp_num_banks_4__DOT__v__DOT__memreq_type;
        CData/*4:0*/ CacheBase___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__state;
        CData/*4:0*/ CacheBase___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__next_state;
        CData/*0:0*/ CacheBase___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__is_valid;
        CData/*0:0*/ CacheBase___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__valid_wen;
        CData/*0:0*/ CacheBase___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_wen;
        CData/*0:0*/ CacheBase___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__valid_wdata;
        CData/*0:0*/ CacheBase___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_wdata;
        CData/*1:0*/ CacheBase___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__hit_out;
        CData/*1:0*/ CacheBase___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__hit_next;
        CData/*7:0*/ CacheBase___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_opaque_reg_out;
        CData/*3:0*/ CacheBase___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_type_reg_out;
        CData/*0:0*/ __Vdpi_export_trigger;
        CData/*3:0*/ __Vtask_CacheBase___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__cs__28__cs_cacheresp_type;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ CacheBase___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__wben_mux_out;
        VL_OUTW(cache2mem_reqstream_msg,175,0,6);
        VL_INW(cache2mem_respstream_msg,145,0,5);
        VL_INW(proc2cache_reqstream_msg,77,0,3);
        VlWide<128>/*4095:0*/ CacheBase___05Fp_num_banks_4__DOT__v__DOT__str;
        IData/*31:0*/ CacheBase___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out;
        IData/*31:0*/ CacheBase___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__cachereq_data_reg_out;
        VlWide<4>/*127:0*/ CacheBase___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__memresp_data_reg_out;
        VlWide<4>/*127:0*/ CacheBase___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__write_data_mux_out;
        IData/*31:0*/ CacheBase___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__evict_addr_reg_out;
        VlWide<4>/*127:0*/ CacheBase___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__read_data_reg_out;
        VlWide<128>/*4095:0*/ CacheBase___05Fp_num_banks_4__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__str;
        IData/*31:0*/ CacheBase___05Fp_num_banks_4__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0;
        IData/*31:0*/ CacheBase___05Fp_num_banks_4__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        IData/*31:0*/ CacheBase___05Fp_num_banks_4__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1;
        IData/*31:0*/ CacheBase___05Fp_num_banks_4__DOT__v__DOT__proc2cache_respstream_trace__DOT__data;
        VlWide<128>/*4095:0*/ CacheBase___05Fp_num_banks_4__DOT__v__DOT__proc2cache_respstream_trace__DOT__str;
        IData/*31:0*/ CacheBase___05Fp_num_banks_4__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0;
        IData/*31:0*/ CacheBase___05Fp_num_banks_4__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0;
        IData/*31:0*/ CacheBase___05Fp_num_banks_4__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1;
        VlWide<128>/*4095:0*/ CacheBase___05Fp_num_banks_4__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__str;
    };
    struct {
        IData/*31:0*/ CacheBase___05Fp_num_banks_4__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0;
        IData/*31:0*/ CacheBase___05Fp_num_banks_4__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        IData/*31:0*/ CacheBase___05Fp_num_banks_4__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1;
        VlWide<128>/*4095:0*/ CacheBase___05Fp_num_banks_4__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__str;
        IData/*31:0*/ CacheBase___05Fp_num_banks_4__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0;
        IData/*31:0*/ CacheBase___05Fp_num_banks_4__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        IData/*31:0*/ CacheBase___05Fp_num_banks_4__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1;
        IData/*31:0*/ __VactIterCount;
        VL_OUT64(proc2cache_respstream_msg,47,0);
        VlUnpacked<CData/*0:0*/, 16> CacheBase___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile;
        VlUnpacked<CData/*0:0*/, 16> CacheBase___05Fp_num_banks_4__DOT__v__DOT__ctrl__DOT__dirty_bits__DOT__rfile;
        VlUnpacked<IData/*23:0*/, 16> CacheBase___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__tag_array__DOT__mem;
        VlUnpacked<VlWide<4>/*127:0*/, 16> CacheBase___05Fp_num_banks_4__DOT__v__DOT__dpath__DOT__data_array__DOT__mem;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VicoTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    VCacheBase___05Fp_num_banks_4__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCacheBase___05Fp_num_banks_4___024root(VCacheBase___05Fp_num_banks_4__Syms* symsp, const char* v__name);
    ~VCacheBase___05Fp_num_banks_4___024root();
    VL_UNCOPYABLE(VCacheBase___05Fp_num_banks_4___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
