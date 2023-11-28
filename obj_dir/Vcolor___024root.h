// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcolor.h for the primary calling header

#ifndef VERILATED_VCOLOR___024ROOT_H_
#define VERILATED_VCOLOR___024ROOT_H_  // guard

#include "verilated.h"


class Vcolor__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcolor___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    CData/*7:0*/ color__DOT__red;
    CData/*7:0*/ color__DOT__green;
    CData/*7:0*/ color__DOT__blue;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    SData/*10:0*/ color__DOT__pixel_number;
    IData/*31:0*/ color__DOT__lateral;
    IData/*31:0*/ color__DOT__vertical;
    IData/*31:0*/ color__DOT__col;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<VlUnpacked<VlUnpacked<CData/*7:0*/, 4>, 40>, 30> color__DOT__channels;
    VlUnpacked<VlUnpacked<CData/*7:0*/, 3>, 3> color__DOT__data_out;
    VlUnpacked<VlUnpacked<CData/*7:0*/, 40>, 30> color__DOT__input_memory__DOT__mem;
    VlUnpacked<VlUnpacked<CData/*7:0*/, 3>, 3> color__DOT__filter3x3__DOT__pixels;
    VlUnpacked<VlUnpacked<CData/*7:0*/, 3>, 3> color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcolor__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcolor___024root(Vcolor__Syms* symsp, const char* v__name);
    ~Vcolor___024root();
    VL_UNCOPYABLE(Vcolor___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
