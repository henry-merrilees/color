// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcolor__Syms.h"


VL_ATTR_COLD void Vcolor___024root__trace_init_sub__TOP__0(Vcolor___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcolor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcolor___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+35,"clk", false,-1);
    tracep->declBit(c+36,"reset", false,-1);
    tracep->pushNamePrefix("color ");
    tracep->declBit(c+35,"clk", false,-1);
    tracep->declBit(c+36,"reset", false,-1);
    tracep->declBus(c+1,"address", false,-1, 10,0);
    tracep->declBus(c+2,"address_x", false,-1, 5,0);
    tracep->declBus(c+3,"address_y", false,-1, 4,0);
    tracep->pushNamePrefix("data_out");
    tracep->pushNamePrefix("[-1]");
    tracep->declBus(c+4,"[-1]", false,-1, 7,0);
    tracep->declBus(c+5,"[0]", false,-1, 7,0);
    tracep->declBus(c+6,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+7,"[-1]", false,-1, 7,0);
    tracep->declBus(c+8,"[0]", false,-1, 7,0);
    tracep->declBus(c+9,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+10,"[-1]", false,-1, 7,0);
    tracep->declBus(c+11,"[0]", false,-1, 7,0);
    tracep->declBus(c+12,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+13,"lateral", false,-1, 31,0);
    tracep->declBus(c+14,"vertical", false,-1, 31,0);
    tracep->declBus(c+15,"col", false,-1, 31,0);
    tracep->declBus(c+16,"pixel_out", false,-1, 31,0);
    tracep->pushNamePrefix("filter3x3 ");
    tracep->pushNamePrefix("pixels_in");
    tracep->pushNamePrefix("[-1]");
    tracep->declBus(c+4,"[-1]", false,-1, 7,0);
    tracep->declBus(c+5,"[0]", false,-1, 7,0);
    tracep->declBus(c+6,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+7,"[-1]", false,-1, 7,0);
    tracep->declBus(c+8,"[0]", false,-1, 7,0);
    tracep->declBus(c+9,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+10,"[-1]", false,-1, 7,0);
    tracep->declBus(c+11,"[0]", false,-1, 7,0);
    tracep->declBus(c+12,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+13,"lateral", false,-1, 31,0);
    tracep->declBus(c+14,"vertical", false,-1, 31,0);
    tracep->declBus(c+15,"color", false,-1, 31,0);
    tracep->declBus(c+16,"pixel_out", false,-1, 31,0);
    tracep->pushNamePrefix("pixels");
    tracep->pushNamePrefix("[-1]");
    tracep->declBus(c+17,"[-1]", false,-1, 7,0);
    tracep->declBus(c+18,"[0]", false,-1, 7,0);
    tracep->declBus(c+19,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+20,"[-1]", false,-1, 7,0);
    tracep->declBus(c+21,"[0]", false,-1, 7,0);
    tracep->declBus(c+22,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+23,"[-1]", false,-1, 7,0);
    tracep->declBus(c+24,"[0]", false,-1, 7,0);
    tracep->declBus(c+25,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("edge_handler ");
    tracep->pushNamePrefix("pixels_in");
    tracep->pushNamePrefix("[-1]");
    tracep->declBus(c+4,"[-1]", false,-1, 7,0);
    tracep->declBus(c+5,"[0]", false,-1, 7,0);
    tracep->declBus(c+6,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+7,"[-1]", false,-1, 7,0);
    tracep->declBus(c+8,"[0]", false,-1, 7,0);
    tracep->declBus(c+9,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+10,"[-1]", false,-1, 7,0);
    tracep->declBus(c+11,"[0]", false,-1, 7,0);
    tracep->declBus(c+12,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+13,"lateral", false,-1, 31,0);
    tracep->declBus(c+14,"vertical", false,-1, 31,0);
    tracep->pushNamePrefix("pixels_out");
    tracep->pushNamePrefix("[-1]");
    tracep->declBus(c+17,"[-1]", false,-1, 7,0);
    tracep->declBus(c+18,"[0]", false,-1, 7,0);
    tracep->declBus(c+19,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+20,"[-1]", false,-1, 7,0);
    tracep->declBus(c+21,"[0]", false,-1, 7,0);
    tracep->declBus(c+22,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+23,"[-1]", false,-1, 7,0);
    tracep->declBus(c+24,"[0]", false,-1, 7,0);
    tracep->declBus(c+25,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("horizontally_extended");
    tracep->pushNamePrefix("[-1]");
    tracep->declBus(c+26,"[-1]", false,-1, 7,0);
    tracep->declBus(c+27,"[0]", false,-1, 7,0);
    tracep->declBus(c+28,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+29,"[-1]", false,-1, 7,0);
    tracep->declBus(c+30,"[0]", false,-1, 7,0);
    tracep->declBus(c+31,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+32,"[-1]", false,-1, 7,0);
    tracep->declBus(c+33,"[0]", false,-1, 7,0);
    tracep->declBus(c+34,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("input_memory ");
    tracep->declBus(c+1,"address", false,-1, 10,0);
    tracep->pushNamePrefix("data_out");
    tracep->pushNamePrefix("[-1]");
    tracep->declBus(c+4,"[-1]", false,-1, 7,0);
    tracep->declBus(c+5,"[0]", false,-1, 7,0);
    tracep->declBus(c+6,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+7,"[-1]", false,-1, 7,0);
    tracep->declBus(c+8,"[0]", false,-1, 7,0);
    tracep->declBus(c+9,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+10,"[-1]", false,-1, 7,0);
    tracep->declBus(c+11,"[0]", false,-1, 7,0);
    tracep->declBus(c+12,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vcolor___024root__trace_init_top(Vcolor___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcolor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcolor___024root__trace_init_top\n"); );
    // Body
    Vcolor___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcolor___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcolor___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcolor___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcolor___024root__trace_register(Vcolor___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcolor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcolor___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vcolor___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vcolor___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vcolor___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcolor___024root__trace_full_sub_0(Vcolor___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcolor___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcolor___024root__trace_full_top_0\n"); );
    // Init
    Vcolor___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcolor___024root*>(voidSelf);
    Vcolor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcolor___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcolor___024root__trace_full_sub_0(Vcolor___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcolor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcolor___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+1,(vlSelf->color__DOT__address),11);
    bufp->fullCData(oldp+2,((0x3fU & VL_MODDIV_III(11, (IData)(vlSelf->color__DOT__address), (IData)(0x28U)))),6);
    bufp->fullCData(oldp+3,((0x1fU & VL_DIV_III(11, (IData)(vlSelf->color__DOT__address), (IData)(0x28U)))),5);
    bufp->fullCData(oldp+4,(vlSelf->color__DOT__data_out
                            [0U][0U]),8);
    bufp->fullCData(oldp+5,(vlSelf->color__DOT__data_out
                            [0U][1U]),8);
    bufp->fullCData(oldp+6,(vlSelf->color__DOT__data_out
                            [0U][2U]),8);
    bufp->fullCData(oldp+7,(vlSelf->color__DOT__data_out
                            [1U][0U]),8);
    bufp->fullCData(oldp+8,(vlSelf->color__DOT__data_out
                            [1U][1U]),8);
    bufp->fullCData(oldp+9,(vlSelf->color__DOT__data_out
                            [1U][2U]),8);
    bufp->fullCData(oldp+10,(vlSelf->color__DOT__data_out
                             [2U][0U]),8);
    bufp->fullCData(oldp+11,(vlSelf->color__DOT__data_out
                             [2U][1U]),8);
    bufp->fullCData(oldp+12,(vlSelf->color__DOT__data_out
                             [2U][2U]),8);
    bufp->fullIData(oldp+13,(vlSelf->color__DOT__lateral),32);
    bufp->fullIData(oldp+14,(vlSelf->color__DOT__vertical),32);
    bufp->fullIData(oldp+15,(vlSelf->color__DOT__col),32);
    bufp->fullIData(oldp+16,(vlSelf->color__DOT__pixel_out),32);
    bufp->fullCData(oldp+17,(vlSelf->color__DOT__filter3x3__DOT__pixels
                             [0U][0U]),8);
    bufp->fullCData(oldp+18,(vlSelf->color__DOT__filter3x3__DOT__pixels
                             [0U][1U]),8);
    bufp->fullCData(oldp+19,(vlSelf->color__DOT__filter3x3__DOT__pixels
                             [0U][2U]),8);
    bufp->fullCData(oldp+20,(vlSelf->color__DOT__filter3x3__DOT__pixels
                             [1U][0U]),8);
    bufp->fullCData(oldp+21,(vlSelf->color__DOT__filter3x3__DOT__pixels
                             [1U][1U]),8);
    bufp->fullCData(oldp+22,(vlSelf->color__DOT__filter3x3__DOT__pixels
                             [1U][2U]),8);
    bufp->fullCData(oldp+23,(vlSelf->color__DOT__filter3x3__DOT__pixels
                             [2U][0U]),8);
    bufp->fullCData(oldp+24,(vlSelf->color__DOT__filter3x3__DOT__pixels
                             [2U][1U]),8);
    bufp->fullCData(oldp+25,(vlSelf->color__DOT__filter3x3__DOT__pixels
                             [2U][2U]),8);
    bufp->fullCData(oldp+26,(vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                             [0U][0U]),8);
    bufp->fullCData(oldp+27,(vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                             [0U][1U]),8);
    bufp->fullCData(oldp+28,(vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                             [0U][2U]),8);
    bufp->fullCData(oldp+29,(vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                             [1U][0U]),8);
    bufp->fullCData(oldp+30,(vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                             [1U][1U]),8);
    bufp->fullCData(oldp+31,(vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                             [1U][2U]),8);
    bufp->fullCData(oldp+32,(vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                             [2U][0U]),8);
    bufp->fullCData(oldp+33,(vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                             [2U][1U]),8);
    bufp->fullCData(oldp+34,(vlSelf->color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                             [2U][2U]),8);
    bufp->fullBit(oldp+35,(vlSelf->clk));
    bufp->fullBit(oldp+36,(vlSelf->reset));
}
