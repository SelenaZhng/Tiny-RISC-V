// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSingleCoreSys_noparam.h for the primary calling header

#include "VSingleCoreSys_noparam__pch.h"
#include "VSingleCoreSys_noparam__Syms.h"
#include "VSingleCoreSys_noparam___024root.h"

extern const VlWide<128>/*4095:0*/ VSingleCoreSys_noparam__ConstPool__CONST_h408c6ce7_0;
extern const VlWide<128>/*4095:0*/ VSingleCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0;
extern const VlWide<128>/*4095:0*/ VSingleCoreSys_noparam__ConstPool__CONST_h803d56e6_0;
extern const VlWide<128>/*4095:0*/ VSingleCoreSys_noparam__ConstPool__CONST_h7ed547c1_0;
extern const VlWide<128>/*4095:0*/ VSingleCoreSys_noparam__ConstPool__CONST_h296ef16f_0;
extern const VlWide<128>/*4095:0*/ VSingleCoreSys_noparam__ConstPool__CONST_h56610484_0;
extern const VlWide<128>/*4095:0*/ VSingleCoreSys_noparam__ConstPool__CONST_h0566f112_0;
extern const VlWide<128>/*4095:0*/ VSingleCoreSys_noparam__ConstPool__CONST_h777355b7_0;
extern const VlWide<128>/*4095:0*/ VSingleCoreSys_noparam__ConstPool__CONST_hed8640c4_0;
extern const VlWide<128>/*4095:0*/ VSingleCoreSys_noparam__ConstPool__CONST_hb98e3b6b_0;
extern const VlWide<128>/*4095:0*/ VSingleCoreSys_noparam__ConstPool__CONST_ha1593b7e_0;
extern const VlWide<128>/*4095:0*/ VSingleCoreSys_noparam__ConstPool__CONST_he2533c7c_0;
extern const VlWide<128>/*4095:0*/ VSingleCoreSys_noparam__ConstPool__CONST_h97a3ee4e_0;
extern const VlWide<128>/*4095:0*/ VSingleCoreSys_noparam__ConstPool__CONST_hd61c3baa_0;
extern const VlWide<128>/*4095:0*/ VSingleCoreSys_noparam__ConstPool__CONST_hf42f8d5f_0;
extern const VlWide<128>/*4095:0*/ VSingleCoreSys_noparam__ConstPool__CONST_h17de8ffe_0;
extern const VlWide<128>/*4095:0*/ VSingleCoreSys_noparam__ConstPool__CONST_hdbedbe02_0;
extern const VlWide<128>/*4095:0*/ VSingleCoreSys_noparam__ConstPool__CONST_h89919522_0;

void VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__line_trace_TOP(VSingleCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0;
    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 = 0;
    IData/*31:0*/ SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0;
    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 = 0;
    IData/*31:0*/ SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1;
    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 = 0;
    IData/*31:0*/ SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0;
    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 = 0;
    IData/*31:0*/ SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0;
    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 = 0;
    IData/*31:0*/ SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1;
    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 = 0;
    IData/*31:0*/ SingleCoreSys_noparam__DOT__v__DOT__vc_trace__DOT__len0;
    SingleCoreSys_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 0;
    IData/*31:0*/ SingleCoreSys_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    SingleCoreSys_noparam__DOT__v__DOT__vc_trace__DOT__idx0 = 0;
    IData/*31:0*/ SingleCoreSys_noparam__DOT__v__DOT__vc_trace__DOT__idx1;
    SingleCoreSys_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__1__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__1__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__1__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__1__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__2__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__2__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__2__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__2__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__2__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__2__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__3__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__3__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__3__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__3__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__4__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__4__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__4__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__4__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__4__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__4__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__5__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__5__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__5__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__5__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__6__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__6__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__6__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__6__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__6__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__6__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__7__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__7__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__7__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__7__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__8__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__8__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__8__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__8__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__9__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__9__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__9__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__9__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__9__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__9__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__10__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__10__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__10__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__10__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__11__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__11__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__11__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__11__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__11__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__11__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__12__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__12__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__12__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__12__str);
    VlWide<7>/*199:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__Vfuncout;
    VL_ZERO_W(200, __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__Vfuncout);
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst = 0;
    SData/*11:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__14__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__14__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__14__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__14__inst = 0;
    SData/*11:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__15__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__15__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__15__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__15__inst = 0;
    SData/*11:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__16__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__16__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__16__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__16__inst = 0;
    SData/*11:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__17__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__17__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__17__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__17__inst = 0;
    SData/*11:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__18__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__18__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__18__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__18__inst = 0;
    SData/*11:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__19__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__19__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__19__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__19__inst = 0;
    CData/*4:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__20__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__20__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__20__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__20__inst = 0;
    CData/*4:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__21__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__21__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__21__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__21__inst = 0;
    CData/*4:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__22__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__22__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__22__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__22__inst = 0;
    CData/*4:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__23__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__23__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__23__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__23__inst = 0;
    CData/*4:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__24__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__24__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__24__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__24__inst = 0;
    CData/*4:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__25__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__25__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__25__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__25__inst = 0;
    IData/*19:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_u_sh12__26__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_u_sh12__26__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_u_sh12__26__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_u_sh12__26__inst = 0;
    IData/*19:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_u_sh12__27__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_u_sh12__27__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_u_sh12__27__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_u_sh12__27__inst = 0;
    SData/*11:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__28__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__28__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__28__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__28__inst = 0;
    SData/*11:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_s__29__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_s__29__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_s__29__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_s__29__inst = 0;
    IData/*20:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_j__30__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_j__30__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_j__30__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_j__30__inst = 0;
    SData/*11:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__31__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__31__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__31__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__31__inst = 0;
    SData/*12:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__32__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__32__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__32__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__32__inst = 0;
    SData/*12:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__33__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__33__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__33__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__33__inst = 0;
    SData/*12:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__34__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__34__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__34__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__34__inst = 0;
    SData/*12:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__35__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__35__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__35__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__35__inst = 0;
    SData/*12:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__36__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__36__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__36__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__36__inst = 0;
    SData/*12:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__37__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__37__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__37__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__37__inst = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__38__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__38__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__38__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__38__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__38__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__38__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__39__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__39__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__39__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__39__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__40__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__40__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__40__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__40__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__41__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__41__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__41__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__41__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__41__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__41__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__42__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__42__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__42__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__42__str);
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__44__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__44__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__44__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__44__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__44__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__44__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__45__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__45__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__45__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__45__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__46__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__46__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__46__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__46__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__47__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__47__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__47__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__47__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__47__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__47__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__48__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__48__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__48__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__48__str);
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__50__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__50__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__50__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__50__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__50__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__50__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__51__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__51__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__51__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__51__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__52__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__52__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__52__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__52__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__53__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__53__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__53__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__53__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__53__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__53__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__54__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__54__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__54__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__54__str);
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__56__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__56__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__56__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__56__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__56__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__56__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__vc_trace__DOT__append_str__57__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__vc_trace__DOT__append_str__57__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__vc_trace__DOT__append_str__57__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__vc_trace__DOT__append_str__57__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__line_trace__58__trace_str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__line_trace__58__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__59__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__59__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__59__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__59__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__60__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__60__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__60__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__60__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__61__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__61__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__61__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__61__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__62__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__62__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__62__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__62__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__63__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__63__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__63__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__63__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__64__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__64__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__64__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__64__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__65__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__65__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__65__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__65__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__66__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__66__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__66__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__66__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__67__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__67__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__67__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__67__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__68__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__68__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__68__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__68__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__69__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__69__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__69__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__69__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__70__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__70__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__70__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__70__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__71__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__71__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__71__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__71__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__72__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__72__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__72__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__72__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__73__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__73__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__73__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__73__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__74__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__74__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__74__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__74__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__line_trace__75__trace_str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__line_trace__75__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__76__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__76__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__76__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__76__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__77__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__77__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__77__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__77__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__78__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__78__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__78__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__78__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__79__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__79__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__79__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__79__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__80__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__80__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__80__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__80__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__81__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__81__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__81__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__81__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__82__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__82__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__82__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__82__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__83__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__83__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__83__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__83__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__84__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__84__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__84__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__84__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__85__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__85__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__85__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__85__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__86__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__86__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__86__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__86__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__87__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__87__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__87__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__87__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__88__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__88__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__88__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__88__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__89__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__89__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__89__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__89__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__90__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__90__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__90__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__90__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__91__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__91__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__91__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__91__str);
    // Body
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str, trace_str);
    if (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__val_F) {
        if (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__squash_F) {
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__1__str, VSingleCoreSys_noparam__ConstPool__CONST_h408c6ce7_0);
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__1__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__1__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__1__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))))) {
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0);
            }
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__1__trace[0U];
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__1__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__1__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__1__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__1__trace[0U] 
                = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__1__trace);
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__2__num = 7U;
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__2__char = 0x20U;
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__2__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__2__trace[0U];
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__2__num)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__2__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__2__char);
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1);
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__2__trace[0U] 
                = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__2__trace);
        } else if (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__stall_F) {
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__3__str, VSingleCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__3__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__3__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__3__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))))) {
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0);
            }
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__3__trace[0U];
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__3__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__3__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__3__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__3__trace[0U] 
                = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__3__trace);
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__4__num = 7U;
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__4__char = 0x20U;
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__4__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__4__trace[0U];
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__4__num)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__4__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__4__char);
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1);
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__4__trace[0U] 
                = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__4__trace);
        } else {
            VL_SFORMAT_NX(4096,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__str
                          ,"%x",0,32,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__pc_F);
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__5__str, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__str);
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__5__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__5__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__5__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))))) {
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0);
            }
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__5__trace[0U];
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__5__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__5__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__5__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__5__trace[0U] 
                = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__5__trace);
        }
    } else {
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__6__num = 8U;
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__6__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__6__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__6__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__6__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__6__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__6__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__6__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__6__trace);
    }
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__7__str, VSingleCoreSys_noparam__ConstPool__CONST_h803d56e6_0);
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__7__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str);
    vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__7__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__7__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))))) {
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0);
    }
    vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
        = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__7__trace[0U];
    vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
        = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__7__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__7__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__7__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))));
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__7__trace[0U] 
        = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__7__trace);
    if (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__val_D) {
        if (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__squash_D) {
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__8__str, VSingleCoreSys_noparam__ConstPool__CONST_h408c6ce7_0);
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__8__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__8__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__8__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))))) {
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0);
            }
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__8__trace[0U];
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__8__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__8__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__8__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__8__trace[0U] 
                = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__8__trace);
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__9__num = 0x16U;
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__9__char = 0x20U;
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__9__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__9__trace[0U];
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__9__num)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__9__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__9__char);
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1);
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__9__trace[0U] 
                = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__9__trace);
        } else if (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__stall_D) {
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__10__str, VSingleCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__10__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__10__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__10__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))))) {
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0);
            }
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__10__trace[0U];
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__10__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__10__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__10__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__10__trace[0U] 
                = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__10__trace);
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__11__num = 0x16U;
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__11__char = 0x20U;
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__11__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__11__trace[0U];
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__11__num)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__11__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__11__char);
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1);
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__11__trace[0U] 
                = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__11__trace);
        } else {
            VL_EXTEND_WW(4096,200, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__12__str, 
                         ([&]() {
                        __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst 
                            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D;
                        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1 
                            = (0x1fU & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst 
                                        >> 0xfU));
                        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs2 
                            = (0x1fU & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst 
                                        >> 0x14U));
                        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd 
                            = (0x1fU & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst 
                                        >> 7U));
                        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__csr 
                            = (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst 
                               >> 0x14U);
                        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__funct 
                            = (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst 
                               >> 0x19U);
                        if ((9U >= (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1))) {
                            VL_SFORMAT_NX(24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str
                                          ,"x0%0#",0,
                                          5,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1);
                        } else {
                            VL_SFORMAT_NX(24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str
                                          ,"x%2#",0,
                                          5,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1);
                        }
                        if ((9U >= (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs2))) {
                            VL_SFORMAT_NX(24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs2_str
                                          ,"x0%0#",0,
                                          5,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs2);
                        } else {
                            VL_SFORMAT_NX(24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs2_str
                                          ,"x%2#",0,
                                          5,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs2);
                        }
                        if ((9U >= (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd))) {
                            VL_SFORMAT_NX(24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str
                                          ,"x0%0#",0,
                                          5,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd);
                        } else {
                            VL_SFORMAT_NX(24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str
                                          ,"x%2#",0,
                                          5,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd);
                        }
                        if ((0x7c0U == (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__csr))) {
                            VL_SFORMAT_NX(72,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__csr_str
                                          ,"proc2mngr",0);
                        } else if ((0xfc0U == (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__csr))) {
                            VL_SFORMAT_NX(72,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__csr_str
                                          ,"mngr2proc",0);
                        } else if ((0xf14U == (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__csr))) {
                            VL_SFORMAT_NX(72,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__csr_str
                                          ,"coreid   ",0);
                        } else if ((0xfc1U == (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__csr))) {
                            VL_SFORMAT_NX(72,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__csr_str
                                          ,"numcores ",0);
                        } else if ((0x7c1U == (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__csr))) {
                            VL_SFORMAT_NX(72,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__csr_str
                                          ,"stats_en ",0);
                        } else {
                            VL_SFORMAT_NX(72,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__csr_str
                                          ,"    0x%x",0,
                                          12,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__csr);
                        }
                        VL_SFORMAT_NX(16,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__funct_str
                                      ,"%x",0,2,(3U 
                                                 & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__funct)));
                        if (((((((((0x2073U == (0x707fU 
                                                & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst)) 
                                   | (0x1073U == (0x707fU 
                                                  & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) 
                                  | (0x13U == __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst)) 
                                 | (0U == __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst)) 
                                | (0x33U == (0xfe00707fU 
                                             & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) 
                               | (0x40000033U == (0xfe00707fU 
                                                  & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) 
                              | (0x7033U == (0xfe00707fU 
                                             & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) 
                             | (0x6033U == (0xfe00707fU 
                                            & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst)))) {
                            if ((0x2073U == (0x707fU 
                                             & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__Vfuncout
                                              ,"csrr   %s, %s  ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                              72,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__csr_str.data());
                            } else if ((0x1073U == 
                                        (0x707fU & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__Vfuncout
                                              ,"csrw   %s, %s  ",0,
                                              72,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__csr_str.data(),
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str);
                            } else if ((0x13U == __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst)) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__Vfuncout
                                              ,"nop                    ",0);
                            } else if ((0U == __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst)) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__Vfuncout
                                              ,"                       ",0);
                            } else if ((0x33U == (0xfe00707fU 
                                                  & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__Vfuncout
                                              ,"add    %s, %s, %s   ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs2_str);
                            } else if ((0x40000033U 
                                        == (0xfe00707fU 
                                            & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__Vfuncout
                                              ,"sub    %s, %s, %s   ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs2_str);
                            } else if ((0x7033U == 
                                        (0xfe00707fU 
                                         & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__Vfuncout
                                              ,"and    %s, %s, %s   ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs2_str);
                            } else {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__Vfuncout
                                              ,"or     %s, %s, %s   ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs2_str);
                            }
                        } else if (((((((((0x4033U 
                                           == (0xfe00707fU 
                                               & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst)) 
                                          | (0x2033U 
                                             == (0xfe00707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) 
                                         | (0x3033U 
                                            == (0xfe00707fU 
                                                & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) 
                                        | (0x2000033U 
                                           == (0xfe00707fU 
                                               & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) 
                                       | (0x13U == 
                                          (0x707fU 
                                           & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) 
                                      | (0x7013U == 
                                         (0x707fU & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) 
                                     | (0x6013U == 
                                        (0x707fU & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) 
                                    | (0x4013U == (0x707fU 
                                                   & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst)))) {
                            if ((0x4033U == (0xfe00707fU 
                                             & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__Vfuncout
                                              ,"xor    %s, %s, %s   ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs2_str);
                            } else if ((0x2033U == 
                                        (0xfe00707fU 
                                         & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__Vfuncout
                                              ,"slt    %s, %s, %s   ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs2_str);
                            } else if ((0x3033U == 
                                        (0xfe00707fU 
                                         & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__Vfuncout
                                              ,"sltu   %s, %s, %s   ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs2_str);
                            } else if ((0x2000033U 
                                        == (0xfe00707fU 
                                            & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__Vfuncout
                                              ,"mul    %s, %s, %s   ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs2_str);
                            } else if ((0x13U == (0x707fU 
                                                  & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__Vfuncout
                                              ,"addi   %s, %s, 0x%x ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                              12,([&]() {
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__14__inst 
                                                    = __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst;
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__14__Vfuncout 
                                                    = 
                                                    (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__14__inst 
                                                     >> 0x14U);
                                            }(), (IData)(__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__14__Vfuncout)));
                            } else if ((0x7013U == 
                                        (0x707fU & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__Vfuncout
                                              ,"andi   %s, %s, 0x%x ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                              12,([&]() {
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__15__inst 
                                                    = __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst;
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__15__Vfuncout 
                                                    = 
                                                    (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__15__inst 
                                                     >> 0x14U);
                                            }(), (IData)(__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__15__Vfuncout)));
                            } else if ((0x6013U == 
                                        (0x707fU & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__Vfuncout
                                              ,"ori    %s, %s, 0x%x ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                              12,([&]() {
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__16__inst 
                                                    = __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst;
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__16__Vfuncout 
                                                    = 
                                                    (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__16__inst 
                                                     >> 0x14U);
                                            }(), (IData)(__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__16__Vfuncout)));
                            } else {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__Vfuncout
                                              ,"xori   %s, %s, 0x%x ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                              12,([&]() {
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__17__inst 
                                                    = __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst;
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__17__Vfuncout 
                                                    = 
                                                    (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__17__inst 
                                                     >> 0x14U);
                                            }(), (IData)(__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__17__Vfuncout)));
                            }
                        } else if (((((((((0x2013U 
                                           == (0x707fU 
                                               & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst)) 
                                          | (0x3013U 
                                             == (0x707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) 
                                         | (0x40005033U 
                                            == (0xfe00707fU 
                                                & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) 
                                        | (0x5033U 
                                           == (0xfe00707fU 
                                               & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) 
                                       | (0x1033U == 
                                          (0xfe00707fU 
                                           & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) 
                                      | (0x40005013U 
                                         == (0xfe00707fU 
                                             & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) 
                                     | (0x5013U == 
                                        (0xfe00707fU 
                                         & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) 
                                    | (0x1013U == (0xfe00707fU 
                                                   & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst)))) {
                            if ((0x2013U == (0x707fU 
                                             & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__Vfuncout
                                              ,"slti   %s, %s, 0x%x ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                              12,([&]() {
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__18__inst 
                                                    = __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst;
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__18__Vfuncout 
                                                    = 
                                                    (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__18__inst 
                                                     >> 0x14U);
                                            }(), (IData)(__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__18__Vfuncout)));
                            } else if ((0x3013U == 
                                        (0x707fU & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__Vfuncout
                                              ,"sltiu  %s, %s, 0x%x ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                              12,([&]() {
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__19__inst 
                                                    = __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst;
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__19__Vfuncout 
                                                    = 
                                                    (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__19__inst 
                                                     >> 0x14U);
                                            }(), (IData)(__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__19__Vfuncout)));
                            } else if ((0x40005033U 
                                        == (0xfe00707fU 
                                            & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__Vfuncout
                                              ,"sra    %s, %s, 0x%x  ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                              5,([&]() {
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__20__inst 
                                                    = __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst;
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__20__Vfuncout 
                                                    = 
                                                    (0x1fU 
                                                     & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__20__inst 
                                                        >> 0x14U));
                                            }(), (IData)(__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__20__Vfuncout)));
                            } else if ((0x5033U == 
                                        (0xfe00707fU 
                                         & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__Vfuncout
                                              ,"srl    %s, %s, 0x%x  ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                              5,([&]() {
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__21__inst 
                                                    = __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst;
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__21__Vfuncout 
                                                    = 
                                                    (0x1fU 
                                                     & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__21__inst 
                                                        >> 0x14U));
                                            }(), (IData)(__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__21__Vfuncout)));
                            } else if ((0x1033U == 
                                        (0xfe00707fU 
                                         & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__Vfuncout
                                              ,"sll    %s, %s, 0x%x  ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                              5,([&]() {
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__22__inst 
                                                    = __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst;
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__22__Vfuncout 
                                                    = 
                                                    (0x1fU 
                                                     & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__22__inst 
                                                        >> 0x14U));
                                            }(), (IData)(__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__22__Vfuncout)));
                            } else if ((0x40005013U 
                                        == (0xfe00707fU 
                                            & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__Vfuncout
                                              ,"srai   %s, %s, 0x%x  ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                              5,([&]() {
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__23__inst 
                                                    = __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst;
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__23__Vfuncout 
                                                    = 
                                                    (0x1fU 
                                                     & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__23__inst 
                                                        >> 0x14U));
                                            }(), (IData)(__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__23__Vfuncout)));
                            } else if ((0x5013U == 
                                        (0xfe00707fU 
                                         & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__Vfuncout
                                              ,"srli   %s, %s, 0x%x  ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                              5,([&]() {
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__24__inst 
                                                    = __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst;
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__24__Vfuncout 
                                                    = 
                                                    (0x1fU 
                                                     & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__24__inst 
                                                        >> 0x14U));
                                            }(), (IData)(__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__24__Vfuncout)));
                            } else {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__Vfuncout
                                              ,"slli   %s, %s, 0x%x  ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                              5,([&]() {
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__25__inst 
                                                    = __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst;
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__25__Vfuncout 
                                                    = 
                                                    (0x1fU 
                                                     & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__25__inst 
                                                        >> 0x14U));
                                            }(), (IData)(__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__25__Vfuncout)));
                            }
                        } else if (((((((((0x37U == 
                                           (0x7fU & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst)) 
                                          | (0x17U 
                                             == (0x7fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) 
                                         | (0x2003U 
                                            == (0x707fU 
                                                & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) 
                                        | (0x2023U 
                                           == (0x707fU 
                                               & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) 
                                       | (0x6fU == 
                                          (0x7fU & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) 
                                      | (0x67U == (0x707fU 
                                                   & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) 
                                     | (0x63U == (0x707fU 
                                                  & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) 
                                    | (0x1063U == (0x707fU 
                                                   & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst)))) {
                            if ((0x37U == (0x7fU & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__Vfuncout
                                              ,"lui    %s, 0x%x    ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                              20,([&]() {
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_u_sh12__26__inst 
                                                    = __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst;
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_u_sh12__26__Vfuncout 
                                                    = 
                                                    (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_u_sh12__26__inst 
                                                     >> 0xcU);
                                            }(), __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_u_sh12__26__Vfuncout));
                            } else if ((0x17U == (0x7fU 
                                                  & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__Vfuncout
                                              ,"auipc  %s, 0x%x    ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                              20,([&]() {
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_u_sh12__27__inst 
                                                    = __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst;
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_u_sh12__27__Vfuncout 
                                                    = 
                                                    (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_u_sh12__27__inst 
                                                     >> 0xcU);
                                            }(), __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_u_sh12__27__Vfuncout));
                            } else if ((0x2003U == 
                                        (0x707fU & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__Vfuncout
                                              ,"lw     %s, 0x%x(%s) ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                              12,([&]() {
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__28__inst 
                                                    = __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst;
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__28__Vfuncout 
                                                    = 
                                                    (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__28__inst 
                                                     >> 0x14U);
                                            }(), (IData)(__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__28__Vfuncout)),
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str);
                            } else if ((0x2023U == 
                                        (0x707fU & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__Vfuncout
                                              ,"sw     %s, 0x%x(%s) ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs2_str,
                                              12,([&]() {
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_s__29__inst 
                                                    = __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst;
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_s__29__Vfuncout 
                                                    = 
                                                    ((0xfe0U 
                                                      & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_s__29__inst 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_s__29__inst 
                                                           >> 7U)));
                                            }(), (IData)(__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_s__29__Vfuncout)),
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str);
                            } else if ((0x6fU == (0x7fU 
                                                  & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__Vfuncout
                                              ,"jal    %s, 0x%x   ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                              21,([&]() {
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_j__30__inst 
                                                    = __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst;
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_j__30__Vfuncout 
                                                    = 
                                                    ((0x100000U 
                                                      & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_j__30__inst 
                                                         >> 0xbU)) 
                                                     | ((0xff000U 
                                                         & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_j__30__inst) 
                                                        | ((0x800U 
                                                            & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_j__30__inst 
                                                               >> 9U)) 
                                                           | ((0x7e0U 
                                                               & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_j__30__inst 
                                                                  >> 0x14U)) 
                                                              | (0x1eU 
                                                                 & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_j__30__inst 
                                                                    >> 0x14U))))));
                                            }(), __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_j__30__Vfuncout));
                            } else if ((0x67U == (0x707fU 
                                                  & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__Vfuncout
                                              ,"jalr   %s, %s, 0x%x ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                              12,([&]() {
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__31__inst 
                                                    = __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst;
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__31__Vfuncout 
                                                    = 
                                                    (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__31__inst 
                                                     >> 0x14U);
                                            }(), (IData)(__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__31__Vfuncout)));
                            } else if ((0x63U == (0x707fU 
                                                  & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__Vfuncout
                                              ,"beq    %s, %s, 0x%x",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs2_str,
                                              13,([&]() {
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__32__inst 
                                                    = __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst;
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__32__Vfuncout 
                                                    = 
                                                    ((0x1000U 
                                                      & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__32__inst 
                                                         >> 0x13U)) 
                                                     | ((0x800U 
                                                         & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__32__inst 
                                                            << 4U)) 
                                                        | ((0x7e0U 
                                                            & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__32__inst 
                                                               >> 0x14U)) 
                                                           | (0x1eU 
                                                              & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__32__inst 
                                                                 >> 7U)))));
                                            }(), (IData)(__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__32__Vfuncout)));
                            } else {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__Vfuncout
                                              ,"bne    %s, %s, 0x%x",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs2_str,
                                              13,([&]() {
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__33__inst 
                                                    = __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst;
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__33__Vfuncout 
                                                    = 
                                                    ((0x1000U 
                                                      & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__33__inst 
                                                         >> 0x13U)) 
                                                     | ((0x800U 
                                                         & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__33__inst 
                                                            << 4U)) 
                                                        | ((0x7e0U 
                                                            & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__33__inst 
                                                               >> 0x14U)) 
                                                           | (0x1eU 
                                                              & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__33__inst 
                                                                 >> 7U)))));
                                            }(), (IData)(__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__33__Vfuncout)));
                            }
                        } else if ((0x4063U == (0x707fU 
                                                & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) {
                            VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__Vfuncout
                                          ,"blt    %s, %s, 0x%x",0,
                                          24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                          24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs2_str,
                                          13,([&]() {
                                            __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__34__inst 
                                                = __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst;
                                            __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__34__Vfuncout 
                                                = (
                                                   (0x1000U 
                                                    & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__34__inst 
                                                       >> 0x13U)) 
                                                   | ((0x800U 
                                                       & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__34__inst 
                                                          << 4U)) 
                                                      | ((0x7e0U 
                                                          & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__34__inst 
                                                             >> 0x14U)) 
                                                         | (0x1eU 
                                                            & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__34__inst 
                                                               >> 7U)))));
                                        }(), (IData)(__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__34__Vfuncout)));
                        } else if ((0x5063U == (0x707fU 
                                                & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) {
                            VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__Vfuncout
                                          ,"bge    %s, %s, 0x%x",0,
                                          24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                          24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs2_str,
                                          13,([&]() {
                                            __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__35__inst 
                                                = __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst;
                                            __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__35__Vfuncout 
                                                = (
                                                   (0x1000U 
                                                    & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__35__inst 
                                                       >> 0x13U)) 
                                                   | ((0x800U 
                                                       & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__35__inst 
                                                          << 4U)) 
                                                      | ((0x7e0U 
                                                          & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__35__inst 
                                                             >> 0x14U)) 
                                                         | (0x1eU 
                                                            & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__35__inst 
                                                               >> 7U)))));
                                        }(), (IData)(__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__35__Vfuncout)));
                        } else if ((0x6063U == (0x707fU 
                                                & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) {
                            VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__Vfuncout
                                          ,"bltu   %s, %s, 0x%x",0,
                                          24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                          24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs2_str,
                                          13,([&]() {
                                            __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__36__inst 
                                                = __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst;
                                            __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__36__Vfuncout 
                                                = (
                                                   (0x1000U 
                                                    & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__36__inst 
                                                       >> 0x13U)) 
                                                   | ((0x800U 
                                                       & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__36__inst 
                                                          << 4U)) 
                                                      | ((0x7e0U 
                                                          & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__36__inst 
                                                             >> 0x14U)) 
                                                         | (0x1eU 
                                                            & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__36__inst 
                                                               >> 7U)))));
                                        }(), (IData)(__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__36__Vfuncout)));
                        } else if ((0x7063U == (0x707fU 
                                                & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) {
                            VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__Vfuncout
                                          ,"bgeu   %s, %s, 0x%x",0,
                                          24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                          24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs2_str,
                                          13,([&]() {
                                            __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__37__inst 
                                                = __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst;
                                            __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__37__Vfuncout 
                                                = (
                                                   (0x1000U 
                                                    & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__37__inst 
                                                       >> 0x13U)) 
                                                   | ((0x800U 
                                                       & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__37__inst 
                                                          << 4U)) 
                                                      | ((0x7e0U 
                                                          & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__37__inst 
                                                             >> 0x14U)) 
                                                         | (0x1eU 
                                                            & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__37__inst 
                                                               >> 7U)))));
                                        }(), (IData)(__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__37__Vfuncout)));
                        } else if ((0xbU == (0x7fU 
                                             & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__inst))) {
                            VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__Vfuncout
                                          ,"cust0 %s, %s, %s, %s",0,
                                          24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                          24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                          24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs2_str,
                                          16,(IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__funct_str));
                        } else {
                            VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__Vfuncout
                                          ,"illegal inst           ",0);
                        }
                    }(), __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__13__Vfuncout));
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__12__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__12__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__12__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))))) {
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0);
            }
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__12__trace[0U];
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__12__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__12__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__12__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__12__trace[0U] 
                = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__12__trace);
        }
    } else {
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__38__num = 0x17U;
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__38__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__38__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__38__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__38__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__38__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__38__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__38__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__38__trace);
    }
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__39__str, VSingleCoreSys_noparam__ConstPool__CONST_h803d56e6_0);
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__39__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str);
    vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__39__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__39__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))))) {
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0);
    }
    vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
        = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__39__trace[0U];
    vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
        = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__39__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__39__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__39__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))));
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__39__trace[0U] 
        = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__39__trace);
    if (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__val_X) {
        if (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__stall_X) {
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__40__str, VSingleCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__40__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__40__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__40__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))))) {
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0);
            }
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__40__trace[0U];
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__40__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__40__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__40__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__40__trace[0U] 
                = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__40__trace);
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__41__num = 3U;
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__41__char = 0x20U;
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__41__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__41__trace[0U];
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__41__num)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__41__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__41__char);
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1);
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__41__trace[0U] 
                = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__41__trace);
        } else {
            VL_EXTEND_WI(4096,32, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__42__str, 
                         ([&]() {
                        __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst 
                            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__inst_X;
                        __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__Vfuncout 
                            = (((((((((0x2073U == (0x707fU 
                                                   & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst)) 
                                      | (0x1073U == 
                                         (0x707fU & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))) 
                                     | (0x13U == __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst)) 
                                    | (0x33U == (0xfe00707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))) 
                                   | (0x40000033U == 
                                      (0xfe00707fU 
                                       & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))) 
                                  | (0x7033U == (0xfe00707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))) 
                                 | (0x6033U == (0xfe00707fU 
                                                & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))) 
                                | (0x4033U == (0xfe00707fU 
                                               & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst)))
                                ? ((0x2073U == (0x707fU 
                                                & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))
                                    ? 0x63737272U : 
                                   ((0x1073U == (0x707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))
                                     ? 0x63737277U : 
                                    ((0x13U == __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst)
                                      ? 0x6e6f7020U
                                      : ((0x33U == 
                                          (0xfe00707fU 
                                           & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))
                                          ? 0x61646420U
                                          : ((0x40000033U 
                                              == (0xfe00707fU 
                                                  & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))
                                              ? 0x73756220U
                                              : ((0x7033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))
                                                  ? 0x616e6420U
                                                  : 
                                                 ((0x6033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))
                                                   ? 0x6f722020U
                                                   : 0x786f7220U)))))))
                                : (((((((((0x2033U 
                                           == (0xfe00707fU 
                                               & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst)) 
                                          | (0x3033U 
                                             == (0xfe00707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))) 
                                         | (0x2000033U 
                                            == (0xfe00707fU 
                                                & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))) 
                                        | (0x13U == 
                                           (0x707fU 
                                            & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))) 
                                       | (0x7013U == 
                                          (0x707fU 
                                           & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))) 
                                      | (0x6013U == 
                                         (0x707fU & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))) 
                                     | (0x4013U == 
                                        (0x707fU & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))) 
                                    | (0x2013U == (0x707fU 
                                                   & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst)))
                                    ? ((0x2033U == 
                                        (0xfe00707fU 
                                         & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))
                                        ? 0x736c7420U
                                        : ((0x3033U 
                                            == (0xfe00707fU 
                                                & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))
                                            ? 0x736c7475U
                                            : ((0x2000033U 
                                                == 
                                                (0xfe00707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))
                                                ? 0x6d756c20U
                                                : (
                                                   (0x13U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))
                                                    ? 0x61646469U
                                                    : 
                                                   ((0x7013U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))
                                                     ? 0x616e6469U
                                                     : 
                                                    ((0x6013U 
                                                      == 
                                                      (0x707fU 
                                                       & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))
                                                      ? 0x6f726920U
                                                      : 
                                                     ((0x4013U 
                                                       == 
                                                       (0x707fU 
                                                        & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))
                                                       ? 0x786f7269U
                                                       : 0x736c7469U)))))))
                                    : (((((((((0x3013U 
                                               == (0x707fU 
                                                   & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst)) 
                                              | (0x40005033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))) 
                                             | (0x5033U 
                                                == 
                                                (0xfe00707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))) 
                                            | (0x1033U 
                                               == (0xfe00707fU 
                                                   & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))) 
                                           | (0x40005013U 
                                              == (0xfe00707fU 
                                                  & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))) 
                                          | (0x5013U 
                                             == (0xfe00707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))) 
                                         | (0x1013U 
                                            == (0xfe00707fU 
                                                & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))) 
                                        | (0x37U == 
                                           (0x7fU & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst)))
                                        ? ((0x3013U 
                                            == (0x707fU 
                                                & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))
                                            ? 0x736c7449U
                                            : ((0x40005033U 
                                                == 
                                                (0xfe00707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))
                                                ? 0x73726120U
                                                : (
                                                   (0x5033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))
                                                    ? 0x73726c20U
                                                    : 
                                                   ((0x1033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))
                                                     ? 0x736c6c20U
                                                     : 
                                                    ((0x40005013U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))
                                                      ? 0x73726169U
                                                      : 
                                                     ((0x5013U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))
                                                       ? 0x73726c69U
                                                       : 
                                                      ((0x1013U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))
                                                        ? 0x736c6c69U
                                                        : 0x6c756920U)))))))
                                        : (((((((((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst)) 
                                                  | (0x2003U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))) 
                                                 | (0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))) 
                                                | (0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))) 
                                               | (0x67U 
                                                  == 
                                                  (0x707fU 
                                                   & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))) 
                                              | (0x63U 
                                                 == 
                                                 (0x707fU 
                                                  & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))) 
                                             | (0x1063U 
                                                == 
                                                (0x707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))) 
                                            | (0x4063U 
                                               == (0x707fU 
                                                   & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst)))
                                            ? ((0x17U 
                                                == 
                                                (0x7fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))
                                                ? 0x61756950U
                                                : (
                                                   (0x2003U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))
                                                    ? 0x6c772020U
                                                    : 
                                                   ((0x2023U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))
                                                     ? 0x73772020U
                                                     : 
                                                    ((0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))
                                                      ? 0x6a616c20U
                                                      : 
                                                     ((0x67U 
                                                       == 
                                                       (0x707fU 
                                                        & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))
                                                       ? 0x6a616c72U
                                                       : 
                                                      ((0x63U 
                                                        == 
                                                        (0x707fU 
                                                         & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))
                                                        ? 0x62657120U
                                                        : 
                                                       ((0x1063U 
                                                         == 
                                                         (0x707fU 
                                                          & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))
                                                         ? 0x626e6520U
                                                         : 0x626c7420U)))))))
                                            : ((0x5063U 
                                                == 
                                                (0x707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))
                                                ? 0x62676520U
                                                : (
                                                   (0x6063U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))
                                                    ? 0x626c7475U
                                                    : 
                                                   ((0x7063U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))
                                                     ? 0x62676575U
                                                     : 
                                                    ((0xbU 
                                                      == 
                                                      (0x7fU 
                                                       & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__inst))
                                                      ? 0x63757330U
                                                      : 0x3f3f3f3fU))))))));
                    }(), __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__43__Vfuncout));
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__42__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__42__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__42__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))))) {
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0);
            }
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__42__trace[0U];
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__42__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__42__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__42__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__42__trace[0U] 
                = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__42__trace);
        }
    } else {
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__44__num = 4U;
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__44__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__44__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__44__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__44__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__44__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__44__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__44__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__44__trace);
    }
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__45__str, VSingleCoreSys_noparam__ConstPool__CONST_h803d56e6_0);
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__45__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str);
    vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__45__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__45__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))))) {
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0);
    }
    vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
        = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__45__trace[0U];
    vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
        = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__45__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__45__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__45__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))));
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__45__trace[0U] 
        = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__45__trace);
    if (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__val_M) {
        if (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__stall_M) {
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__46__str, VSingleCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__46__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__46__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__46__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))))) {
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0);
            }
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__46__trace[0U];
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__46__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__46__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__46__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__46__trace[0U] 
                = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__46__trace);
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__47__num = 3U;
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__47__char = 0x20U;
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__47__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__47__trace[0U];
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__47__num)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__47__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__47__char);
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1);
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__47__trace[0U] 
                = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__47__trace);
        } else {
            VL_EXTEND_WI(4096,32, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__48__str, 
                         ([&]() {
                        __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst 
                            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__inst_M;
                        __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__Vfuncout 
                            = (((((((((0x2073U == (0x707fU 
                                                   & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst)) 
                                      | (0x1073U == 
                                         (0x707fU & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))) 
                                     | (0x13U == __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst)) 
                                    | (0x33U == (0xfe00707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))) 
                                   | (0x40000033U == 
                                      (0xfe00707fU 
                                       & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))) 
                                  | (0x7033U == (0xfe00707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))) 
                                 | (0x6033U == (0xfe00707fU 
                                                & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))) 
                                | (0x4033U == (0xfe00707fU 
                                               & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst)))
                                ? ((0x2073U == (0x707fU 
                                                & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))
                                    ? 0x63737272U : 
                                   ((0x1073U == (0x707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))
                                     ? 0x63737277U : 
                                    ((0x13U == __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst)
                                      ? 0x6e6f7020U
                                      : ((0x33U == 
                                          (0xfe00707fU 
                                           & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))
                                          ? 0x61646420U
                                          : ((0x40000033U 
                                              == (0xfe00707fU 
                                                  & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))
                                              ? 0x73756220U
                                              : ((0x7033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))
                                                  ? 0x616e6420U
                                                  : 
                                                 ((0x6033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))
                                                   ? 0x6f722020U
                                                   : 0x786f7220U)))))))
                                : (((((((((0x2033U 
                                           == (0xfe00707fU 
                                               & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst)) 
                                          | (0x3033U 
                                             == (0xfe00707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))) 
                                         | (0x2000033U 
                                            == (0xfe00707fU 
                                                & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))) 
                                        | (0x13U == 
                                           (0x707fU 
                                            & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))) 
                                       | (0x7013U == 
                                          (0x707fU 
                                           & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))) 
                                      | (0x6013U == 
                                         (0x707fU & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))) 
                                     | (0x4013U == 
                                        (0x707fU & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))) 
                                    | (0x2013U == (0x707fU 
                                                   & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst)))
                                    ? ((0x2033U == 
                                        (0xfe00707fU 
                                         & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))
                                        ? 0x736c7420U
                                        : ((0x3033U 
                                            == (0xfe00707fU 
                                                & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))
                                            ? 0x736c7475U
                                            : ((0x2000033U 
                                                == 
                                                (0xfe00707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))
                                                ? 0x6d756c20U
                                                : (
                                                   (0x13U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))
                                                    ? 0x61646469U
                                                    : 
                                                   ((0x7013U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))
                                                     ? 0x616e6469U
                                                     : 
                                                    ((0x6013U 
                                                      == 
                                                      (0x707fU 
                                                       & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))
                                                      ? 0x6f726920U
                                                      : 
                                                     ((0x4013U 
                                                       == 
                                                       (0x707fU 
                                                        & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))
                                                       ? 0x786f7269U
                                                       : 0x736c7469U)))))))
                                    : (((((((((0x3013U 
                                               == (0x707fU 
                                                   & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst)) 
                                              | (0x40005033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))) 
                                             | (0x5033U 
                                                == 
                                                (0xfe00707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))) 
                                            | (0x1033U 
                                               == (0xfe00707fU 
                                                   & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))) 
                                           | (0x40005013U 
                                              == (0xfe00707fU 
                                                  & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))) 
                                          | (0x5013U 
                                             == (0xfe00707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))) 
                                         | (0x1013U 
                                            == (0xfe00707fU 
                                                & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))) 
                                        | (0x37U == 
                                           (0x7fU & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst)))
                                        ? ((0x3013U 
                                            == (0x707fU 
                                                & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))
                                            ? 0x736c7449U
                                            : ((0x40005033U 
                                                == 
                                                (0xfe00707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))
                                                ? 0x73726120U
                                                : (
                                                   (0x5033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))
                                                    ? 0x73726c20U
                                                    : 
                                                   ((0x1033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))
                                                     ? 0x736c6c20U
                                                     : 
                                                    ((0x40005013U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))
                                                      ? 0x73726169U
                                                      : 
                                                     ((0x5013U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))
                                                       ? 0x73726c69U
                                                       : 
                                                      ((0x1013U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))
                                                        ? 0x736c6c69U
                                                        : 0x6c756920U)))))))
                                        : (((((((((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst)) 
                                                  | (0x2003U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))) 
                                                 | (0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))) 
                                                | (0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))) 
                                               | (0x67U 
                                                  == 
                                                  (0x707fU 
                                                   & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))) 
                                              | (0x63U 
                                                 == 
                                                 (0x707fU 
                                                  & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))) 
                                             | (0x1063U 
                                                == 
                                                (0x707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))) 
                                            | (0x4063U 
                                               == (0x707fU 
                                                   & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst)))
                                            ? ((0x17U 
                                                == 
                                                (0x7fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))
                                                ? 0x61756950U
                                                : (
                                                   (0x2003U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))
                                                    ? 0x6c772020U
                                                    : 
                                                   ((0x2023U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))
                                                     ? 0x73772020U
                                                     : 
                                                    ((0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))
                                                      ? 0x6a616c20U
                                                      : 
                                                     ((0x67U 
                                                       == 
                                                       (0x707fU 
                                                        & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))
                                                       ? 0x6a616c72U
                                                       : 
                                                      ((0x63U 
                                                        == 
                                                        (0x707fU 
                                                         & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))
                                                        ? 0x62657120U
                                                        : 
                                                       ((0x1063U 
                                                         == 
                                                         (0x707fU 
                                                          & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))
                                                         ? 0x626e6520U
                                                         : 0x626c7420U)))))))
                                            : ((0x5063U 
                                                == 
                                                (0x707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))
                                                ? 0x62676520U
                                                : (
                                                   (0x6063U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))
                                                    ? 0x626c7475U
                                                    : 
                                                   ((0x7063U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))
                                                     ? 0x62676575U
                                                     : 
                                                    ((0xbU 
                                                      == 
                                                      (0x7fU 
                                                       & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__inst))
                                                      ? 0x63757330U
                                                      : 0x3f3f3f3fU))))))));
                    }(), __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__49__Vfuncout));
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__48__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__48__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__48__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))))) {
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0);
            }
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__48__trace[0U];
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__48__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__48__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__48__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__48__trace[0U] 
                = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__48__trace);
        }
    } else {
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__50__num = 4U;
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__50__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__50__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__50__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__50__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__50__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__50__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__50__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__50__trace);
    }
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__51__str, VSingleCoreSys_noparam__ConstPool__CONST_h803d56e6_0);
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__51__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str);
    vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__51__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__51__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))))) {
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0);
    }
    vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
        = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__51__trace[0U];
    vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
        = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__51__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__51__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__51__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))));
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__51__trace[0U] 
        = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__51__trace);
    if (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__val_W) {
        if (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__stall_W) {
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__52__str, VSingleCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__52__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__52__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__52__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))))) {
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0);
            }
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__52__trace[0U];
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__52__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__52__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__52__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__52__trace[0U] 
                = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__52__trace);
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__53__num = 3U;
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__53__char = 0x20U;
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__53__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__53__trace[0U];
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__53__num)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__53__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__53__char);
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1);
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__53__trace[0U] 
                = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__53__trace);
        } else {
            VL_EXTEND_WI(4096,32, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__54__str, 
                         ([&]() {
                        __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst 
                            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__inst_W;
                        __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__Vfuncout 
                            = (((((((((0x2073U == (0x707fU 
                                                   & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst)) 
                                      | (0x1073U == 
                                         (0x707fU & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))) 
                                     | (0x13U == __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst)) 
                                    | (0x33U == (0xfe00707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))) 
                                   | (0x40000033U == 
                                      (0xfe00707fU 
                                       & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))) 
                                  | (0x7033U == (0xfe00707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))) 
                                 | (0x6033U == (0xfe00707fU 
                                                & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))) 
                                | (0x4033U == (0xfe00707fU 
                                               & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst)))
                                ? ((0x2073U == (0x707fU 
                                                & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))
                                    ? 0x63737272U : 
                                   ((0x1073U == (0x707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))
                                     ? 0x63737277U : 
                                    ((0x13U == __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst)
                                      ? 0x6e6f7020U
                                      : ((0x33U == 
                                          (0xfe00707fU 
                                           & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))
                                          ? 0x61646420U
                                          : ((0x40000033U 
                                              == (0xfe00707fU 
                                                  & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))
                                              ? 0x73756220U
                                              : ((0x7033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))
                                                  ? 0x616e6420U
                                                  : 
                                                 ((0x6033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))
                                                   ? 0x6f722020U
                                                   : 0x786f7220U)))))))
                                : (((((((((0x2033U 
                                           == (0xfe00707fU 
                                               & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst)) 
                                          | (0x3033U 
                                             == (0xfe00707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))) 
                                         | (0x2000033U 
                                            == (0xfe00707fU 
                                                & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))) 
                                        | (0x13U == 
                                           (0x707fU 
                                            & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))) 
                                       | (0x7013U == 
                                          (0x707fU 
                                           & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))) 
                                      | (0x6013U == 
                                         (0x707fU & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))) 
                                     | (0x4013U == 
                                        (0x707fU & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))) 
                                    | (0x2013U == (0x707fU 
                                                   & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst)))
                                    ? ((0x2033U == 
                                        (0xfe00707fU 
                                         & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))
                                        ? 0x736c7420U
                                        : ((0x3033U 
                                            == (0xfe00707fU 
                                                & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))
                                            ? 0x736c7475U
                                            : ((0x2000033U 
                                                == 
                                                (0xfe00707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))
                                                ? 0x6d756c20U
                                                : (
                                                   (0x13U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))
                                                    ? 0x61646469U
                                                    : 
                                                   ((0x7013U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))
                                                     ? 0x616e6469U
                                                     : 
                                                    ((0x6013U 
                                                      == 
                                                      (0x707fU 
                                                       & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))
                                                      ? 0x6f726920U
                                                      : 
                                                     ((0x4013U 
                                                       == 
                                                       (0x707fU 
                                                        & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))
                                                       ? 0x786f7269U
                                                       : 0x736c7469U)))))))
                                    : (((((((((0x3013U 
                                               == (0x707fU 
                                                   & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst)) 
                                              | (0x40005033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))) 
                                             | (0x5033U 
                                                == 
                                                (0xfe00707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))) 
                                            | (0x1033U 
                                               == (0xfe00707fU 
                                                   & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))) 
                                           | (0x40005013U 
                                              == (0xfe00707fU 
                                                  & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))) 
                                          | (0x5013U 
                                             == (0xfe00707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))) 
                                         | (0x1013U 
                                            == (0xfe00707fU 
                                                & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))) 
                                        | (0x37U == 
                                           (0x7fU & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst)))
                                        ? ((0x3013U 
                                            == (0x707fU 
                                                & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))
                                            ? 0x736c7449U
                                            : ((0x40005033U 
                                                == 
                                                (0xfe00707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))
                                                ? 0x73726120U
                                                : (
                                                   (0x5033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))
                                                    ? 0x73726c20U
                                                    : 
                                                   ((0x1033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))
                                                     ? 0x736c6c20U
                                                     : 
                                                    ((0x40005013U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))
                                                      ? 0x73726169U
                                                      : 
                                                     ((0x5013U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))
                                                       ? 0x73726c69U
                                                       : 
                                                      ((0x1013U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))
                                                        ? 0x736c6c69U
                                                        : 0x6c756920U)))))))
                                        : (((((((((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst)) 
                                                  | (0x2003U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))) 
                                                 | (0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))) 
                                                | (0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))) 
                                               | (0x67U 
                                                  == 
                                                  (0x707fU 
                                                   & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))) 
                                              | (0x63U 
                                                 == 
                                                 (0x707fU 
                                                  & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))) 
                                             | (0x1063U 
                                                == 
                                                (0x707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))) 
                                            | (0x4063U 
                                               == (0x707fU 
                                                   & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst)))
                                            ? ((0x17U 
                                                == 
                                                (0x7fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))
                                                ? 0x61756950U
                                                : (
                                                   (0x2003U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))
                                                    ? 0x6c772020U
                                                    : 
                                                   ((0x2023U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))
                                                     ? 0x73772020U
                                                     : 
                                                    ((0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))
                                                      ? 0x6a616c20U
                                                      : 
                                                     ((0x67U 
                                                       == 
                                                       (0x707fU 
                                                        & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))
                                                       ? 0x6a616c72U
                                                       : 
                                                      ((0x63U 
                                                        == 
                                                        (0x707fU 
                                                         & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))
                                                        ? 0x62657120U
                                                        : 
                                                       ((0x1063U 
                                                         == 
                                                         (0x707fU 
                                                          & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))
                                                         ? 0x626e6520U
                                                         : 0x626c7420U)))))))
                                            : ((0x5063U 
                                                == 
                                                (0x707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))
                                                ? 0x62676520U
                                                : (
                                                   (0x6063U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))
                                                    ? 0x626c7475U
                                                    : 
                                                   ((0x7063U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))
                                                     ? 0x62676575U
                                                     : 
                                                    ((0xbU 
                                                      == 
                                                      (0x7fU 
                                                       & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__inst))
                                                      ? 0x63757330U
                                                      : 0x3f3f3f3fU))))))));
                    }(), __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__55__Vfuncout));
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__54__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__54__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__54__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))))) {
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0);
            }
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__54__trace[0U];
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__54__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__54__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__54__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__54__trace[0U] 
                = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__54__trace);
        }
    } else {
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__56__num = 4U;
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__56__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__56__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__56__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__56__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__56__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__56__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__56__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__56__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace__0__trace_str);
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__vc_trace__DOT__append_str__57__str, VSingleCoreSys_noparam__ConstPool__CONST_h803d56e6_0);
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__vc_trace__DOT__append_str__57__trace, trace_str);
    SingleCoreSys_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__vc_trace__DOT__append_str__57__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__vc_trace__DOT__append_str__57__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        SingleCoreSys_noparam__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__vc_trace__DOT__len0);
    }
    SingleCoreSys_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
        = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__vc_trace__DOT__append_str__57__trace[0U];
    SingleCoreSys_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
        = (SingleCoreSys_noparam__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__vc_trace__DOT__append_str__57__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__vc_trace__DOT__append_str__57__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__vc_trace__DOT__append_str__57__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
        SingleCoreSys_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = (SingleCoreSys_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        SingleCoreSys_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (SingleCoreSys_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__vc_trace__DOT__append_str__57__trace[0U] 
        = SingleCoreSys_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__vc_trace__DOT__append_str__57__trace);
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__line_trace__58__trace_str, trace_str);
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__59__str, VSingleCoreSys_noparam__ConstPool__CONST_h7ed547c1_0);
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__59__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__line_trace__58__trace_str);
    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__59__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__59__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))))) {
        SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0);
    }
    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
        = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__59__trace[0U];
    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
        = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__59__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__59__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__59__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))));
        SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
            = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
            = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__59__trace[0U] 
        = SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__line_trace__58__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__59__trace);
    if ((0x10U & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))) {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__60__str, VSingleCoreSys_noparam__ConstPool__CONST_h296ef16f_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__60__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__line_trace__58__trace_str);
        SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__60__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__60__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))))) {
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0);
        }
        SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__60__trace[0U];
        SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
            = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__60__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__60__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__60__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))));
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__60__trace[0U] 
            = SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__line_trace__58__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__60__trace);
    } else if ((8U & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))) {
        if ((4U & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))) {
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__61__str, VSingleCoreSys_noparam__ConstPool__CONST_h296ef16f_0);
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__61__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__line_trace__58__trace_str);
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__61__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__61__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))))) {
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0);
            }
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__61__trace[0U];
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__61__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__61__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__61__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))));
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                    = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                    = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__61__trace[0U] 
                = SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__line_trace__58__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__61__trace);
        } else if ((2U & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))) {
            if ((1U & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))) {
                VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__62__str, VSingleCoreSys_noparam__ConstPool__CONST_h56610484_0);
                VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__62__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__line_trace__58__trace_str);
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__62__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__62__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))))) {
                    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0);
                }
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                    = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__62__trace[0U];
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                    = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__62__trace, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__62__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__62__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))));
                    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                        = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                        = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__62__trace[0U] 
                    = SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0;
                VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__line_trace__58__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__62__trace);
            } else {
                VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__63__str, VSingleCoreSys_noparam__ConstPool__CONST_h0566f112_0);
                VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__63__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__line_trace__58__trace_str);
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__63__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__63__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))))) {
                    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0);
                }
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                    = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__63__trace[0U];
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                    = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__63__trace, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__63__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__63__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))));
                    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                        = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                        = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__63__trace[0U] 
                    = SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0;
                VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__line_trace__58__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__63__trace);
            }
        } else if ((1U & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))) {
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__64__str, VSingleCoreSys_noparam__ConstPool__CONST_h777355b7_0);
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__64__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__line_trace__58__trace_str);
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__64__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__64__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))))) {
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0);
            }
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__64__trace[0U];
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__64__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__64__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__64__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))));
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                    = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                    = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__64__trace[0U] 
                = SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__line_trace__58__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__64__trace);
        } else {
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__65__str, VSingleCoreSys_noparam__ConstPool__CONST_hed8640c4_0);
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__65__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__line_trace__58__trace_str);
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__65__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__65__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))))) {
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0);
            }
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__65__trace[0U];
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__65__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__65__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__65__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))));
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                    = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                    = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__65__trace[0U] 
                = SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__line_trace__58__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__65__trace);
        }
    } else if ((4U & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))) {
        if ((2U & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))) {
            if ((1U & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))) {
                VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__66__str, VSingleCoreSys_noparam__ConstPool__CONST_hb98e3b6b_0);
                VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__66__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__line_trace__58__trace_str);
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__66__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__66__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))))) {
                    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0);
                }
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                    = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__66__trace[0U];
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                    = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__66__trace, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__66__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__66__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))));
                    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                        = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                        = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__66__trace[0U] 
                    = SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0;
                VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__line_trace__58__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__66__trace);
            } else {
                VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__67__str, VSingleCoreSys_noparam__ConstPool__CONST_ha1593b7e_0);
                VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__67__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__line_trace__58__trace_str);
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__67__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__67__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))))) {
                    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0);
                }
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                    = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__67__trace[0U];
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                    = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__67__trace, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__67__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__67__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))));
                    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                        = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                        = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__67__trace[0U] 
                    = SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0;
                VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__line_trace__58__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__67__trace);
            }
        } else if ((1U & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))) {
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__68__str, VSingleCoreSys_noparam__ConstPool__CONST_he2533c7c_0);
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__68__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__line_trace__58__trace_str);
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__68__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__68__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))))) {
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0);
            }
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__68__trace[0U];
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__68__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__68__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__68__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))));
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                    = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                    = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__68__trace[0U] 
                = SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__line_trace__58__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__68__trace);
        } else {
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__69__str, VSingleCoreSys_noparam__ConstPool__CONST_h97a3ee4e_0);
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__69__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__line_trace__58__trace_str);
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__69__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__69__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))))) {
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0);
            }
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__69__trace[0U];
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__69__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__69__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__69__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))));
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                    = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                    = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__69__trace[0U] 
                = SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__line_trace__58__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__69__trace);
        }
    } else if ((2U & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))) {
        if ((1U & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))) {
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__70__str, VSingleCoreSys_noparam__ConstPool__CONST_hd61c3baa_0);
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__70__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__line_trace__58__trace_str);
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__70__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__70__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))))) {
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0);
            }
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__70__trace[0U];
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__70__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__70__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__70__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))));
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                    = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                    = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__70__trace[0U] 
                = SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__line_trace__58__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__70__trace);
        } else {
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__71__str, VSingleCoreSys_noparam__ConstPool__CONST_hf42f8d5f_0);
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__71__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__line_trace__58__trace_str);
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__71__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__71__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))))) {
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0);
            }
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__71__trace[0U];
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__71__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__71__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__71__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))));
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                    = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                    = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__71__trace[0U] 
                = SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__line_trace__58__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__71__trace);
        }
    } else if ((1U & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__ctrl__DOT__state))) {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__72__str, VSingleCoreSys_noparam__ConstPool__CONST_h17de8ffe_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__72__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__line_trace__58__trace_str);
        SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__72__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__72__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))))) {
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0);
        }
        SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__72__trace[0U];
        SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
            = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__72__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__72__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__72__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))));
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__72__trace[0U] 
            = SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__line_trace__58__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__72__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__73__str, VSingleCoreSys_noparam__ConstPool__CONST_hdbedbe02_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__73__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__line_trace__58__trace_str);
        SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__73__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__73__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))))) {
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0);
        }
        SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__73__trace[0U];
        SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
            = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__73__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__73__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__73__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))));
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__73__trace[0U] 
            = SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__line_trace__58__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__73__trace);
    }
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__74__str, VSingleCoreSys_noparam__ConstPool__CONST_h89919522_0);
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__74__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__line_trace__58__trace_str);
    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__74__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__74__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0))))))) {
        SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0);
    }
    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
        = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__74__trace[0U];
    SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
        = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__74__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__74__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__74__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1))))));
        SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
            = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
            = (SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__74__trace[0U] 
        = SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__line_trace__58__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__vc_trace__DOT__append_str__74__trace);
    VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__line_trace__58__trace_str);
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__line_trace__75__trace_str, trace_str);
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__76__str, VSingleCoreSys_noparam__ConstPool__CONST_h7ed547c1_0);
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__76__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__line_trace__75__trace_str);
    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__76__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__76__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
        SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0);
    }
    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
        = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__76__trace[0U];
    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
        = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__76__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__76__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__76__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))));
        SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
            = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
            = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__76__trace[0U] 
        = SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__line_trace__75__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__76__trace);
    if ((0x10U & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))) {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__77__str, VSingleCoreSys_noparam__ConstPool__CONST_h296ef16f_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__77__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__line_trace__75__trace_str);
        SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__77__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__77__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0);
        }
        SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__77__trace[0U];
        SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
            = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__77__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__77__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__77__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))));
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__77__trace[0U] 
            = SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__line_trace__75__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__77__trace);
    } else if ((8U & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))) {
        if ((4U & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))) {
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__78__str, VSingleCoreSys_noparam__ConstPool__CONST_h296ef16f_0);
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__78__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__line_trace__75__trace_str);
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__78__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__78__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0);
            }
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__78__trace[0U];
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__78__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__78__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__78__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))));
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                    = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                    = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__78__trace[0U] 
                = SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__line_trace__75__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__78__trace);
        } else if ((2U & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))) {
            if ((1U & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))) {
                VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__79__str, VSingleCoreSys_noparam__ConstPool__CONST_h56610484_0);
                VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__79__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__line_trace__75__trace_str);
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__79__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__79__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
                    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0);
                }
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                    = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__79__trace[0U];
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                    = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__79__trace, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__79__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__79__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))));
                    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                        = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                        = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__79__trace[0U] 
                    = SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0;
                VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__line_trace__75__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__79__trace);
            } else {
                VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__80__str, VSingleCoreSys_noparam__ConstPool__CONST_h0566f112_0);
                VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__80__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__line_trace__75__trace_str);
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__80__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__80__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
                    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0);
                }
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                    = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__80__trace[0U];
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                    = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__80__trace, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__80__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__80__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))));
                    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                        = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                        = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__80__trace[0U] 
                    = SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0;
                VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__line_trace__75__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__80__trace);
            }
        } else if ((1U & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))) {
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__81__str, VSingleCoreSys_noparam__ConstPool__CONST_h777355b7_0);
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__81__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__line_trace__75__trace_str);
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__81__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__81__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0);
            }
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__81__trace[0U];
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__81__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__81__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__81__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))));
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                    = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                    = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__81__trace[0U] 
                = SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__line_trace__75__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__81__trace);
        } else {
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__82__str, VSingleCoreSys_noparam__ConstPool__CONST_hed8640c4_0);
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__82__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__line_trace__75__trace_str);
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__82__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__82__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0);
            }
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__82__trace[0U];
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__82__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__82__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__82__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))));
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                    = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                    = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__82__trace[0U] 
                = SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__line_trace__75__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__82__trace);
        }
    } else if ((4U & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))) {
        if ((2U & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))) {
            if ((1U & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))) {
                VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__83__str, VSingleCoreSys_noparam__ConstPool__CONST_hb98e3b6b_0);
                VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__83__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__line_trace__75__trace_str);
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__83__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__83__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
                    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0);
                }
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                    = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__83__trace[0U];
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                    = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__83__trace, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__83__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__83__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))));
                    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                        = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                        = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__83__trace[0U] 
                    = SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0;
                VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__line_trace__75__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__83__trace);
            } else {
                VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__84__str, VSingleCoreSys_noparam__ConstPool__CONST_ha1593b7e_0);
                VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__84__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__line_trace__75__trace_str);
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__84__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__84__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
                    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0);
                }
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                    = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__84__trace[0U];
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                    = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__84__trace, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__84__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__84__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))));
                    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                        = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                        = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__84__trace[0U] 
                    = SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0;
                VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__line_trace__75__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__84__trace);
            }
        } else if ((1U & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))) {
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__85__str, VSingleCoreSys_noparam__ConstPool__CONST_he2533c7c_0);
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__85__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__line_trace__75__trace_str);
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__85__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__85__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0);
            }
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__85__trace[0U];
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__85__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__85__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__85__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))));
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                    = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                    = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__85__trace[0U] 
                = SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__line_trace__75__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__85__trace);
        } else {
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__86__str, VSingleCoreSys_noparam__ConstPool__CONST_h97a3ee4e_0);
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__86__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__line_trace__75__trace_str);
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__86__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__86__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0);
            }
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__86__trace[0U];
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__86__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__86__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__86__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))));
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                    = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                    = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__86__trace[0U] 
                = SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__line_trace__75__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__86__trace);
        }
    } else if ((2U & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))) {
        if ((1U & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))) {
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__87__str, VSingleCoreSys_noparam__ConstPool__CONST_hd61c3baa_0);
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__87__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__line_trace__75__trace_str);
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__87__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__87__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0);
            }
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__87__trace[0U];
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__87__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__87__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__87__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))));
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                    = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                    = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__87__trace[0U] 
                = SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__line_trace__75__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__87__trace);
        } else {
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__88__str, VSingleCoreSys_noparam__ConstPool__CONST_hf42f8d5f_0);
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__88__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__line_trace__75__trace_str);
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__88__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__88__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0);
            }
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__88__trace[0U];
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__88__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__88__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__88__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))));
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                    = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                    = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__88__trace[0U] 
                = SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__line_trace__75__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__88__trace);
        }
    } else if ((1U & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__ctrl__DOT__state))) {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__89__str, VSingleCoreSys_noparam__ConstPool__CONST_h17de8ffe_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__89__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__line_trace__75__trace_str);
        SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__89__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__89__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0);
        }
        SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__89__trace[0U];
        SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
            = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__89__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__89__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__89__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))));
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__89__trace[0U] 
            = SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__line_trace__75__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__89__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__90__str, VSingleCoreSys_noparam__ConstPool__CONST_hdbedbe02_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__90__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__line_trace__75__trace_str);
        SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__90__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__90__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0);
        }
        SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__90__trace[0U];
        SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
            = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__90__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__90__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__90__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))));
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__90__trace[0U] 
            = SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__line_trace__75__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__90__trace);
    }
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__91__str, VSingleCoreSys_noparam__ConstPool__CONST_h89919522_0);
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__91__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__line_trace__75__trace_str);
    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__91__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__91__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0))))))) {
        SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0);
    }
    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
        = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__91__trace[0U];
    SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
        = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__91__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__91__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__91__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1))))));
        SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
            = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
            = (SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__91__trace[0U] 
        = SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__line_trace__75__trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__vc_trace__DOT__append_str__91__trace);
    VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__line_trace__75__trace_str);
}

void VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace_TOP(VSingleCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__92__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__92__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__92__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__92__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__93__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__93__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__93__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__93__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__93__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__93__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__94__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__94__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__94__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__94__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__95__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__95__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__95__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__95__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__95__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__95__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__96__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__96__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__96__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__96__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__97__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__97__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__97__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__97__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__97__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__97__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__98__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__98__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__98__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__98__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__99__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__99__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__99__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__99__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__100__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__100__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__100__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__100__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__100__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__100__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__101__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__101__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__101__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__101__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__102__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__102__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__102__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__102__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__102__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__102__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__103__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__103__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__103__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__103__str);
    VlWide<7>/*199:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__Vfuncout;
    VL_ZERO_W(200, __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__Vfuncout);
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst = 0;
    SData/*11:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__105__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__105__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__105__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__105__inst = 0;
    SData/*11:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__106__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__106__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__106__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__106__inst = 0;
    SData/*11:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__107__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__107__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__107__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__107__inst = 0;
    SData/*11:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__108__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__108__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__108__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__108__inst = 0;
    SData/*11:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__109__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__109__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__109__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__109__inst = 0;
    SData/*11:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__110__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__110__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__110__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__110__inst = 0;
    CData/*4:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__111__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__111__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__111__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__111__inst = 0;
    CData/*4:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__112__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__112__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__112__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__112__inst = 0;
    CData/*4:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__113__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__113__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__113__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__113__inst = 0;
    CData/*4:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__114__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__114__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__114__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__114__inst = 0;
    CData/*4:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__115__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__115__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__115__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__115__inst = 0;
    CData/*4:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__116__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__116__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__116__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__116__inst = 0;
    IData/*19:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_u_sh12__117__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_u_sh12__117__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_u_sh12__117__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_u_sh12__117__inst = 0;
    IData/*19:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_u_sh12__118__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_u_sh12__118__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_u_sh12__118__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_u_sh12__118__inst = 0;
    SData/*11:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__119__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__119__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__119__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__119__inst = 0;
    SData/*11:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_s__120__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_s__120__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_s__120__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_s__120__inst = 0;
    IData/*20:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_j__121__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_j__121__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_j__121__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_j__121__inst = 0;
    SData/*11:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__122__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__122__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__122__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__122__inst = 0;
    SData/*12:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__123__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__123__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__123__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__123__inst = 0;
    SData/*12:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__124__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__124__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__124__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__124__inst = 0;
    SData/*12:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__125__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__125__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__125__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__125__inst = 0;
    SData/*12:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__126__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__126__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__126__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__126__inst = 0;
    SData/*12:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__127__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__127__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__127__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__127__inst = 0;
    SData/*12:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__128__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__128__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__128__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__128__inst = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__129__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__129__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__129__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__129__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__129__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__129__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__130__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__130__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__130__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__130__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__131__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__131__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__131__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__131__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__132__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__132__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__132__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__132__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__132__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__132__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__133__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__133__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__133__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__133__str);
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__135__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__135__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__135__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__135__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__135__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__135__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__136__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__136__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__136__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__136__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__137__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__137__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__137__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__137__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__138__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__138__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__138__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__138__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__138__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__138__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__139__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__139__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__139__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__139__str);
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__141__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__141__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__141__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__141__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__141__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__141__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__142__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__142__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__142__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__142__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__143__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__143__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__143__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__143__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__144__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__144__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__144__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__144__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__144__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__144__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__145__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__145__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__145__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__145__str);
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__Vfuncout;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst;
    __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__147__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__147__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__147__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__147__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__147__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__147__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__val_F) {
        if (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__squash_F) {
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__92__str, VSingleCoreSys_noparam__ConstPool__CONST_h408c6ce7_0);
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__92__trace, trace_str);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__92__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__92__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))))) {
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0);
            }
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__92__trace[0U];
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__92__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__92__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__92__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__92__trace[0U] 
                = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__92__trace);
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__93__num = 7U;
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__93__char = 0x20U;
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__93__trace, trace_str);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__93__trace[0U];
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__93__num)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__93__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__93__char);
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1);
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__93__trace[0U] 
                = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__93__trace);
        } else if (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__stall_F) {
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__94__str, VSingleCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__94__trace, trace_str);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__94__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__94__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))))) {
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0);
            }
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__94__trace[0U];
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__94__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__94__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__94__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__94__trace[0U] 
                = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__94__trace);
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__95__num = 7U;
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__95__char = 0x20U;
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__95__trace, trace_str);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__95__trace[0U];
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__95__num)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__95__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__95__char);
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1);
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__95__trace[0U] 
                = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__95__trace);
        } else {
            VL_SFORMAT_NX(4096,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__str
                          ,"%x",0,32,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__pc_F);
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__96__str, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__str);
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__96__trace, trace_str);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__96__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__96__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))))) {
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0);
            }
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__96__trace[0U];
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__96__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__96__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__96__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__96__trace[0U] 
                = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__96__trace);
        }
    } else {
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__97__num = 8U;
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__97__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__97__trace, trace_str);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__97__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__97__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__97__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__97__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__97__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__97__trace);
    }
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__98__str, VSingleCoreSys_noparam__ConstPool__CONST_h803d56e6_0);
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__98__trace, trace_str);
    vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__98__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__98__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))))) {
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0);
    }
    vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
        = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__98__trace[0U];
    vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
        = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__98__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__98__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__98__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))));
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__98__trace[0U] 
        = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__98__trace);
    if (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__val_D) {
        if (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__squash_D) {
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__99__str, VSingleCoreSys_noparam__ConstPool__CONST_h408c6ce7_0);
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__99__trace, trace_str);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__99__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__99__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))))) {
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0);
            }
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__99__trace[0U];
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__99__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__99__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__99__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__99__trace[0U] 
                = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__99__trace);
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__100__num = 0x16U;
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__100__char = 0x20U;
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__100__trace, trace_str);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__100__trace[0U];
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__100__num)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__100__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__100__char);
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1);
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__100__trace[0U] 
                = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__100__trace);
        } else if (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__stall_D) {
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__101__str, VSingleCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__101__trace, trace_str);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__101__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__101__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))))) {
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0);
            }
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__101__trace[0U];
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__101__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__101__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__101__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__101__trace[0U] 
                = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__101__trace);
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__102__num = 0x16U;
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__102__char = 0x20U;
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__102__trace, trace_str);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__102__trace[0U];
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__102__num)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__102__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__102__char);
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1);
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__102__trace[0U] 
                = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__102__trace);
        } else {
            VL_EXTEND_WW(4096,200, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__103__str, 
                         ([&]() {
                        __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst 
                            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__inst_D;
                        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1 
                            = (0x1fU & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst 
                                        >> 0xfU));
                        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs2 
                            = (0x1fU & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst 
                                        >> 0x14U));
                        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd 
                            = (0x1fU & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst 
                                        >> 7U));
                        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__csr 
                            = (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst 
                               >> 0x14U);
                        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__funct 
                            = (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst 
                               >> 0x19U);
                        if ((9U >= (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1))) {
                            VL_SFORMAT_NX(24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str
                                          ,"x0%0#",0,
                                          5,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1);
                        } else {
                            VL_SFORMAT_NX(24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str
                                          ,"x%2#",0,
                                          5,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1);
                        }
                        if ((9U >= (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs2))) {
                            VL_SFORMAT_NX(24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs2_str
                                          ,"x0%0#",0,
                                          5,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs2);
                        } else {
                            VL_SFORMAT_NX(24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs2_str
                                          ,"x%2#",0,
                                          5,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs2);
                        }
                        if ((9U >= (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd))) {
                            VL_SFORMAT_NX(24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str
                                          ,"x0%0#",0,
                                          5,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd);
                        } else {
                            VL_SFORMAT_NX(24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str
                                          ,"x%2#",0,
                                          5,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd);
                        }
                        if ((0x7c0U == (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__csr))) {
                            VL_SFORMAT_NX(72,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__csr_str
                                          ,"proc2mngr",0);
                        } else if ((0xfc0U == (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__csr))) {
                            VL_SFORMAT_NX(72,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__csr_str
                                          ,"mngr2proc",0);
                        } else if ((0xf14U == (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__csr))) {
                            VL_SFORMAT_NX(72,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__csr_str
                                          ,"coreid   ",0);
                        } else if ((0xfc1U == (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__csr))) {
                            VL_SFORMAT_NX(72,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__csr_str
                                          ,"numcores ",0);
                        } else if ((0x7c1U == (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__csr))) {
                            VL_SFORMAT_NX(72,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__csr_str
                                          ,"stats_en ",0);
                        } else {
                            VL_SFORMAT_NX(72,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__csr_str
                                          ,"    0x%x",0,
                                          12,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__csr);
                        }
                        VL_SFORMAT_NX(16,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__funct_str
                                      ,"%x",0,2,(3U 
                                                 & (IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__funct)));
                        if (((((((((0x2073U == (0x707fU 
                                                & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst)) 
                                   | (0x1073U == (0x707fU 
                                                  & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) 
                                  | (0x13U == __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst)) 
                                 | (0U == __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst)) 
                                | (0x33U == (0xfe00707fU 
                                             & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) 
                               | (0x40000033U == (0xfe00707fU 
                                                  & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) 
                              | (0x7033U == (0xfe00707fU 
                                             & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) 
                             | (0x6033U == (0xfe00707fU 
                                            & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst)))) {
                            if ((0x2073U == (0x707fU 
                                             & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__Vfuncout
                                              ,"csrr   %s, %s  ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                              72,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__csr_str.data());
                            } else if ((0x1073U == 
                                        (0x707fU & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__Vfuncout
                                              ,"csrw   %s, %s  ",0,
                                              72,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__csr_str.data(),
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str);
                            } else if ((0x13U == __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst)) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__Vfuncout
                                              ,"nop                    ",0);
                            } else if ((0U == __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst)) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__Vfuncout
                                              ,"                       ",0);
                            } else if ((0x33U == (0xfe00707fU 
                                                  & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__Vfuncout
                                              ,"add    %s, %s, %s   ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs2_str);
                            } else if ((0x40000033U 
                                        == (0xfe00707fU 
                                            & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__Vfuncout
                                              ,"sub    %s, %s, %s   ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs2_str);
                            } else if ((0x7033U == 
                                        (0xfe00707fU 
                                         & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__Vfuncout
                                              ,"and    %s, %s, %s   ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs2_str);
                            } else {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__Vfuncout
                                              ,"or     %s, %s, %s   ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs2_str);
                            }
                        } else if (((((((((0x4033U 
                                           == (0xfe00707fU 
                                               & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst)) 
                                          | (0x2033U 
                                             == (0xfe00707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) 
                                         | (0x3033U 
                                            == (0xfe00707fU 
                                                & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) 
                                        | (0x2000033U 
                                           == (0xfe00707fU 
                                               & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) 
                                       | (0x13U == 
                                          (0x707fU 
                                           & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) 
                                      | (0x7013U == 
                                         (0x707fU & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) 
                                     | (0x6013U == 
                                        (0x707fU & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) 
                                    | (0x4013U == (0x707fU 
                                                   & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst)))) {
                            if ((0x4033U == (0xfe00707fU 
                                             & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__Vfuncout
                                              ,"xor    %s, %s, %s   ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs2_str);
                            } else if ((0x2033U == 
                                        (0xfe00707fU 
                                         & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__Vfuncout
                                              ,"slt    %s, %s, %s   ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs2_str);
                            } else if ((0x3033U == 
                                        (0xfe00707fU 
                                         & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__Vfuncout
                                              ,"sltu   %s, %s, %s   ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs2_str);
                            } else if ((0x2000033U 
                                        == (0xfe00707fU 
                                            & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__Vfuncout
                                              ,"mul    %s, %s, %s   ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs2_str);
                            } else if ((0x13U == (0x707fU 
                                                  & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__Vfuncout
                                              ,"addi   %s, %s, 0x%x ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                              12,([&]() {
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__105__inst 
                                                    = __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst;
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__105__Vfuncout 
                                                    = 
                                                    (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__105__inst 
                                                     >> 0x14U);
                                            }(), (IData)(__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__105__Vfuncout)));
                            } else if ((0x7013U == 
                                        (0x707fU & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__Vfuncout
                                              ,"andi   %s, %s, 0x%x ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                              12,([&]() {
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__106__inst 
                                                    = __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst;
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__106__Vfuncout 
                                                    = 
                                                    (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__106__inst 
                                                     >> 0x14U);
                                            }(), (IData)(__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__106__Vfuncout)));
                            } else if ((0x6013U == 
                                        (0x707fU & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__Vfuncout
                                              ,"ori    %s, %s, 0x%x ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                              12,([&]() {
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__107__inst 
                                                    = __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst;
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__107__Vfuncout 
                                                    = 
                                                    (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__107__inst 
                                                     >> 0x14U);
                                            }(), (IData)(__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__107__Vfuncout)));
                            } else {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__Vfuncout
                                              ,"xori   %s, %s, 0x%x ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                              12,([&]() {
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__108__inst 
                                                    = __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst;
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__108__Vfuncout 
                                                    = 
                                                    (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__108__inst 
                                                     >> 0x14U);
                                            }(), (IData)(__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__108__Vfuncout)));
                            }
                        } else if (((((((((0x2013U 
                                           == (0x707fU 
                                               & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst)) 
                                          | (0x3013U 
                                             == (0x707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) 
                                         | (0x40005033U 
                                            == (0xfe00707fU 
                                                & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) 
                                        | (0x5033U 
                                           == (0xfe00707fU 
                                               & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) 
                                       | (0x1033U == 
                                          (0xfe00707fU 
                                           & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) 
                                      | (0x40005013U 
                                         == (0xfe00707fU 
                                             & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) 
                                     | (0x5013U == 
                                        (0xfe00707fU 
                                         & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) 
                                    | (0x1013U == (0xfe00707fU 
                                                   & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst)))) {
                            if ((0x2013U == (0x707fU 
                                             & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__Vfuncout
                                              ,"slti   %s, %s, 0x%x ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                              12,([&]() {
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__109__inst 
                                                    = __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst;
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__109__Vfuncout 
                                                    = 
                                                    (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__109__inst 
                                                     >> 0x14U);
                                            }(), (IData)(__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__109__Vfuncout)));
                            } else if ((0x3013U == 
                                        (0x707fU & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__Vfuncout
                                              ,"sltiu  %s, %s, 0x%x ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                              12,([&]() {
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__110__inst 
                                                    = __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst;
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__110__Vfuncout 
                                                    = 
                                                    (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__110__inst 
                                                     >> 0x14U);
                                            }(), (IData)(__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__110__Vfuncout)));
                            } else if ((0x40005033U 
                                        == (0xfe00707fU 
                                            & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__Vfuncout
                                              ,"sra    %s, %s, 0x%x  ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                              5,([&]() {
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__111__inst 
                                                    = __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst;
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__111__Vfuncout 
                                                    = 
                                                    (0x1fU 
                                                     & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__111__inst 
                                                        >> 0x14U));
                                            }(), (IData)(__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__111__Vfuncout)));
                            } else if ((0x5033U == 
                                        (0xfe00707fU 
                                         & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__Vfuncout
                                              ,"srl    %s, %s, 0x%x  ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                              5,([&]() {
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__112__inst 
                                                    = __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst;
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__112__Vfuncout 
                                                    = 
                                                    (0x1fU 
                                                     & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__112__inst 
                                                        >> 0x14U));
                                            }(), (IData)(__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__112__Vfuncout)));
                            } else if ((0x1033U == 
                                        (0xfe00707fU 
                                         & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__Vfuncout
                                              ,"sll    %s, %s, 0x%x  ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                              5,([&]() {
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__113__inst 
                                                    = __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst;
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__113__Vfuncout 
                                                    = 
                                                    (0x1fU 
                                                     & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__113__inst 
                                                        >> 0x14U));
                                            }(), (IData)(__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__113__Vfuncout)));
                            } else if ((0x40005013U 
                                        == (0xfe00707fU 
                                            & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__Vfuncout
                                              ,"srai   %s, %s, 0x%x  ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                              5,([&]() {
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__114__inst 
                                                    = __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst;
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__114__Vfuncout 
                                                    = 
                                                    (0x1fU 
                                                     & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__114__inst 
                                                        >> 0x14U));
                                            }(), (IData)(__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__114__Vfuncout)));
                            } else if ((0x5013U == 
                                        (0xfe00707fU 
                                         & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__Vfuncout
                                              ,"srli   %s, %s, 0x%x  ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                              5,([&]() {
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__115__inst 
                                                    = __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst;
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__115__Vfuncout 
                                                    = 
                                                    (0x1fU 
                                                     & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__115__inst 
                                                        >> 0x14U));
                                            }(), (IData)(__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__115__Vfuncout)));
                            } else {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__Vfuncout
                                              ,"slli   %s, %s, 0x%x  ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                              5,([&]() {
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__116__inst 
                                                    = __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst;
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__116__Vfuncout 
                                                    = 
                                                    (0x1fU 
                                                     & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__116__inst 
                                                        >> 0x14U));
                                            }(), (IData)(__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_shamt__116__Vfuncout)));
                            }
                        } else if (((((((((0x37U == 
                                           (0x7fU & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst)) 
                                          | (0x17U 
                                             == (0x7fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) 
                                         | (0x2003U 
                                            == (0x707fU 
                                                & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) 
                                        | (0x2023U 
                                           == (0x707fU 
                                               & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) 
                                       | (0x6fU == 
                                          (0x7fU & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) 
                                      | (0x67U == (0x707fU 
                                                   & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) 
                                     | (0x63U == (0x707fU 
                                                  & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) 
                                    | (0x1063U == (0x707fU 
                                                   & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst)))) {
                            if ((0x37U == (0x7fU & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__Vfuncout
                                              ,"lui    %s, 0x%x    ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                              20,([&]() {
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_u_sh12__117__inst 
                                                    = __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst;
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_u_sh12__117__Vfuncout 
                                                    = 
                                                    (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_u_sh12__117__inst 
                                                     >> 0xcU);
                                            }(), __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_u_sh12__117__Vfuncout));
                            } else if ((0x17U == (0x7fU 
                                                  & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__Vfuncout
                                              ,"auipc  %s, 0x%x    ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                              20,([&]() {
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_u_sh12__118__inst 
                                                    = __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst;
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_u_sh12__118__Vfuncout 
                                                    = 
                                                    (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_u_sh12__118__inst 
                                                     >> 0xcU);
                                            }(), __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_u_sh12__118__Vfuncout));
                            } else if ((0x2003U == 
                                        (0x707fU & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__Vfuncout
                                              ,"lw     %s, 0x%x(%s) ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                              12,([&]() {
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__119__inst 
                                                    = __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst;
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__119__Vfuncout 
                                                    = 
                                                    (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__119__inst 
                                                     >> 0x14U);
                                            }(), (IData)(__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__119__Vfuncout)),
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str);
                            } else if ((0x2023U == 
                                        (0x707fU & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__Vfuncout
                                              ,"sw     %s, 0x%x(%s) ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs2_str,
                                              12,([&]() {
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_s__120__inst 
                                                    = __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst;
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_s__120__Vfuncout 
                                                    = 
                                                    ((0xfe0U 
                                                      & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_s__120__inst 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_s__120__inst 
                                                           >> 7U)));
                                            }(), (IData)(__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_s__120__Vfuncout)),
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str);
                            } else if ((0x6fU == (0x7fU 
                                                  & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__Vfuncout
                                              ,"jal    %s, 0x%x   ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                              21,([&]() {
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_j__121__inst 
                                                    = __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst;
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_j__121__Vfuncout 
                                                    = 
                                                    ((0x100000U 
                                                      & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_j__121__inst 
                                                         >> 0xbU)) 
                                                     | ((0xff000U 
                                                         & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_j__121__inst) 
                                                        | ((0x800U 
                                                            & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_j__121__inst 
                                                               >> 9U)) 
                                                           | ((0x7e0U 
                                                               & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_j__121__inst 
                                                                  >> 0x14U)) 
                                                              | (0x1eU 
                                                                 & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_j__121__inst 
                                                                    >> 0x14U))))));
                                            }(), __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_j__121__Vfuncout));
                            } else if ((0x67U == (0x707fU 
                                                  & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__Vfuncout
                                              ,"jalr   %s, %s, 0x%x ",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                              12,([&]() {
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__122__inst 
                                                    = __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst;
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__122__Vfuncout 
                                                    = 
                                                    (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__122__inst 
                                                     >> 0x14U);
                                            }(), (IData)(__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_i__122__Vfuncout)));
                            } else if ((0x63U == (0x707fU 
                                                  & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__Vfuncout
                                              ,"beq    %s, %s, 0x%x",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs2_str,
                                              13,([&]() {
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__123__inst 
                                                    = __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst;
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__123__Vfuncout 
                                                    = 
                                                    ((0x1000U 
                                                      & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__123__inst 
                                                         >> 0x13U)) 
                                                     | ((0x800U 
                                                         & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__123__inst 
                                                            << 4U)) 
                                                        | ((0x7e0U 
                                                            & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__123__inst 
                                                               >> 0x14U)) 
                                                           | (0x1eU 
                                                              & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__123__inst 
                                                                 >> 7U)))));
                                            }(), (IData)(__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__123__Vfuncout)));
                            } else {
                                VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__Vfuncout
                                              ,"bne    %s, %s, 0x%x",0,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                              24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs2_str,
                                              13,([&]() {
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__124__inst 
                                                    = __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst;
                                                __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__124__Vfuncout 
                                                    = 
                                                    ((0x1000U 
                                                      & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__124__inst 
                                                         >> 0x13U)) 
                                                     | ((0x800U 
                                                         & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__124__inst 
                                                            << 4U)) 
                                                        | ((0x7e0U 
                                                            & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__124__inst 
                                                               >> 0x14U)) 
                                                           | (0x1eU 
                                                              & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__124__inst 
                                                                 >> 7U)))));
                                            }(), (IData)(__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__124__Vfuncout)));
                            }
                        } else if ((0x4063U == (0x707fU 
                                                & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) {
                            VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__Vfuncout
                                          ,"blt    %s, %s, 0x%x",0,
                                          24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                          24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs2_str,
                                          13,([&]() {
                                            __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__125__inst 
                                                = __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst;
                                            __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__125__Vfuncout 
                                                = (
                                                   (0x1000U 
                                                    & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__125__inst 
                                                       >> 0x13U)) 
                                                   | ((0x800U 
                                                       & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__125__inst 
                                                          << 4U)) 
                                                      | ((0x7e0U 
                                                          & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__125__inst 
                                                             >> 0x14U)) 
                                                         | (0x1eU 
                                                            & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__125__inst 
                                                               >> 7U)))));
                                        }(), (IData)(__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__125__Vfuncout)));
                        } else if ((0x5063U == (0x707fU 
                                                & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) {
                            VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__Vfuncout
                                          ,"bge    %s, %s, 0x%x",0,
                                          24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                          24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs2_str,
                                          13,([&]() {
                                            __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__126__inst 
                                                = __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst;
                                            __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__126__Vfuncout 
                                                = (
                                                   (0x1000U 
                                                    & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__126__inst 
                                                       >> 0x13U)) 
                                                   | ((0x800U 
                                                       & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__126__inst 
                                                          << 4U)) 
                                                      | ((0x7e0U 
                                                          & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__126__inst 
                                                             >> 0x14U)) 
                                                         | (0x1eU 
                                                            & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__126__inst 
                                                               >> 7U)))));
                                        }(), (IData)(__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__126__Vfuncout)));
                        } else if ((0x6063U == (0x707fU 
                                                & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) {
                            VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__Vfuncout
                                          ,"bltu   %s, %s, 0x%x",0,
                                          24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                          24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs2_str,
                                          13,([&]() {
                                            __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__127__inst 
                                                = __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst;
                                            __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__127__Vfuncout 
                                                = (
                                                   (0x1000U 
                                                    & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__127__inst 
                                                       >> 0x13U)) 
                                                   | ((0x800U 
                                                       & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__127__inst 
                                                          << 4U)) 
                                                      | ((0x7e0U 
                                                          & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__127__inst 
                                                             >> 0x14U)) 
                                                         | (0x1eU 
                                                            & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__127__inst 
                                                               >> 7U)))));
                                        }(), (IData)(__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__127__Vfuncout)));
                        } else if ((0x7063U == (0x707fU 
                                                & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) {
                            VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__Vfuncout
                                          ,"bgeu   %s, %s, 0x%x",0,
                                          24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                          24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs2_str,
                                          13,([&]() {
                                            __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__128__inst 
                                                = __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst;
                                            __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__128__Vfuncout 
                                                = (
                                                   (0x1000U 
                                                    & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__128__inst 
                                                       >> 0x13U)) 
                                                   | ((0x800U 
                                                       & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__128__inst 
                                                          << 4U)) 
                                                      | ((0x7e0U 
                                                          & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__128__inst 
                                                             >> 0x14U)) 
                                                         | (0x1eU 
                                                            & (__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__128__inst 
                                                               >> 7U)))));
                                        }(), (IData)(__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__imm_b__128__Vfuncout)));
                        } else if ((0xbU == (0x7fU 
                                             & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__inst))) {
                            VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__Vfuncout
                                          ,"cust0 %s, %s, %s, %s",0,
                                          24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rd_str,
                                          24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs1_str,
                                          24,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__rs2_str,
                                          16,(IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__funct_str));
                        } else {
                            VL_SFORMAT_NX(200,__Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__Vfuncout
                                          ,"illegal inst           ",0);
                        }
                    }(), __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm__104__Vfuncout));
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__103__trace, trace_str);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__103__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__103__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))))) {
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0);
            }
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__103__trace[0U];
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__103__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__103__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__103__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__103__trace[0U] 
                = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__103__trace);
        }
    } else {
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__129__num = 0x17U;
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__129__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__129__trace, trace_str);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__129__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__129__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__129__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__129__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__129__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__129__trace);
    }
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__130__str, VSingleCoreSys_noparam__ConstPool__CONST_h803d56e6_0);
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__130__trace, trace_str);
    vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__130__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__130__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))))) {
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0);
    }
    vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
        = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__130__trace[0U];
    vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
        = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__130__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__130__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__130__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))));
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__130__trace[0U] 
        = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__130__trace);
    if (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__val_X) {
        if (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__stall_X) {
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__131__str, VSingleCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__131__trace, trace_str);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__131__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__131__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))))) {
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0);
            }
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__131__trace[0U];
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__131__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__131__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__131__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__131__trace[0U] 
                = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__131__trace);
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__132__num = 3U;
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__132__char = 0x20U;
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__132__trace, trace_str);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__132__trace[0U];
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__132__num)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__132__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__132__char);
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1);
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__132__trace[0U] 
                = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__132__trace);
        } else {
            VL_EXTEND_WI(4096,32, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__133__str, 
                         ([&]() {
                        __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst 
                            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__inst_X;
                        __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__Vfuncout 
                            = (((((((((0x2073U == (0x707fU 
                                                   & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst)) 
                                      | (0x1073U == 
                                         (0x707fU & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))) 
                                     | (0x13U == __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst)) 
                                    | (0x33U == (0xfe00707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))) 
                                   | (0x40000033U == 
                                      (0xfe00707fU 
                                       & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))) 
                                  | (0x7033U == (0xfe00707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))) 
                                 | (0x6033U == (0xfe00707fU 
                                                & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))) 
                                | (0x4033U == (0xfe00707fU 
                                               & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst)))
                                ? ((0x2073U == (0x707fU 
                                                & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))
                                    ? 0x63737272U : 
                                   ((0x1073U == (0x707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))
                                     ? 0x63737277U : 
                                    ((0x13U == __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst)
                                      ? 0x6e6f7020U
                                      : ((0x33U == 
                                          (0xfe00707fU 
                                           & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))
                                          ? 0x61646420U
                                          : ((0x40000033U 
                                              == (0xfe00707fU 
                                                  & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))
                                              ? 0x73756220U
                                              : ((0x7033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))
                                                  ? 0x616e6420U
                                                  : 
                                                 ((0x6033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))
                                                   ? 0x6f722020U
                                                   : 0x786f7220U)))))))
                                : (((((((((0x2033U 
                                           == (0xfe00707fU 
                                               & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst)) 
                                          | (0x3033U 
                                             == (0xfe00707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))) 
                                         | (0x2000033U 
                                            == (0xfe00707fU 
                                                & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))) 
                                        | (0x13U == 
                                           (0x707fU 
                                            & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))) 
                                       | (0x7013U == 
                                          (0x707fU 
                                           & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))) 
                                      | (0x6013U == 
                                         (0x707fU & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))) 
                                     | (0x4013U == 
                                        (0x707fU & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))) 
                                    | (0x2013U == (0x707fU 
                                                   & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst)))
                                    ? ((0x2033U == 
                                        (0xfe00707fU 
                                         & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))
                                        ? 0x736c7420U
                                        : ((0x3033U 
                                            == (0xfe00707fU 
                                                & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))
                                            ? 0x736c7475U
                                            : ((0x2000033U 
                                                == 
                                                (0xfe00707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))
                                                ? 0x6d756c20U
                                                : (
                                                   (0x13U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))
                                                    ? 0x61646469U
                                                    : 
                                                   ((0x7013U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))
                                                     ? 0x616e6469U
                                                     : 
                                                    ((0x6013U 
                                                      == 
                                                      (0x707fU 
                                                       & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))
                                                      ? 0x6f726920U
                                                      : 
                                                     ((0x4013U 
                                                       == 
                                                       (0x707fU 
                                                        & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))
                                                       ? 0x786f7269U
                                                       : 0x736c7469U)))))))
                                    : (((((((((0x3013U 
                                               == (0x707fU 
                                                   & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst)) 
                                              | (0x40005033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))) 
                                             | (0x5033U 
                                                == 
                                                (0xfe00707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))) 
                                            | (0x1033U 
                                               == (0xfe00707fU 
                                                   & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))) 
                                           | (0x40005013U 
                                              == (0xfe00707fU 
                                                  & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))) 
                                          | (0x5013U 
                                             == (0xfe00707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))) 
                                         | (0x1013U 
                                            == (0xfe00707fU 
                                                & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))) 
                                        | (0x37U == 
                                           (0x7fU & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst)))
                                        ? ((0x3013U 
                                            == (0x707fU 
                                                & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))
                                            ? 0x736c7449U
                                            : ((0x40005033U 
                                                == 
                                                (0xfe00707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))
                                                ? 0x73726120U
                                                : (
                                                   (0x5033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))
                                                    ? 0x73726c20U
                                                    : 
                                                   ((0x1033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))
                                                     ? 0x736c6c20U
                                                     : 
                                                    ((0x40005013U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))
                                                      ? 0x73726169U
                                                      : 
                                                     ((0x5013U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))
                                                       ? 0x73726c69U
                                                       : 
                                                      ((0x1013U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))
                                                        ? 0x736c6c69U
                                                        : 0x6c756920U)))))))
                                        : (((((((((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst)) 
                                                  | (0x2003U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))) 
                                                 | (0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))) 
                                                | (0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))) 
                                               | (0x67U 
                                                  == 
                                                  (0x707fU 
                                                   & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))) 
                                              | (0x63U 
                                                 == 
                                                 (0x707fU 
                                                  & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))) 
                                             | (0x1063U 
                                                == 
                                                (0x707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))) 
                                            | (0x4063U 
                                               == (0x707fU 
                                                   & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst)))
                                            ? ((0x17U 
                                                == 
                                                (0x7fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))
                                                ? 0x61756950U
                                                : (
                                                   (0x2003U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))
                                                    ? 0x6c772020U
                                                    : 
                                                   ((0x2023U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))
                                                     ? 0x73772020U
                                                     : 
                                                    ((0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))
                                                      ? 0x6a616c20U
                                                      : 
                                                     ((0x67U 
                                                       == 
                                                       (0x707fU 
                                                        & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))
                                                       ? 0x6a616c72U
                                                       : 
                                                      ((0x63U 
                                                        == 
                                                        (0x707fU 
                                                         & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))
                                                        ? 0x62657120U
                                                        : 
                                                       ((0x1063U 
                                                         == 
                                                         (0x707fU 
                                                          & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))
                                                         ? 0x626e6520U
                                                         : 0x626c7420U)))))))
                                            : ((0x5063U 
                                                == 
                                                (0x707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))
                                                ? 0x62676520U
                                                : (
                                                   (0x6063U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))
                                                    ? 0x626c7475U
                                                    : 
                                                   ((0x7063U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))
                                                     ? 0x62676575U
                                                     : 
                                                    ((0xbU 
                                                      == 
                                                      (0x7fU 
                                                       & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__inst))
                                                      ? 0x63757330U
                                                      : 0x3f3f3f3fU))))))));
                    }(), __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__134__Vfuncout));
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__133__trace, trace_str);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__133__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__133__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))))) {
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0);
            }
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__133__trace[0U];
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__133__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__133__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__133__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__133__trace[0U] 
                = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__133__trace);
        }
    } else {
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__135__num = 4U;
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__135__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__135__trace, trace_str);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__135__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__135__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__135__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__135__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__135__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__135__trace);
    }
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__136__str, VSingleCoreSys_noparam__ConstPool__CONST_h803d56e6_0);
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__136__trace, trace_str);
    vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__136__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__136__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))))) {
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0);
    }
    vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
        = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__136__trace[0U];
    vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
        = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__136__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__136__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__136__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))));
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__136__trace[0U] 
        = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__136__trace);
    if (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__val_M) {
        if (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__stall_M) {
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__137__str, VSingleCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__137__trace, trace_str);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__137__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__137__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))))) {
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0);
            }
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__137__trace[0U];
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__137__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__137__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__137__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__137__trace[0U] 
                = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__137__trace);
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__138__num = 3U;
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__138__char = 0x20U;
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__138__trace, trace_str);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__138__trace[0U];
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__138__num)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__138__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__138__char);
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1);
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__138__trace[0U] 
                = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__138__trace);
        } else {
            VL_EXTEND_WI(4096,32, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__139__str, 
                         ([&]() {
                        __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst 
                            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__inst_M;
                        __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__Vfuncout 
                            = (((((((((0x2073U == (0x707fU 
                                                   & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst)) 
                                      | (0x1073U == 
                                         (0x707fU & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))) 
                                     | (0x13U == __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst)) 
                                    | (0x33U == (0xfe00707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))) 
                                   | (0x40000033U == 
                                      (0xfe00707fU 
                                       & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))) 
                                  | (0x7033U == (0xfe00707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))) 
                                 | (0x6033U == (0xfe00707fU 
                                                & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))) 
                                | (0x4033U == (0xfe00707fU 
                                               & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst)))
                                ? ((0x2073U == (0x707fU 
                                                & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))
                                    ? 0x63737272U : 
                                   ((0x1073U == (0x707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))
                                     ? 0x63737277U : 
                                    ((0x13U == __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst)
                                      ? 0x6e6f7020U
                                      : ((0x33U == 
                                          (0xfe00707fU 
                                           & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))
                                          ? 0x61646420U
                                          : ((0x40000033U 
                                              == (0xfe00707fU 
                                                  & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))
                                              ? 0x73756220U
                                              : ((0x7033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))
                                                  ? 0x616e6420U
                                                  : 
                                                 ((0x6033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))
                                                   ? 0x6f722020U
                                                   : 0x786f7220U)))))))
                                : (((((((((0x2033U 
                                           == (0xfe00707fU 
                                               & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst)) 
                                          | (0x3033U 
                                             == (0xfe00707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))) 
                                         | (0x2000033U 
                                            == (0xfe00707fU 
                                                & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))) 
                                        | (0x13U == 
                                           (0x707fU 
                                            & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))) 
                                       | (0x7013U == 
                                          (0x707fU 
                                           & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))) 
                                      | (0x6013U == 
                                         (0x707fU & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))) 
                                     | (0x4013U == 
                                        (0x707fU & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))) 
                                    | (0x2013U == (0x707fU 
                                                   & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst)))
                                    ? ((0x2033U == 
                                        (0xfe00707fU 
                                         & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))
                                        ? 0x736c7420U
                                        : ((0x3033U 
                                            == (0xfe00707fU 
                                                & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))
                                            ? 0x736c7475U
                                            : ((0x2000033U 
                                                == 
                                                (0xfe00707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))
                                                ? 0x6d756c20U
                                                : (
                                                   (0x13U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))
                                                    ? 0x61646469U
                                                    : 
                                                   ((0x7013U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))
                                                     ? 0x616e6469U
                                                     : 
                                                    ((0x6013U 
                                                      == 
                                                      (0x707fU 
                                                       & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))
                                                      ? 0x6f726920U
                                                      : 
                                                     ((0x4013U 
                                                       == 
                                                       (0x707fU 
                                                        & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))
                                                       ? 0x786f7269U
                                                       : 0x736c7469U)))))))
                                    : (((((((((0x3013U 
                                               == (0x707fU 
                                                   & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst)) 
                                              | (0x40005033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))) 
                                             | (0x5033U 
                                                == 
                                                (0xfe00707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))) 
                                            | (0x1033U 
                                               == (0xfe00707fU 
                                                   & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))) 
                                           | (0x40005013U 
                                              == (0xfe00707fU 
                                                  & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))) 
                                          | (0x5013U 
                                             == (0xfe00707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))) 
                                         | (0x1013U 
                                            == (0xfe00707fU 
                                                & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))) 
                                        | (0x37U == 
                                           (0x7fU & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst)))
                                        ? ((0x3013U 
                                            == (0x707fU 
                                                & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))
                                            ? 0x736c7449U
                                            : ((0x40005033U 
                                                == 
                                                (0xfe00707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))
                                                ? 0x73726120U
                                                : (
                                                   (0x5033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))
                                                    ? 0x73726c20U
                                                    : 
                                                   ((0x1033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))
                                                     ? 0x736c6c20U
                                                     : 
                                                    ((0x40005013U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))
                                                      ? 0x73726169U
                                                      : 
                                                     ((0x5013U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))
                                                       ? 0x73726c69U
                                                       : 
                                                      ((0x1013U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))
                                                        ? 0x736c6c69U
                                                        : 0x6c756920U)))))))
                                        : (((((((((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst)) 
                                                  | (0x2003U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))) 
                                                 | (0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))) 
                                                | (0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))) 
                                               | (0x67U 
                                                  == 
                                                  (0x707fU 
                                                   & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))) 
                                              | (0x63U 
                                                 == 
                                                 (0x707fU 
                                                  & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))) 
                                             | (0x1063U 
                                                == 
                                                (0x707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))) 
                                            | (0x4063U 
                                               == (0x707fU 
                                                   & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst)))
                                            ? ((0x17U 
                                                == 
                                                (0x7fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))
                                                ? 0x61756950U
                                                : (
                                                   (0x2003U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))
                                                    ? 0x6c772020U
                                                    : 
                                                   ((0x2023U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))
                                                     ? 0x73772020U
                                                     : 
                                                    ((0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))
                                                      ? 0x6a616c20U
                                                      : 
                                                     ((0x67U 
                                                       == 
                                                       (0x707fU 
                                                        & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))
                                                       ? 0x6a616c72U
                                                       : 
                                                      ((0x63U 
                                                        == 
                                                        (0x707fU 
                                                         & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))
                                                        ? 0x62657120U
                                                        : 
                                                       ((0x1063U 
                                                         == 
                                                         (0x707fU 
                                                          & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))
                                                         ? 0x626e6520U
                                                         : 0x626c7420U)))))))
                                            : ((0x5063U 
                                                == 
                                                (0x707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))
                                                ? 0x62676520U
                                                : (
                                                   (0x6063U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))
                                                    ? 0x626c7475U
                                                    : 
                                                   ((0x7063U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))
                                                     ? 0x62676575U
                                                     : 
                                                    ((0xbU 
                                                      == 
                                                      (0x7fU 
                                                       & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__inst))
                                                      ? 0x63757330U
                                                      : 0x3f3f3f3fU))))))));
                    }(), __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__140__Vfuncout));
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__139__trace, trace_str);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__139__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__139__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))))) {
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0);
            }
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__139__trace[0U];
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__139__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__139__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__139__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__139__trace[0U] 
                = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__139__trace);
        }
    } else {
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__141__num = 4U;
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__141__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__141__trace, trace_str);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__141__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__141__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__141__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__141__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__141__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__141__trace);
    }
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__142__str, VSingleCoreSys_noparam__ConstPool__CONST_h803d56e6_0);
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__142__trace, trace_str);
    vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__142__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__142__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))))) {
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0);
    }
    vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
        = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__142__trace[0U];
    vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
        = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__142__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__142__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__142__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))));
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__142__trace[0U] 
        = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__142__trace);
    if (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__val_W) {
        if (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__stall_W) {
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__143__str, VSingleCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__143__trace, trace_str);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__143__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__143__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))))) {
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0);
            }
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__143__trace[0U];
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__143__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__143__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__143__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__143__trace[0U] 
                = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__143__trace);
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__144__num = 3U;
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__144__char = 0x20U;
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__144__trace, trace_str);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__144__trace[0U];
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__144__num)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__144__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__144__char);
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1);
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__144__trace[0U] 
                = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__144__trace);
        } else {
            VL_EXTEND_WI(4096,32, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__145__str, 
                         ([&]() {
                        __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst 
                            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__ctrl__DOT__inst_W;
                        __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__Vfuncout 
                            = (((((((((0x2073U == (0x707fU 
                                                   & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst)) 
                                      | (0x1073U == 
                                         (0x707fU & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))) 
                                     | (0x13U == __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst)) 
                                    | (0x33U == (0xfe00707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))) 
                                   | (0x40000033U == 
                                      (0xfe00707fU 
                                       & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))) 
                                  | (0x7033U == (0xfe00707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))) 
                                 | (0x6033U == (0xfe00707fU 
                                                & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))) 
                                | (0x4033U == (0xfe00707fU 
                                               & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst)))
                                ? ((0x2073U == (0x707fU 
                                                & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))
                                    ? 0x63737272U : 
                                   ((0x1073U == (0x707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))
                                     ? 0x63737277U : 
                                    ((0x13U == __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst)
                                      ? 0x6e6f7020U
                                      : ((0x33U == 
                                          (0xfe00707fU 
                                           & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))
                                          ? 0x61646420U
                                          : ((0x40000033U 
                                              == (0xfe00707fU 
                                                  & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))
                                              ? 0x73756220U
                                              : ((0x7033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))
                                                  ? 0x616e6420U
                                                  : 
                                                 ((0x6033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))
                                                   ? 0x6f722020U
                                                   : 0x786f7220U)))))))
                                : (((((((((0x2033U 
                                           == (0xfe00707fU 
                                               & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst)) 
                                          | (0x3033U 
                                             == (0xfe00707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))) 
                                         | (0x2000033U 
                                            == (0xfe00707fU 
                                                & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))) 
                                        | (0x13U == 
                                           (0x707fU 
                                            & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))) 
                                       | (0x7013U == 
                                          (0x707fU 
                                           & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))) 
                                      | (0x6013U == 
                                         (0x707fU & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))) 
                                     | (0x4013U == 
                                        (0x707fU & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))) 
                                    | (0x2013U == (0x707fU 
                                                   & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst)))
                                    ? ((0x2033U == 
                                        (0xfe00707fU 
                                         & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))
                                        ? 0x736c7420U
                                        : ((0x3033U 
                                            == (0xfe00707fU 
                                                & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))
                                            ? 0x736c7475U
                                            : ((0x2000033U 
                                                == 
                                                (0xfe00707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))
                                                ? 0x6d756c20U
                                                : (
                                                   (0x13U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))
                                                    ? 0x61646469U
                                                    : 
                                                   ((0x7013U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))
                                                     ? 0x616e6469U
                                                     : 
                                                    ((0x6013U 
                                                      == 
                                                      (0x707fU 
                                                       & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))
                                                      ? 0x6f726920U
                                                      : 
                                                     ((0x4013U 
                                                       == 
                                                       (0x707fU 
                                                        & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))
                                                       ? 0x786f7269U
                                                       : 0x736c7469U)))))))
                                    : (((((((((0x3013U 
                                               == (0x707fU 
                                                   & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst)) 
                                              | (0x40005033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))) 
                                             | (0x5033U 
                                                == 
                                                (0xfe00707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))) 
                                            | (0x1033U 
                                               == (0xfe00707fU 
                                                   & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))) 
                                           | (0x40005013U 
                                              == (0xfe00707fU 
                                                  & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))) 
                                          | (0x5013U 
                                             == (0xfe00707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))) 
                                         | (0x1013U 
                                            == (0xfe00707fU 
                                                & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))) 
                                        | (0x37U == 
                                           (0x7fU & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst)))
                                        ? ((0x3013U 
                                            == (0x707fU 
                                                & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))
                                            ? 0x736c7449U
                                            : ((0x40005033U 
                                                == 
                                                (0xfe00707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))
                                                ? 0x73726120U
                                                : (
                                                   (0x5033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))
                                                    ? 0x73726c20U
                                                    : 
                                                   ((0x1033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))
                                                     ? 0x736c6c20U
                                                     : 
                                                    ((0x40005013U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))
                                                      ? 0x73726169U
                                                      : 
                                                     ((0x5013U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))
                                                       ? 0x73726c69U
                                                       : 
                                                      ((0x1013U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))
                                                        ? 0x736c6c69U
                                                        : 0x6c756920U)))))))
                                        : (((((((((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst)) 
                                                  | (0x2003U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))) 
                                                 | (0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))) 
                                                | (0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))) 
                                               | (0x67U 
                                                  == 
                                                  (0x707fU 
                                                   & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))) 
                                              | (0x63U 
                                                 == 
                                                 (0x707fU 
                                                  & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))) 
                                             | (0x1063U 
                                                == 
                                                (0x707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))) 
                                            | (0x4063U 
                                               == (0x707fU 
                                                   & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst)))
                                            ? ((0x17U 
                                                == 
                                                (0x7fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))
                                                ? 0x61756950U
                                                : (
                                                   (0x2003U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))
                                                    ? 0x6c772020U
                                                    : 
                                                   ((0x2023U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))
                                                     ? 0x73772020U
                                                     : 
                                                    ((0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))
                                                      ? 0x6a616c20U
                                                      : 
                                                     ((0x67U 
                                                       == 
                                                       (0x707fU 
                                                        & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))
                                                       ? 0x6a616c72U
                                                       : 
                                                      ((0x63U 
                                                        == 
                                                        (0x707fU 
                                                         & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))
                                                        ? 0x62657120U
                                                        : 
                                                       ((0x1063U 
                                                         == 
                                                         (0x707fU 
                                                          & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))
                                                         ? 0x626e6520U
                                                         : 0x626c7420U)))))))
                                            : ((0x5063U 
                                                == 
                                                (0x707fU 
                                                 & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))
                                                ? 0x62676520U
                                                : (
                                                   (0x6063U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))
                                                    ? 0x626c7475U
                                                    : 
                                                   ((0x7063U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))
                                                     ? 0x62676575U
                                                     : 
                                                    ((0xbU 
                                                      == 
                                                      (0x7fU 
                                                       & __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__inst))
                                                      ? 0x63757330U
                                                      : 0x3f3f3f3fU))))))));
                    }(), __Vfunc_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__tinyrv2__DOT__disasm_tiny__146__Vfuncout));
            VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__145__trace, trace_str);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__145__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__145__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0))))))) {
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0);
            }
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__145__trace[0U];
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__145__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__145__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__145__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1))))));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                    = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__145__trace[0U] 
                = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_str__145__trace);
        }
    } else {
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__147__num = 4U;
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__147__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__147__trace, trace_str);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__147__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__147__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__147__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__147__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__147__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__vc_trace__DOT__append_chars__147__trace);
    }
}

extern const VlWide<128>/*4095:0*/ VSingleCoreSys_noparam__ConstPool__CONST_hf38a1e84_0;
extern const VlWide<128>/*4095:0*/ VSingleCoreSys_noparam__ConstPool__CONST_haead36df_0;

void VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__line_trace_TOP(VSingleCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1;
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__181__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__181__trace);
    CData/*0:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__181__val;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__181__val = 0;
    CData/*0:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__181__rdy;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__181__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__181__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__181__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__182__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__182__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__182__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__182__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__183__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__183__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__183__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__183__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__183__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__183__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__184__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__184__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__184__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__184__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__185__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__185__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__185__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__185__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__185__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__185__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__186__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__186__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__186__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__186__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__187__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__187__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__187__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__187__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__187__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__187__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__188__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__188__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__188__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__188__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__189__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__189__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__189__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__189__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__189__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__189__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__190__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__190__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__190__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__190__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__191__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__191__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__191__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__191__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__192__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__192__trace);
    CData/*0:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__192__val;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__192__val = 0;
    CData/*0:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__192__rdy;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__192__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__192__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__192__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__193__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__193__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__193__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__193__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__194__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__194__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__194__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__194__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__194__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__194__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__195__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__195__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__195__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__195__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__196__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__196__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__196__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__196__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__196__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__196__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__197__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__197__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__197__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__197__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__198__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__198__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__198__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__198__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__198__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__198__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__199__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__199__trace);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__199__str;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__199__str);
    VlWide<128>/*4095:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__200__trace;
    VL_ZERO_W(4096, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__200__trace);
    CData/*7:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__200__char;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__200__char = 0;
    IData/*31:0*/ __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__200__num;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__200__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__str
                  ,"%x",0,64,(((QData)((IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__op1_sel_mux_out)) 
                               << 0x20U) | (QData)((IData)(vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__op2_D))));
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__181__str, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__str);
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__181__rdy 
        = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imul_req_rdy_D;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__181__val 
        = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imul_req_val_D;
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__181__trace, trace_str);
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__181__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__181__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1))))))) {
        SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__181__rdy) 
         & (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__181__val))) {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__182__str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__181__str);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__182__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__181__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__182__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__182__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__182__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__182__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__182__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__182__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__182__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__181__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__182__trace);
    } else if (((IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__181__rdy) 
                & (~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__181__val)))) {
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__183__num 
            = SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1;
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__183__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__183__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__181__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__183__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__183__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__183__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__183__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__183__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__181__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__183__trace);
    } else if (((~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__181__rdy)) 
                & (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__181__val))) {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__184__str, VSingleCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__184__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__181__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__184__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__184__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__184__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__184__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__184__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__184__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__184__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__181__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__184__trace);
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__185__num 
            = (SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__185__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__185__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__181__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__185__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__185__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__185__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__185__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__185__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__181__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__185__trace);
    } else if ((1U & ((~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__181__rdy)) 
                      & (~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__181__val))))) {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__186__str, VSingleCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__186__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__181__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__186__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__186__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__186__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__186__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__186__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__186__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__186__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__181__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__186__trace);
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__187__num 
            = (SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__187__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__187__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__181__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__187__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__187__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__187__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__187__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__187__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__181__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__187__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__188__str, VSingleCoreSys_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__188__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__181__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__188__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__188__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__188__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__188__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__188__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__188__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__188__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__181__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__188__trace);
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__189__num 
            = (SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__189__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__189__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__181__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__189__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__189__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__189__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__189__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__189__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__181__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__189__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__181__trace);
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__190__str, VSingleCoreSys_noparam__ConstPool__CONST_h7ed547c1_0);
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__190__trace, trace_str);
    vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__190__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__190__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0);
    }
    vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
        = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__190__trace[0U];
    vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
        = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__190__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__190__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__190__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))));
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__190__trace[0U] 
        = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__190__trace);
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__191__str, VSingleCoreSys_noparam__ConstPool__CONST_h89919522_0);
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__191__trace, trace_str);
    vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__191__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__191__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0);
    }
    vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
        = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__191__trace[0U];
    vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
        = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__191__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__191__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__191__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))));
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__191__trace[0U] 
        = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__191__trace);
    VL_SFORMAT_NX(4096,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__str
                  ,"%x",0,32,vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul_resp_msg);
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__192__str, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__str);
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__192__rdy 
        = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imul_resp_rdy_X;
    __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__192__val 
        = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imul_resp_val_X;
    VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__192__trace, trace_str);
    SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__192__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__192__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1))))))) {
        SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__192__rdy) 
         & (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__192__val))) {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__193__str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__192__str);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__193__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__192__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__193__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__193__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__193__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__193__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__193__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__193__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__193__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__192__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__193__trace);
    } else if (((IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__192__rdy) 
                & (~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__192__val)))) {
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__194__num 
            = SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1;
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__194__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__194__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__192__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__194__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__194__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__194__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__194__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__194__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__192__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__194__trace);
    } else if (((~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__192__rdy)) 
                & (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__192__val))) {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__195__str, VSingleCoreSys_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__195__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__192__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__195__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__195__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__195__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__195__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__195__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__195__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__195__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__192__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__195__trace);
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__196__num 
            = (SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__196__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__196__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__192__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__196__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__196__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__196__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__196__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__196__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__192__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__196__trace);
    } else if ((1U & ((~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__192__rdy)) 
                      & (~ (IData)(__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__192__val))))) {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__197__str, VSingleCoreSys_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__197__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__192__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__197__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__197__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__197__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__197__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__197__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__197__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__197__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__192__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__197__trace);
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__198__num 
            = (SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__198__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__198__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__192__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__198__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__198__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__198__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__198__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__198__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__192__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__198__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__199__str, VSingleCoreSys_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__199__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__192__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__199__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__199__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__199__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__199__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__199__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__199__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__199__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__192__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__199__trace);
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__200__num 
            = (SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__200__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__200__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__192__trace);
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
            = __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__200__trace[0U];
        vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__200__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__200__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__200__char);
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__200__trace[0U] 
            = vlSymsp->TOP.SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__192__trace, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__200__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__192__trace);
}
