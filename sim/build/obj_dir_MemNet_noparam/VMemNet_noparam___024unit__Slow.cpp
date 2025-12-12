// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMemNet_noparam.h for the primary calling header

#include "VMemNet_noparam__pch.h"
#include "VMemNet_noparam__Syms.h"
#include "VMemNet_noparam___024unit.h"

void VMemNet_noparam___024unit___ctor_var_reset(VMemNet_noparam___024unit* vlSelf);

VMemNet_noparam___024unit::VMemNet_noparam___024unit(VMemNet_noparam__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VMemNet_noparam___024unit___ctor_var_reset(this);
}

void VMemNet_noparam___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VMemNet_noparam___024unit::~VMemNet_noparam___024unit() {
}
