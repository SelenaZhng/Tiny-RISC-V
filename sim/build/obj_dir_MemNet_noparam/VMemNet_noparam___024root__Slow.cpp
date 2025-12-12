// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMemNet_noparam.h for the primary calling header

#include "VMemNet_noparam__pch.h"
#include "VMemNet_noparam__Syms.h"
#include "VMemNet_noparam___024root.h"

void VMemNet_noparam___024root___ctor_var_reset(VMemNet_noparam___024root* vlSelf);

VMemNet_noparam___024root::VMemNet_noparam___024root(VMemNet_noparam__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VMemNet_noparam___024root___ctor_var_reset(this);
}

void VMemNet_noparam___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VMemNet_noparam___024root::~VMemNet_noparam___024root() {
}
