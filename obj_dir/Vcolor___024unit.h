// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcolor.h for the primary calling header

#ifndef VERILATED_VCOLOR___024UNIT_H_
#define VERILATED_VCOLOR___024UNIT_H_  // guard

#include "verilated.h"


class Vcolor__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcolor___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vcolor__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcolor___024unit(Vcolor__Syms* symsp, const char* v__name);
    ~Vcolor___024unit();
    VL_UNCOPYABLE(Vcolor___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
