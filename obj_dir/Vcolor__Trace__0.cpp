// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcolor__Syms.h"


void Vcolor___024root__trace_chg_sub_0(Vcolor___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcolor___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcolor___024root__trace_chg_top_0\n"); );
    // Init
    Vcolor___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcolor___024root*>(voidSelf);
    Vcolor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcolor___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vcolor___024root__trace_chg_sub_0(Vcolor___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcolor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcolor___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgSData(oldp+0,(vlSelf->color__DOT__pixel_number),11);
        bufp->chgCData(oldp+1,((0x3fU & VL_MODDIV_III(11, (IData)(vlSelf->color__DOT__pixel_number), (IData)(0x28U)))),6);
        bufp->chgCData(oldp+2,((0x1fU & VL_DIV_III(11, (IData)(vlSelf->color__DOT__pixel_number), (IData)(0x28U)))),5);
        bufp->chgCData(oldp+3,(vlSelf->color__DOT__data_out
                               [0U][0U]),8);
        bufp->chgCData(oldp+4,(vlSelf->color__DOT__data_out
                               [0U][1U]),8);
        bufp->chgCData(oldp+5,(vlSelf->color__DOT__data_out
                               [0U][2U]),8);
        bufp->chgCData(oldp+6,(vlSelf->color__DOT__data_out
                               [1U][0U]),8);
        bufp->chgCData(oldp+7,(vlSelf->color__DOT__data_out
                               [1U][1U]),8);
        bufp->chgCData(oldp+8,(vlSelf->color__DOT__data_out
                               [1U][2U]),8);
        bufp->chgCData(oldp+9,(vlSelf->color__DOT__data_out
                               [2U][0U]),8);
        bufp->chgCData(oldp+10,(vlSelf->color__DOT__data_out
                                [2U][1U]),8);
        bufp->chgCData(oldp+11,(vlSelf->color__DOT__data_out
                                [2U][2U]),8);
        bufp->chgIData(oldp+12,(vlSelf->color__DOT__lateral),32);
        bufp->chgIData(oldp+13,(vlSelf->color__DOT__vertical),32);
        bufp->chgIData(oldp+14,(vlSelf->color__DOT__col),32);
        bufp->chgCData(oldp+15,(vlSelf->color__DOT__red),8);
        bufp->chgCData(oldp+16,(vlSelf->color__DOT__green),8);
        bufp->chgCData(oldp+17,(vlSelf->color__DOT__blue),8);
        bufp->chgCData(oldp+18,(vlSelf->color__DOT__filter3x3__DOT__pixels
                                [0U][0U]),8);
        bufp->chgCData(oldp+19,(vlSelf->color__DOT__filter3x3__DOT__pixels
                                [0U][1U]),8);
        bufp->chgCData(oldp+20,(vlSelf->color__DOT__filter3x3__DOT__pixels
                                [0U][2U]),8);
        bufp->chgCData(oldp+21,(vlSelf->color__DOT__filter3x3__DOT__pixels
                                [1U][0U]),8);
        bufp->chgCData(oldp+22,(vlSelf->color__DOT__filter3x3__DOT__pixels
                                [1U][1U]),8);
        bufp->chgCData(oldp+23,(vlSelf->color__DOT__filter3x3__DOT__pixels
                                [1U][2U]),8);
        bufp->chgCData(oldp+24,(vlSelf->color__DOT__filter3x3__DOT__pixels
                                [2U][0U]),8);
        bufp->chgCData(oldp+25,(vlSelf->color__DOT__filter3x3__DOT__pixels
                                [2U][1U]),8);
        bufp->chgCData(oldp+26,(vlSelf->color__DOT__filter3x3__DOT__pixels
                                [2U][2U]),8);
        bufp->chgCData(oldp+27,(vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                                [0U][0U]),8);
        bufp->chgCData(oldp+28,(vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                                [0U][1U]),8);
        bufp->chgCData(oldp+29,(vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                                [0U][2U]),8);
        bufp->chgCData(oldp+30,(vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                                [1U][0U]),8);
        bufp->chgCData(oldp+31,(vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                                [1U][1U]),8);
        bufp->chgCData(oldp+32,(vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                                [1U][2U]),8);
        bufp->chgCData(oldp+33,(vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                                [2U][0U]),8);
        bufp->chgCData(oldp+34,(vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                                [2U][1U]),8);
        bufp->chgCData(oldp+35,(vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                                [2U][2U]),8);
    }
    bufp->chgBit(oldp+36,(vlSelf->clk));
    bufp->chgBit(oldp+37,(vlSelf->reset));
}

void Vcolor___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcolor___024root__trace_cleanup\n"); );
    // Init
    Vcolor___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcolor___024root*>(voidSelf);
    Vcolor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
