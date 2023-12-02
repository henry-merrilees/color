// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcolor.h for the primary calling header

#include "verilated.h"

#include "Vcolor__Syms.h"
#include "Vcolor___024root.h"

VL_ATTR_COLD void Vcolor___024root___eval_static(Vcolor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcolor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcolor___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vcolor___024root___eval_initial__TOP(Vcolor___024root* vlSelf);

VL_ATTR_COLD void Vcolor___024root___eval_initial(Vcolor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcolor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcolor___024root___eval_initial\n"); );
    // Body
    Vcolor___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void Vcolor___024root___eval_initial__TOP(Vcolor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcolor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcolor___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    vlSelf->color__DOT__pixel_out = (0xffU | vlSelf->color__DOT__pixel_out);
    __Vtemp_1[0U] = 0x2e6d656dU;
    __Vtemp_1[1U] = 0x6d616765U;
    __Vtemp_1[2U] = 0x74652f69U;
    __Vtemp_1[3U] = 0x737461U;
    VL_READMEM_N(true, 8, 1200, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_1)
                 ,  &(vlSelf->color__DOT__input_memory__DOT__mem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vcolor___024root___eval_final(Vcolor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcolor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcolor___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vcolor___024root___eval_triggers__stl(Vcolor___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcolor___024root___dump_triggers__stl(Vcolor___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vcolor___024root___eval_stl(Vcolor___024root* vlSelf);

VL_ATTR_COLD void Vcolor___024root___eval_settle(Vcolor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcolor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcolor___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vcolor___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vcolor___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("color.sv", 152, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vcolor___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcolor___024root___dump_triggers__stl(Vcolor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcolor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcolor___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcolor___024root___stl_sequent__TOP__0(Vcolor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcolor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcolor___024root___stl_sequent__TOP__0\n"); );
    // Body
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

VL_ATTR_COLD void Vcolor___024root___eval_stl(Vcolor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcolor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcolor___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vcolor___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcolor___024root___dump_triggers__act(Vcolor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcolor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcolor___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcolor___024root___dump_triggers__nba(Vcolor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcolor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcolor___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcolor___024root___ctor_var_reset(Vcolor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcolor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcolor___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1200; ++__Vi0) {
        vlSelf->color__DOT__channels[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->color__DOT__address = VL_RAND_RESET_I(11);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->color__DOT__data_out[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    vlSelf->color__DOT__lateral = 0;
    vlSelf->color__DOT__vertical = 0;
    vlSelf->color__DOT__col = 0;
    vlSelf->color__DOT__pixel_out = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1200; ++__Vi0) {
        vlSelf->color__DOT__input_memory__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->color__DOT__filter3x3__DOT__pixels[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
