// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCacheAlt___05Fp_num_banks_1.h for the primary calling header

#ifndef VERILATED_VCACHEALT___05FP_NUM_BANKS_1___024ROOT_H_
#define VERILATED_VCACHEALT___05FP_NUM_BANKS_1___024ROOT_H_  // guard

#include "verilated.h"


class VCacheAlt___05Fp_num_banks_1__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCacheAlt___05Fp_num_banks_1___024root final : public VerilatedModule {
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
        CData/*0:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cachereq_en;
        CData/*0:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__memresp_en;
        CData/*0:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__write_data_mux_sel;
        CData/*0:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__wben_mux_sel;
        CData/*0:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__data_array_ren;
        CData/*0:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__data_array_wen;
        CData/*0:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__tag_array_ren;
        CData/*0:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__tag_array_wen_way0;
        CData/*0:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__tag_array_wen_way1;
        CData/*0:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__read_data_reg_en;
        CData/*0:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__read_data_zero_mux_sel;
        CData/*0:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__evict_addr_reg_en;
        CData/*0:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__mem_req_addr_mux_sel;
        CData/*3:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cacheresp_type;
        CData/*3:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__memreq_type;
        CData/*4:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state;
        CData/*4:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__next_state;
        CData/*0:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_way0;
        CData/*0:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_way1;
        CData/*0:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_wen_way0;
        CData/*0:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_wen_way1;
        CData/*0:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__dirty_wen_way0;
        CData/*0:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__dirty_wen_way1;
        CData/*0:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__dirty_wdata_way0;
        CData/*0:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__dirty_wdata_way1;
        CData/*0:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__hit_w0;
        CData/*0:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__hit_w1;
        CData/*0:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__use_bit_wdata;
        CData/*0:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__use_bit_wen;
        CData/*0:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__victim_sel;
        CData/*0:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__hit_out;
        CData/*0:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__hit_next;
        CData/*0:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__way_sel_reg_out;
        CData/*0:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT____VdfgExtracted_h47097cdb__0;
        CData/*7:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_opaque_reg_out;
        CData/*3:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_type_reg_out;
        CData/*0:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__active_way;
        CData/*0:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT____Vcellinp__data_array_way0__write_en;
        CData/*0:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT____Vcellinp__data_array_way1__write_en;
        CData/*3:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__cs__18__cs_cacheresp_type;
        CData/*0:0*/ __Vdpi_export_trigger;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__wben_mux_out;
        VL_OUTW(cache2mem_reqstream_msg,175,0,6);
        VL_INW(cache2mem_respstream_msg,145,0,5);
        VL_INW(proc2cache_reqstream_msg,77,0,3);
        IData/*31:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out;
        IData/*31:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_data_reg_out;
        VlWide<4>/*127:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__memresp_data_reg_out;
        VlWide<4>/*127:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__write_data_mux_out;
    };
    struct {
        IData/*23:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__tag_array0_out;
        IData/*23:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__tag_array1_out;
        IData/*31:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__evict_addr_reg_out;
        VlWide<4>/*127:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__read_data_reg_out;
        VlWide<128>/*4095:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__str;
        IData/*31:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0;
        IData/*31:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        IData/*31:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1;
        IData/*31:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__data;
        VlWide<128>/*4095:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__str;
        IData/*31:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0;
        IData/*31:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0;
        IData/*31:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1;
        VlWide<128>/*4095:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__str;
        IData/*31:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0;
        IData/*31:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        IData/*31:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1;
        VlWide<128>/*4095:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__str;
        IData/*31:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0;
        IData/*31:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        IData/*31:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1;
        IData/*31:0*/ __VactIterCount;
        VL_OUT64(proc2cache_respstream_msg,47,0);
        VlUnpacked<CData/*0:0*/, 8> CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits_way0__DOT__rfile;
        VlUnpacked<CData/*0:0*/, 8> CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits_way1__DOT__rfile;
        VlUnpacked<CData/*0:0*/, 8> CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__dirty_bits_way0__DOT__rfile;
        VlUnpacked<CData/*0:0*/, 8> CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__dirty_bits_way1__DOT__rfile;
        VlUnpacked<CData/*0:0*/, 8> CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__use_bits__DOT__rfile;
        VlUnpacked<IData/*23:0*/, 8> CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__tag_array_way0__DOT__mem;
        VlUnpacked<IData/*23:0*/, 8> CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__tag_array_way1__DOT__mem;
        VlUnpacked<VlWide<4>/*127:0*/, 8> CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__data_array_way0__DOT__mem;
        VlUnpacked<VlWide<4>/*127:0*/, 8> CacheAlt___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__data_array_way1__DOT__mem;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VicoTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    VCacheAlt___05Fp_num_banks_1__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCacheAlt___05Fp_num_banks_1___024root(VCacheAlt___05Fp_num_banks_1__Syms* symsp, const char* v__name);
    ~VCacheAlt___05Fp_num_banks_1___024root();
    VL_UNCOPYABLE(VCacheAlt___05Fp_num_banks_1___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
