// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcolor.h for the primary calling header

#include "verilated.h"

#include "Vcolor__Syms.h"
#include "Vcolor___024root.h"

void Vcolor___024root___eval_act(Vcolor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcolor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcolor___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vcolor___024root___nba_sequent__TOP__0(Vcolor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcolor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcolor___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ color__DOT____Vlvbound_hd07501fd__0;
    color__DOT____Vlvbound_hd07501fd__0 = 0;
    SData/*10:0*/ __Vdly__color__DOT__address;
    __Vdly__color__DOT__address = 0;
    SData/*10:0*/ __Vdlyvdim0__color__DOT__channels__v0;
    __Vdlyvdim0__color__DOT__channels__v0 = 0;
    IData/*31:0*/ __Vdlyvval__color__DOT__channels__v0;
    __Vdlyvval__color__DOT__channels__v0 = 0;
    CData/*0:0*/ __Vdlyvset__color__DOT__channels__v0;
    __Vdlyvset__color__DOT__channels__v0 = 0;
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vdlyvset__color__DOT__channels__v0 = 0U;
    __Vdly__color__DOT__address = vlSelf->color__DOT__address;
    color__DOT____Vlvbound_hd07501fd__0 = vlSelf->color__DOT__pixel_out;
    if ((0x4afU >= (IData)(vlSelf->color__DOT__address))) {
        __Vdlyvval__color__DOT__channels__v0 = color__DOT____Vlvbound_hd07501fd__0;
        __Vdlyvset__color__DOT__channels__v0 = 1U;
        __Vdlyvdim0__color__DOT__channels__v0 = vlSelf->color__DOT__address;
    }
    if (vlSelf->reset) {
        __Vdly__color__DOT__address = 0U;
    } else if (VL_UNLIKELY((0x4b0U == (IData)(vlSelf->color__DOT__address)))) {
        VL_FINISH_MT("color.sv", 166, "");
        __Vtemp_1[0U] = 0x2e6d656dU;
        __Vtemp_1[1U] = 0x74707574U;
        __Vtemp_1[2U] = 0x652f6f75U;
        __Vtemp_1[3U] = 0x73746174U;
        VL_WRITEMEM_N(true, 32, 1200, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_1)
                      ,  &(vlSelf->color__DOT__channels)
                      , 0, ~0ULL);
    } else {
        __Vdly__color__DOT__address = (0x7ffU & ((IData)(1U) 
                                                 + (IData)(vlSelf->color__DOT__address)));
    }
    if (__Vdlyvset__color__DOT__channels__v0) {
        vlSelf->color__DOT__channels[__Vdlyvdim0__color__DOT__channels__v0] 
            = __Vdlyvval__color__DOT__channels__v0;
    }
    vlSelf->color__DOT__address = __Vdly__color__DOT__address;
    vlSelf->color__DOT__col = ((1U & VL_MODDIV_III(11, (IData)(vlSelf->color__DOT__address), (IData)(0x28U)))
                                ? ((1U & VL_DIV_III(11, (IData)(vlSelf->color__DOT__address), (IData)(0x28U)))
                                    ? 1U : 2U) : ((1U 
                                                   & VL_DIV_III(11, (IData)(vlSelf->color__DOT__address), (IData)(0x28U)))
                                                   ? 3U
                                                   : 0U));
    vlSelf->color__DOT__vertical = ((0U == (0x1fU & 
                                            VL_DIV_III(11, (IData)(vlSelf->color__DOT__address), (IData)(0x28U))))
                                     ? 0U : ((0x1dU 
                                              == (0x1fU 
                                                  & VL_DIV_III(11, (IData)(vlSelf->color__DOT__address), (IData)(0x28U))))
                                              ? 2U : 1U));
    vlSelf->color__DOT__lateral = ((0U == (0x3fU & 
                                           VL_MODDIV_III(11, (IData)(vlSelf->color__DOT__address), (IData)(0x28U))))
                                    ? 0U : ((0x27U 
                                             == (0x3fU 
                                                 & VL_MODDIV_III(11, (IData)(vlSelf->color__DOT__address), (IData)(0x28U))))
                                             ? 2U : 1U));
    vlSelf->color__DOT__data_out[0U][0U] = ((0x4afU 
                                             >= (0x7ffU 
                                                 & ((IData)(0x7d7U) 
                                                    + (IData)(vlSelf->color__DOT__address))))
                                             ? vlSelf->color__DOT__input_memory__DOT__mem
                                            [(0x7ffU 
                                              & ((IData)(0x7d7U) 
                                                 + (IData)(vlSelf->color__DOT__address)))]
                                             : 0U);
    vlSelf->color__DOT__data_out[1U][0U] = ((0x4afU 
                                             >= (0x7ffU 
                                                 & ((IData)(0x7ffU) 
                                                    + (IData)(vlSelf->color__DOT__address))))
                                             ? vlSelf->color__DOT__input_memory__DOT__mem
                                            [(0x7ffU 
                                              & ((IData)(0x7ffU) 
                                                 + (IData)(vlSelf->color__DOT__address)))]
                                             : 0U);
    vlSelf->color__DOT__data_out[2U][0U] = ((0x4afU 
                                             >= (0x7ffU 
                                                 & ((IData)(0x27U) 
                                                    + (IData)(vlSelf->color__DOT__address))))
                                             ? vlSelf->color__DOT__input_memory__DOT__mem
                                            [(0x7ffU 
                                              & ((IData)(0x27U) 
                                                 + (IData)(vlSelf->color__DOT__address)))]
                                             : 0U);
    vlSelf->color__DOT__data_out[0U][1U] = ((0x4afU 
                                             >= (0x7ffU 
                                                 & ((IData)(0x7d8U) 
                                                    + (IData)(vlSelf->color__DOT__address))))
                                             ? vlSelf->color__DOT__input_memory__DOT__mem
                                            [(0x7ffU 
                                              & ((IData)(0x7d8U) 
                                                 + (IData)(vlSelf->color__DOT__address)))]
                                             : 0U);
    vlSelf->color__DOT__data_out[1U][1U] = ((0x4afU 
                                             >= (IData)(vlSelf->color__DOT__address))
                                             ? vlSelf->color__DOT__input_memory__DOT__mem
                                            [vlSelf->color__DOT__address]
                                             : 0U);
    vlSelf->color__DOT__data_out[2U][1U] = ((0x4afU 
                                             >= (0x7ffU 
                                                 & ((IData)(0x28U) 
                                                    + (IData)(vlSelf->color__DOT__address))))
                                             ? vlSelf->color__DOT__input_memory__DOT__mem
                                            [(0x7ffU 
                                              & ((IData)(0x28U) 
                                                 + (IData)(vlSelf->color__DOT__address)))]
                                             : 0U);
    vlSelf->color__DOT__data_out[0U][2U] = ((0x4afU 
                                             >= (0x7ffU 
                                                 & ((IData)(0x7d9U) 
                                                    + (IData)(vlSelf->color__DOT__address))))
                                             ? vlSelf->color__DOT__input_memory__DOT__mem
                                            [(0x7ffU 
                                              & ((IData)(0x7d9U) 
                                                 + (IData)(vlSelf->color__DOT__address)))]
                                             : 0U);
    vlSelf->color__DOT__data_out[1U][2U] = ((0x4afU 
                                             >= (0x7ffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->color__DOT__address))))
                                             ? vlSelf->color__DOT__input_memory__DOT__mem
                                            [(0x7ffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->color__DOT__address)))]
                                             : 0U);
    vlSelf->color__DOT__data_out[2U][2U] = ((0x4afU 
                                             >= (0x7ffU 
                                                 & ((IData)(0x29U) 
                                                    + (IData)(vlSelf->color__DOT__address))))
                                             ? vlSelf->color__DOT__input_memory__DOT__mem
                                            [(0x7ffU 
                                              & ((IData)(0x29U) 
                                                 + (IData)(vlSelf->color__DOT__address)))]
                                             : 0U);
    if ((0U == vlSelf->color__DOT__lateral)) {
        vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[2U][2U] 
            = vlSelf->color__DOT__data_out[2U][2U];
        vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[2U][1U] 
            = vlSelf->color__DOT__data_out[2U][1U];
        vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[2U][0U] 
            = vlSelf->color__DOT__data_out[2U][0U];
        vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[1U][2U] 
            = vlSelf->color__DOT__data_out[1U][2U];
        vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[1U][1U] 
            = vlSelf->color__DOT__data_out[1U][1U];
        vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[1U][0U] 
            = vlSelf->color__DOT__data_out[1U][0U];
        vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[0U][2U] 
            = vlSelf->color__DOT__data_out[0U][2U];
        vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[0U][1U] 
            = vlSelf->color__DOT__data_out[0U][1U];
        vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[0U][0U] 
            = vlSelf->color__DOT__data_out[0U][0U];
        vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[2U][0U] 
            = vlSelf->color__DOT__data_out[2U][2U];
        vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[1U][0U] 
            = vlSelf->color__DOT__data_out[1U][2U];
        vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[0U][0U] 
            = vlSelf->color__DOT__data_out[0U][2U];
    } else if ((1U == vlSelf->color__DOT__lateral)) {
        vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[2U][2U] 
            = vlSelf->color__DOT__data_out[2U][2U];
        vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[2U][1U] 
            = vlSelf->color__DOT__data_out[2U][1U];
        vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[2U][0U] 
            = vlSelf->color__DOT__data_out[2U][0U];
        vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[1U][2U] 
            = vlSelf->color__DOT__data_out[1U][2U];
        vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[1U][1U] 
            = vlSelf->color__DOT__data_out[1U][1U];
        vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[1U][0U] 
            = vlSelf->color__DOT__data_out[1U][0U];
        vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[0U][2U] 
            = vlSelf->color__DOT__data_out[0U][2U];
        vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[0U][1U] 
            = vlSelf->color__DOT__data_out[0U][1U];
        vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[0U][0U] 
            = vlSelf->color__DOT__data_out[0U][0U];
    } else if ((2U == vlSelf->color__DOT__lateral)) {
        vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[2U][2U] 
            = vlSelf->color__DOT__data_out[2U][2U];
        vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[2U][1U] 
            = vlSelf->color__DOT__data_out[2U][1U];
        vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[2U][0U] 
            = vlSelf->color__DOT__data_out[2U][0U];
        vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[1U][2U] 
            = vlSelf->color__DOT__data_out[1U][2U];
        vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[1U][1U] 
            = vlSelf->color__DOT__data_out[1U][1U];
        vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[1U][0U] 
            = vlSelf->color__DOT__data_out[1U][0U];
        vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[0U][2U] 
            = vlSelf->color__DOT__data_out[0U][2U];
        vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[0U][1U] 
            = vlSelf->color__DOT__data_out[0U][1U];
        vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[0U][0U] 
            = vlSelf->color__DOT__data_out[0U][0U];
        vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[2U][2U] 
            = vlSelf->color__DOT__data_out[2U][0U];
        vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[1U][2U] 
            = vlSelf->color__DOT__data_out[1U][0U];
        vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[0U][2U] 
            = vlSelf->color__DOT__data_out[0U][0U];
    }
    if ((0U == vlSelf->color__DOT__vertical)) {
        vlSelf->color__DOT__filter3x3__DOT__pixels[2U][2U] 
            = vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [2U][2U];
        vlSelf->color__DOT__filter3x3__DOT__pixels[2U][1U] 
            = vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [2U][1U];
        vlSelf->color__DOT__filter3x3__DOT__pixels[2U][0U] 
            = vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [2U][0U];
        vlSelf->color__DOT__filter3x3__DOT__pixels[1U][2U] 
            = vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [1U][2U];
        vlSelf->color__DOT__filter3x3__DOT__pixels[1U][1U] 
            = vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [1U][1U];
        vlSelf->color__DOT__filter3x3__DOT__pixels[1U][0U] 
            = vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [1U][0U];
        vlSelf->color__DOT__filter3x3__DOT__pixels[0U][2U] 
            = vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [0U][2U];
        vlSelf->color__DOT__filter3x3__DOT__pixels[0U][1U] 
            = vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [0U][1U];
        vlSelf->color__DOT__filter3x3__DOT__pixels[0U][0U] 
            = vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [0U][0U];
        vlSelf->color__DOT__filter3x3__DOT__pixels[0U][0U] 
            = vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [2U][0U];
        vlSelf->color__DOT__filter3x3__DOT__pixels[0U][1U] 
            = vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [2U][1U];
        vlSelf->color__DOT__filter3x3__DOT__pixels[0U][2U] 
            = vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [2U][2U];
    } else if ((1U == vlSelf->color__DOT__vertical)) {
        vlSelf->color__DOT__filter3x3__DOT__pixels[2U][2U] 
            = vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [2U][2U];
        vlSelf->color__DOT__filter3x3__DOT__pixels[2U][1U] 
            = vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [2U][1U];
        vlSelf->color__DOT__filter3x3__DOT__pixels[2U][0U] 
            = vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [2U][0U];
        vlSelf->color__DOT__filter3x3__DOT__pixels[1U][2U] 
            = vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [1U][2U];
        vlSelf->color__DOT__filter3x3__DOT__pixels[1U][1U] 
            = vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [1U][1U];
        vlSelf->color__DOT__filter3x3__DOT__pixels[1U][0U] 
            = vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [1U][0U];
        vlSelf->color__DOT__filter3x3__DOT__pixels[0U][2U] 
            = vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [0U][2U];
        vlSelf->color__DOT__filter3x3__DOT__pixels[0U][1U] 
            = vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [0U][1U];
        vlSelf->color__DOT__filter3x3__DOT__pixels[0U][0U] 
            = vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [0U][0U];
    } else if ((2U == vlSelf->color__DOT__vertical)) {
        vlSelf->color__DOT__filter3x3__DOT__pixels[2U][2U] 
            = vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [2U][2U];
        vlSelf->color__DOT__filter3x3__DOT__pixels[2U][1U] 
            = vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [2U][1U];
        vlSelf->color__DOT__filter3x3__DOT__pixels[2U][0U] 
            = vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [2U][0U];
        vlSelf->color__DOT__filter3x3__DOT__pixels[1U][2U] 
            = vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [1U][2U];
        vlSelf->color__DOT__filter3x3__DOT__pixels[1U][1U] 
            = vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [1U][1U];
        vlSelf->color__DOT__filter3x3__DOT__pixels[1U][0U] 
            = vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [1U][0U];
        vlSelf->color__DOT__filter3x3__DOT__pixels[0U][2U] 
            = vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [0U][2U];
        vlSelf->color__DOT__filter3x3__DOT__pixels[0U][1U] 
            = vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [0U][1U];
        vlSelf->color__DOT__filter3x3__DOT__pixels[0U][0U] 
            = vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [0U][0U];
        vlSelf->color__DOT__filter3x3__DOT__pixels[2U][0U] 
            = vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [0U][0U];
        vlSelf->color__DOT__filter3x3__DOT__pixels[2U][1U] 
            = vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [0U][1U];
        vlSelf->color__DOT__filter3x3__DOT__pixels[2U][2U] 
            = vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [0U][2U];
    }
    if ((0U == vlSelf->color__DOT__col)) {
        vlSelf->color__DOT__pixel_out = ((0xffffffU 
                                          & vlSelf->color__DOT__pixel_out) 
                                         | (vlSelf->color__DOT__filter3x3__DOT__pixels
                                            [1U][1U] 
                                            << 0x18U));
        vlSelf->color__DOT__pixel_out = ((0xff00ffffU 
                                          & vlSelf->color__DOT__pixel_out) 
                                         | (0xff0000U 
                                            & ((((vlSelf->color__DOT__filter3x3__DOT__pixels
                                                  [1U]
                                                  [2U] 
                                                  + 
                                                  vlSelf->color__DOT__filter3x3__DOT__pixels
                                                  [2U]
                                                  [1U]) 
                                                 + 
                                                 vlSelf->color__DOT__filter3x3__DOT__pixels
                                                 [0U]
                                                 [1U]) 
                                                + vlSelf->color__DOT__filter3x3__DOT__pixels
                                                [1U]
                                                [0U]) 
                                               << 0xeU)));
        vlSelf->color__DOT__pixel_out = ((0xffff00ffU 
                                          & vlSelf->color__DOT__pixel_out) 
                                         | (0xff00U 
                                            & ((((vlSelf->color__DOT__filter3x3__DOT__pixels
                                                  [2U]
                                                  [2U] 
                                                  + 
                                                  vlSelf->color__DOT__filter3x3__DOT__pixels
                                                  [2U]
                                                  [0U]) 
                                                 + 
                                                 vlSelf->color__DOT__filter3x3__DOT__pixels
                                                 [0U]
                                                 [2U]) 
                                                + vlSelf->color__DOT__filter3x3__DOT__pixels
                                                [0U]
                                                [0U]) 
                                               << 6U)));
    } else if ((1U == vlSelf->color__DOT__col)) {
        vlSelf->color__DOT__pixel_out = ((0xffffffU 
                                          & vlSelf->color__DOT__pixel_out) 
                                         | (0xff000000U 
                                            & ((((vlSelf->color__DOT__filter3x3__DOT__pixels
                                                  [2U]
                                                  [2U] 
                                                  + 
                                                  vlSelf->color__DOT__filter3x3__DOT__pixels
                                                  [2U]
                                                  [0U]) 
                                                 + 
                                                 vlSelf->color__DOT__filter3x3__DOT__pixels
                                                 [0U]
                                                 [2U]) 
                                                + vlSelf->color__DOT__filter3x3__DOT__pixels
                                                [0U]
                                                [0U]) 
                                               << 0x16U)));
        vlSelf->color__DOT__pixel_out = ((0xff00ffffU 
                                          & vlSelf->color__DOT__pixel_out) 
                                         | (0xff0000U 
                                            & ((((vlSelf->color__DOT__filter3x3__DOT__pixels
                                                  [1U]
                                                  [2U] 
                                                  + 
                                                  vlSelf->color__DOT__filter3x3__DOT__pixels
                                                  [2U]
                                                  [1U]) 
                                                 + 
                                                 vlSelf->color__DOT__filter3x3__DOT__pixels
                                                 [0U]
                                                 [1U]) 
                                                + vlSelf->color__DOT__filter3x3__DOT__pixels
                                                [1U]
                                                [0U]) 
                                               << 0xeU)));
        vlSelf->color__DOT__pixel_out = ((0xffff00ffU 
                                          & vlSelf->color__DOT__pixel_out) 
                                         | (vlSelf->color__DOT__filter3x3__DOT__pixels
                                            [1U][1U] 
                                            << 8U));
    } else if ((2U == vlSelf->color__DOT__col)) {
        vlSelf->color__DOT__pixel_out = ((0xffffffU 
                                          & vlSelf->color__DOT__pixel_out) 
                                         | (0xff000000U 
                                            & ((vlSelf->color__DOT__filter3x3__DOT__pixels
                                                [1U]
                                                [2U] 
                                                + vlSelf->color__DOT__filter3x3__DOT__pixels
                                                [1U]
                                                [0U]) 
                                               << 0x17U)));
        vlSelf->color__DOT__pixel_out = ((0xff00ffffU 
                                          & vlSelf->color__DOT__pixel_out) 
                                         | (vlSelf->color__DOT__filter3x3__DOT__pixels
                                            [1U][1U] 
                                            << 0x10U));
        vlSelf->color__DOT__pixel_out = ((0xffff00ffU 
                                          & vlSelf->color__DOT__pixel_out) 
                                         | (0xff00U 
                                            & ((vlSelf->color__DOT__filter3x3__DOT__pixels
                                                [2U]
                                                [1U] 
                                                + vlSelf->color__DOT__filter3x3__DOT__pixels
                                                [0U]
                                                [1U]) 
                                               << 7U)));
    } else if ((3U == vlSelf->color__DOT__col)) {
        vlSelf->color__DOT__pixel_out = ((0xffffffU 
                                          & vlSelf->color__DOT__pixel_out) 
                                         | (0xff000000U 
                                            & ((vlSelf->color__DOT__filter3x3__DOT__pixels
                                                [2U]
                                                [1U] 
                                                + vlSelf->color__DOT__filter3x3__DOT__pixels
                                                [0U]
                                                [1U]) 
                                               << 0x17U)));
        vlSelf->color__DOT__pixel_out = ((0xff00ffffU 
                                          & vlSelf->color__DOT__pixel_out) 
                                         | (vlSelf->color__DOT__filter3x3__DOT__pixels
                                            [1U][1U] 
                                            << 0x10U));
        vlSelf->color__DOT__pixel_out = ((0xffff00ffU 
                                          & vlSelf->color__DOT__pixel_out) 
                                         | (0xff00U 
                                            & ((vlSelf->color__DOT__filter3x3__DOT__pixels
                                                [1U]
                                                [2U] 
                                                + vlSelf->color__DOT__filter3x3__DOT__pixels
                                                [1U]
                                                [0U]) 
                                               << 7U)));
    }
}

void Vcolor___024root___eval_nba(Vcolor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcolor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcolor___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcolor___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vcolor___024root___eval_triggers__act(Vcolor___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcolor___024root___dump_triggers__act(Vcolor___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcolor___024root___dump_triggers__nba(Vcolor___024root* vlSelf);
#endif  // VL_DEBUG

void Vcolor___024root___eval(Vcolor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcolor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcolor___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vcolor___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vcolor___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("color.sv", 152, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vcolor___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vcolor___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("color.sv", 152, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vcolor___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vcolor___024root___eval_debug_assertions(Vcolor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcolor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcolor___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
