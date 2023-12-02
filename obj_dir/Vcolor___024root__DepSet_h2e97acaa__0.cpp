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
    CData/*7:0*/ color__DOT____Vlvbound_hfe420a2a__0;
    color__DOT____Vlvbound_hfe420a2a__0 = 0;
    CData/*7:0*/ color__DOT____Vlvbound_hfe4262f0__0;
    color__DOT____Vlvbound_hfe4262f0__0 = 0;
    CData/*7:0*/ color__DOT____Vlvbound_hfe420ab8__0;
    color__DOT____Vlvbound_hfe420ab8__0 = 0;
    CData/*7:0*/ color__DOT____Vlvbound_hfe42636c__0;
    color__DOT____Vlvbound_hfe42636c__0 = 0;
    SData/*10:0*/ __Vdly__color__DOT__pixel_number;
    __Vdly__color__DOT__pixel_number = 0;
    CData/*4:0*/ __Vdlyvdim0__color__DOT__channels__v0;
    __Vdlyvdim0__color__DOT__channels__v0 = 0;
    CData/*5:0*/ __Vdlyvdim1__color__DOT__channels__v0;
    __Vdlyvdim1__color__DOT__channels__v0 = 0;
    CData/*7:0*/ __Vdlyvval__color__DOT__channels__v0;
    __Vdlyvval__color__DOT__channels__v0 = 0;
    CData/*0:0*/ __Vdlyvset__color__DOT__channels__v0;
    __Vdlyvset__color__DOT__channels__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__color__DOT__channels__v1;
    __Vdlyvdim0__color__DOT__channels__v1 = 0;
    CData/*5:0*/ __Vdlyvdim1__color__DOT__channels__v1;
    __Vdlyvdim1__color__DOT__channels__v1 = 0;
    CData/*7:0*/ __Vdlyvval__color__DOT__channels__v1;
    __Vdlyvval__color__DOT__channels__v1 = 0;
    CData/*0:0*/ __Vdlyvset__color__DOT__channels__v1;
    __Vdlyvset__color__DOT__channels__v1 = 0;
    CData/*4:0*/ __Vdlyvdim0__color__DOT__channels__v2;
    __Vdlyvdim0__color__DOT__channels__v2 = 0;
    CData/*5:0*/ __Vdlyvdim1__color__DOT__channels__v2;
    __Vdlyvdim1__color__DOT__channels__v2 = 0;
    CData/*7:0*/ __Vdlyvval__color__DOT__channels__v2;
    __Vdlyvval__color__DOT__channels__v2 = 0;
    CData/*0:0*/ __Vdlyvset__color__DOT__channels__v2;
    __Vdlyvset__color__DOT__channels__v2 = 0;
    CData/*4:0*/ __Vdlyvdim0__color__DOT__channels__v3;
    __Vdlyvdim0__color__DOT__channels__v3 = 0;
    CData/*5:0*/ __Vdlyvdim1__color__DOT__channels__v3;
    __Vdlyvdim1__color__DOT__channels__v3 = 0;
    CData/*7:0*/ __Vdlyvval__color__DOT__channels__v3;
    __Vdlyvval__color__DOT__channels__v3 = 0;
    CData/*0:0*/ __Vdlyvset__color__DOT__channels__v3;
    __Vdlyvset__color__DOT__channels__v3 = 0;
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vdlyvset__color__DOT__channels__v3 = 0U;
    __Vdlyvset__color__DOT__channels__v0 = 0U;
    __Vdlyvset__color__DOT__channels__v1 = 0U;
    __Vdlyvset__color__DOT__channels__v2 = 0U;
    __Vdly__color__DOT__pixel_number = vlSelf->color__DOT__pixel_number;
    color__DOT____Vlvbound_hfe42636c__0 = 0xffU;
    color__DOT____Vlvbound_hfe420a2a__0 = vlSelf->color__DOT__red;
    color__DOT____Vlvbound_hfe4262f0__0 = vlSelf->color__DOT__green;
    color__DOT____Vlvbound_hfe420ab8__0 = vlSelf->color__DOT__blue;
    if (((0x27U >= (0x3fU & VL_MODDIV_III(11, (IData)(vlSelf->color__DOT__pixel_number), (IData)(0x28U)))) 
         & (0x1dU >= (0x1fU & VL_DIV_III(11, (IData)(vlSelf->color__DOT__pixel_number), (IData)(0x28U)))))) {
        __Vdlyvval__color__DOT__channels__v3 = color__DOT____Vlvbound_hfe42636c__0;
        __Vdlyvset__color__DOT__channels__v3 = 1U;
        __Vdlyvdim1__color__DOT__channels__v3 = (0x3fU 
                                                 & VL_MODDIV_III(11, (IData)(vlSelf->color__DOT__pixel_number), (IData)(0x28U)));
        __Vdlyvdim0__color__DOT__channels__v3 = (0x1fU 
                                                 & VL_DIV_III(11, (IData)(vlSelf->color__DOT__pixel_number), (IData)(0x28U)));
        __Vdlyvval__color__DOT__channels__v0 = color__DOT____Vlvbound_hfe420a2a__0;
        __Vdlyvset__color__DOT__channels__v0 = 1U;
        __Vdlyvdim1__color__DOT__channels__v0 = (0x3fU 
                                                 & VL_MODDIV_III(11, (IData)(vlSelf->color__DOT__pixel_number), (IData)(0x28U)));
        __Vdlyvdim0__color__DOT__channels__v0 = (0x1fU 
                                                 & VL_DIV_III(11, (IData)(vlSelf->color__DOT__pixel_number), (IData)(0x28U)));
        __Vdlyvval__color__DOT__channels__v1 = color__DOT____Vlvbound_hfe4262f0__0;
        __Vdlyvset__color__DOT__channels__v1 = 1U;
        __Vdlyvdim1__color__DOT__channels__v1 = (0x3fU 
                                                 & VL_MODDIV_III(11, (IData)(vlSelf->color__DOT__pixel_number), (IData)(0x28U)));
        __Vdlyvdim0__color__DOT__channels__v1 = (0x1fU 
                                                 & VL_DIV_III(11, (IData)(vlSelf->color__DOT__pixel_number), (IData)(0x28U)));
        __Vdlyvval__color__DOT__channels__v2 = color__DOT____Vlvbound_hfe420ab8__0;
        __Vdlyvset__color__DOT__channels__v2 = 1U;
        __Vdlyvdim1__color__DOT__channels__v2 = (0x3fU 
                                                 & VL_MODDIV_III(11, (IData)(vlSelf->color__DOT__pixel_number), (IData)(0x28U)));
        __Vdlyvdim0__color__DOT__channels__v2 = (0x1fU 
                                                 & VL_DIV_III(11, (IData)(vlSelf->color__DOT__pixel_number), (IData)(0x28U)));
    }
    if (vlSelf->reset) {
        __Vdly__color__DOT__pixel_number = 0U;
    } else if (VL_UNLIKELY((0x4b0U == (IData)(vlSelf->color__DOT__pixel_number)))) {
        VL_FINISH_MT("color.sv", 158, "");
        __Vtemp_1[0U] = 0x2e6d656dU;
        __Vtemp_1[1U] = 0x74707574U;
        __Vtemp_1[2U] = 0x652f6f75U;
        __Vtemp_1[3U] = 0x73746174U;
        VL_WRITEMEM_N(true, 8, 4800, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_1)
                      ,  &(vlSelf->color__DOT__channels)
                      , 0, ~0ULL);
    } else {
        __Vdly__color__DOT__pixel_number = (0x7ffU 
                                            & ((IData)(1U) 
                                               + (IData)(vlSelf->color__DOT__pixel_number)));
    }
    if (__Vdlyvset__color__DOT__channels__v0) {
        vlSelf->color__DOT__channels[__Vdlyvdim0__color__DOT__channels__v0][__Vdlyvdim1__color__DOT__channels__v0][0U] 
            = __Vdlyvval__color__DOT__channels__v0;
    }
    if (__Vdlyvset__color__DOT__channels__v1) {
        vlSelf->color__DOT__channels[__Vdlyvdim0__color__DOT__channels__v1][__Vdlyvdim1__color__DOT__channels__v1][1U] 
            = __Vdlyvval__color__DOT__channels__v1;
    }
    if (__Vdlyvset__color__DOT__channels__v2) {
        vlSelf->color__DOT__channels[__Vdlyvdim0__color__DOT__channels__v2][__Vdlyvdim1__color__DOT__channels__v2][2U] 
            = __Vdlyvval__color__DOT__channels__v2;
    }
    if (__Vdlyvset__color__DOT__channels__v3) {
        vlSelf->color__DOT__channels[__Vdlyvdim0__color__DOT__channels__v3][__Vdlyvdim1__color__DOT__channels__v3][3U] 
            = __Vdlyvval__color__DOT__channels__v3;
    }
    vlSelf->color__DOT__pixel_number = __Vdly__color__DOT__pixel_number;
    vlSelf->color__DOT__col = ((1U & VL_MODDIV_III(11, (IData)(vlSelf->color__DOT__pixel_number), (IData)(0x28U)))
                                ? ((1U & VL_DIV_III(11, (IData)(vlSelf->color__DOT__pixel_number), (IData)(0x28U)))
                                    ? 1U : 2U) : ((1U 
                                                   & VL_DIV_III(11, (IData)(vlSelf->color__DOT__pixel_number), (IData)(0x28U)))
                                                   ? 3U
                                                   : 0U));
    vlSelf->color__DOT__vertical = ((0U == (0x1fU & 
                                            VL_DIV_III(11, (IData)(vlSelf->color__DOT__pixel_number), (IData)(0x28U))))
                                     ? 0U : ((0x1dU 
                                              == (0x1fU 
                                                  & VL_DIV_III(11, (IData)(vlSelf->color__DOT__pixel_number), (IData)(0x28U))))
                                              ? 2U : 1U));
    vlSelf->color__DOT__lateral = ((0U == (0x3fU & 
                                           VL_MODDIV_III(11, (IData)(vlSelf->color__DOT__pixel_number), (IData)(0x28U))))
                                    ? 0U : ((0x27U 
                                             == (0x3fU 
                                                 & VL_MODDIV_III(11, (IData)(vlSelf->color__DOT__pixel_number), (IData)(0x28U))))
                                             ? 2U : 1U));
    if ((0x27U >= (0x3fU & ((IData)(0x3fU) + (0x7ffU 
                                              & VL_MODDIV_III(11, (IData)(vlSelf->color__DOT__pixel_number), (IData)(0x28U))))))) {
        vlSelf->color__DOT__data_out[0U][0U] = vlSelf->color__DOT__input_memory__DOT__mem
            [((0x1dU >= (0x1fU & ((IData)(0x1fU) + 
                                  (0x7ffU & VL_DIV_III(11, (IData)(vlSelf->color__DOT__pixel_number), (IData)(0x28U))))))
               ? (0x1fU & ((IData)(0x1fU) + (0x7ffU 
                                             & VL_DIV_III(11, (IData)(vlSelf->color__DOT__pixel_number), (IData)(0x28U)))))
               : 0U)][(0x3fU & ((IData)(0x3fU) + (0x7ffU 
                                                  & VL_MODDIV_III(11, (IData)(vlSelf->color__DOT__pixel_number), (IData)(0x28U)))))];
        vlSelf->color__DOT__data_out[1U][0U] = vlSelf->color__DOT__input_memory__DOT__mem
            [((0x1dU >= (0x1fU & VL_DIV_III(11, (IData)(vlSelf->color__DOT__pixel_number), (IData)(0x28U))))
               ? (0x1fU & VL_DIV_III(11, (IData)(vlSelf->color__DOT__pixel_number), (IData)(0x28U)))
               : 0U)][(0x3fU & ((IData)(0x3fU) + (0x7ffU 
                                                  & VL_MODDIV_III(11, (IData)(vlSelf->color__DOT__pixel_number), (IData)(0x28U)))))];
        vlSelf->color__DOT__data_out[2U][0U] = vlSelf->color__DOT__input_memory__DOT__mem
            [((0x1dU >= (0x1fU & ((IData)(1U) + (0x7ffU 
                                                 & VL_DIV_III(11, (IData)(vlSelf->color__DOT__pixel_number), (IData)(0x28U))))))
               ? (0x1fU & ((IData)(1U) + (0x7ffU & 
                                          VL_DIV_III(11, (IData)(vlSelf->color__DOT__pixel_number), (IData)(0x28U)))))
               : 0U)][(0x3fU & ((IData)(0x3fU) + (0x7ffU 
                                                  & VL_MODDIV_III(11, (IData)(vlSelf->color__DOT__pixel_number), (IData)(0x28U)))))];
    } else {
        vlSelf->color__DOT__data_out[0U][0U] = 0U;
        vlSelf->color__DOT__data_out[1U][0U] = 0U;
        vlSelf->color__DOT__data_out[2U][0U] = 0U;
    }
    if ((0x27U >= (0x3fU & VL_MODDIV_III(11, (IData)(vlSelf->color__DOT__pixel_number), (IData)(0x28U))))) {
        vlSelf->color__DOT__data_out[0U][1U] = vlSelf->color__DOT__input_memory__DOT__mem
            [((0x1dU >= (0x1fU & ((IData)(0x1fU) + 
                                  (0x7ffU & VL_DIV_III(11, (IData)(vlSelf->color__DOT__pixel_number), (IData)(0x28U))))))
               ? (0x1fU & ((IData)(0x1fU) + (0x7ffU 
                                             & VL_DIV_III(11, (IData)(vlSelf->color__DOT__pixel_number), (IData)(0x28U)))))
               : 0U)][(0x3fU & VL_MODDIV_III(11, (IData)(vlSelf->color__DOT__pixel_number), (IData)(0x28U)))];
        vlSelf->color__DOT__data_out[1U][1U] = vlSelf->color__DOT__input_memory__DOT__mem
            [((0x1dU >= (0x1fU & VL_DIV_III(11, (IData)(vlSelf->color__DOT__pixel_number), (IData)(0x28U))))
               ? (0x1fU & VL_DIV_III(11, (IData)(vlSelf->color__DOT__pixel_number), (IData)(0x28U)))
               : 0U)][(0x3fU & VL_MODDIV_III(11, (IData)(vlSelf->color__DOT__pixel_number), (IData)(0x28U)))];
        vlSelf->color__DOT__data_out[2U][1U] = vlSelf->color__DOT__input_memory__DOT__mem
            [((0x1dU >= (0x1fU & ((IData)(1U) + (0x7ffU 
                                                 & VL_DIV_III(11, (IData)(vlSelf->color__DOT__pixel_number), (IData)(0x28U))))))
               ? (0x1fU & ((IData)(1U) + (0x7ffU & 
                                          VL_DIV_III(11, (IData)(vlSelf->color__DOT__pixel_number), (IData)(0x28U)))))
               : 0U)][(0x3fU & VL_MODDIV_III(11, (IData)(vlSelf->color__DOT__pixel_number), (IData)(0x28U)))];
    } else {
        vlSelf->color__DOT__data_out[0U][1U] = 0U;
        vlSelf->color__DOT__data_out[1U][1U] = 0U;
        vlSelf->color__DOT__data_out[2U][1U] = 0U;
    }
    if ((0x27U >= (0x3fU & ((IData)(1U) + (0x7ffU & 
                                           VL_MODDIV_III(11, (IData)(vlSelf->color__DOT__pixel_number), (IData)(0x28U))))))) {
        vlSelf->color__DOT__data_out[0U][2U] = vlSelf->color__DOT__input_memory__DOT__mem
            [((0x1dU >= (0x1fU & ((IData)(0x1fU) + 
                                  (0x7ffU & VL_DIV_III(11, (IData)(vlSelf->color__DOT__pixel_number), (IData)(0x28U))))))
               ? (0x1fU & ((IData)(0x1fU) + (0x7ffU 
                                             & VL_DIV_III(11, (IData)(vlSelf->color__DOT__pixel_number), (IData)(0x28U)))))
               : 0U)][(0x3fU & ((IData)(1U) + (0x7ffU 
                                               & VL_MODDIV_III(11, (IData)(vlSelf->color__DOT__pixel_number), (IData)(0x28U)))))];
        vlSelf->color__DOT__data_out[1U][2U] = vlSelf->color__DOT__input_memory__DOT__mem
            [((0x1dU >= (0x1fU & VL_DIV_III(11, (IData)(vlSelf->color__DOT__pixel_number), (IData)(0x28U))))
               ? (0x1fU & VL_DIV_III(11, (IData)(vlSelf->color__DOT__pixel_number), (IData)(0x28U)))
               : 0U)][(0x3fU & ((IData)(1U) + (0x7ffU 
                                               & VL_MODDIV_III(11, (IData)(vlSelf->color__DOT__pixel_number), (IData)(0x28U)))))];
        vlSelf->color__DOT__data_out[2U][2U] = vlSelf->color__DOT__input_memory__DOT__mem
            [((0x1dU >= (0x1fU & ((IData)(1U) + (0x7ffU 
                                                 & VL_DIV_III(11, (IData)(vlSelf->color__DOT__pixel_number), (IData)(0x28U))))))
               ? (0x1fU & ((IData)(1U) + (0x7ffU & 
                                          VL_DIV_III(11, (IData)(vlSelf->color__DOT__pixel_number), (IData)(0x28U)))))
               : 0U)][(0x3fU & ((IData)(1U) + (0x7ffU 
                                               & VL_MODDIV_III(11, (IData)(vlSelf->color__DOT__pixel_number), (IData)(0x28U)))))];
    } else {
        vlSelf->color__DOT__data_out[0U][2U] = 0U;
        vlSelf->color__DOT__data_out[1U][2U] = 0U;
        vlSelf->color__DOT__data_out[2U][2U] = 0U;
    }
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
        vlSelf->color__DOT__green = (0xffU & ((((vlSelf->color__DOT__filter3x3__DOT__pixels
                                                 [1U]
                                                 [2U] 
                                                 + 
                                                 vlSelf->color__DOT__filter3x3__DOT__pixels
                                                 [2U]
                                                 [1U]) 
                                                + vlSelf->color__DOT__filter3x3__DOT__pixels
                                                [0U]
                                                [1U]) 
                                               + vlSelf->color__DOT__filter3x3__DOT__pixels
                                               [1U]
                                               [0U]) 
                                              >> 2U));
        vlSelf->color__DOT__red = vlSelf->color__DOT__filter3x3__DOT__pixels
            [1U][1U];
        vlSelf->color__DOT__blue = (0xffU & ((((vlSelf->color__DOT__filter3x3__DOT__pixels
                                                [2U]
                                                [2U] 
                                                + vlSelf->color__DOT__filter3x3__DOT__pixels
                                                [2U]
                                                [0U]) 
                                               + vlSelf->color__DOT__filter3x3__DOT__pixels
                                               [0U]
                                               [2U]) 
                                              + vlSelf->color__DOT__filter3x3__DOT__pixels
                                              [0U][0U]) 
                                             >> 2U));
    } else if ((1U == vlSelf->color__DOT__col)) {
        vlSelf->color__DOT__green = (0xffU & ((((vlSelf->color__DOT__filter3x3__DOT__pixels
                                                 [1U]
                                                 [2U] 
                                                 + 
                                                 vlSelf->color__DOT__filter3x3__DOT__pixels
                                                 [2U]
                                                 [1U]) 
                                                + vlSelf->color__DOT__filter3x3__DOT__pixels
                                                [0U]
                                                [1U]) 
                                               + vlSelf->color__DOT__filter3x3__DOT__pixels
                                               [1U]
                                               [0U]) 
                                              >> 2U));
        vlSelf->color__DOT__red = (0xffU & ((((vlSelf->color__DOT__filter3x3__DOT__pixels
                                               [2U]
                                               [2U] 
                                               + vlSelf->color__DOT__filter3x3__DOT__pixels
                                               [2U]
                                               [0U]) 
                                              + vlSelf->color__DOT__filter3x3__DOT__pixels
                                              [0U][2U]) 
                                             + vlSelf->color__DOT__filter3x3__DOT__pixels
                                             [0U][0U]) 
                                            >> 2U));
        vlSelf->color__DOT__blue = vlSelf->color__DOT__filter3x3__DOT__pixels
            [1U][1U];
    } else if ((2U == vlSelf->color__DOT__col)) {
        vlSelf->color__DOT__green = vlSelf->color__DOT__filter3x3__DOT__pixels
            [1U][1U];
        vlSelf->color__DOT__red = (0xffU & ((vlSelf->color__DOT__filter3x3__DOT__pixels
                                             [1U][2U] 
                                             + vlSelf->color__DOT__filter3x3__DOT__pixels
                                             [1U][0U]) 
                                            >> 1U));
        vlSelf->color__DOT__blue = (0xffU & ((vlSelf->color__DOT__filter3x3__DOT__pixels
                                              [2U][1U] 
                                              + vlSelf->color__DOT__filter3x3__DOT__pixels
                                              [0U][1U]) 
                                             >> 1U));
    } else if ((3U == vlSelf->color__DOT__col)) {
        vlSelf->color__DOT__green = vlSelf->color__DOT__filter3x3__DOT__pixels
            [1U][1U];
        vlSelf->color__DOT__red = (0xffU & ((vlSelf->color__DOT__filter3x3__DOT__pixels
                                             [2U][1U] 
                                             + vlSelf->color__DOT__filter3x3__DOT__pixels
                                             [0U][1U]) 
                                            >> 1U));
        vlSelf->color__DOT__blue = (0xffU & ((vlSelf->color__DOT__filter3x3__DOT__pixels
                                              [1U][2U] 
                                              + vlSelf->color__DOT__filter3x3__DOT__pixels
                                              [1U][0U]) 
                                             >> 1U));
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
                    VL_FATAL_MT("color.sv", 144, "", "Active region did not converge.");
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
                VL_FATAL_MT("color.sv", 144, "", "NBA region did not converge.");
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
