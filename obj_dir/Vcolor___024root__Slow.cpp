// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcolor.h for the primary calling header

#include "verilated.h"

#include "Vcolor__Syms.h"
#include "Vcolor__Syms.h"
#include "Vcolor___024root.h"

void Vcolor___024root___ctor_var_reset(Vcolor___024root* vlSelf);

Vcolor___024root::Vcolor___024root(Vcolor__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcolor___024root___ctor_var_reset(this);
}

void Vcolor___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vcolor___024root::~Vcolor___024root() {
}
