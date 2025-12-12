// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMultiCoreSys_noparam.h for the primary calling header

#include "VMultiCoreSys_noparam__pch.h"
#include "VMultiCoreSys_noparam__Syms.h"
#include "VMultiCoreSys_noparam___024unit.h"

void VMultiCoreSys_noparam___024unit___ctor_var_reset(VMultiCoreSys_noparam___024unit* vlSelf);

VMultiCoreSys_noparam___024unit::VMultiCoreSys_noparam___024unit(VMultiCoreSys_noparam__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VMultiCoreSys_noparam___024unit___ctor_var_reset(this);
}

void VMultiCoreSys_noparam___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VMultiCoreSys_noparam___024unit::~VMultiCoreSys_noparam___024unit() {
}
