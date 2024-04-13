// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBuffer.h for the primary calling header

#include "verilated.h"

#include "VBuffer__Syms.h"
#include "VBuffer___024root.h"

VL_ATTR_COLD void VBuffer___024root___settle__TOP__0(VBuffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBuffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBuffer___024root___settle__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->__Vcellinp__Buffer__reset_n_i) 
         ^ (IData)(vlSelf->Buffer__DOT____Vtogcov__reset_n_i))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->Buffer__DOT____Vtogcov__reset_n_i = vlSelf->__Vcellinp__Buffer__reset_n_i;
    }
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__Buffer__clk_i, vlSelf->clk_i);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__Buffer__reset_n_i, vlSelf->reset_n_i);
    VL_ASSIGN_ISI(32,vlSelf->__Vcellinp__Buffer__data_i, vlSelf->data_i);
    VL_ASSIGN_SII(32,vlSelf->data_o, vlSelf->Buffer__DOT__data);
    if ((1U & (vlSelf->Buffer__DOT__data ^ vlSelf->Buffer__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->Buffer__DOT____Vtogcov__data_o = ((0xfffffffeU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_o) 
                                                  | (1U 
                                                     & vlSelf->Buffer__DOT__data));
    }
    if ((2U & (vlSelf->Buffer__DOT__data ^ vlSelf->Buffer__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->Buffer__DOT____Vtogcov__data_o = ((0xfffffffdU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_o) 
                                                  | (2U 
                                                     & vlSelf->Buffer__DOT__data));
    }
    if ((4U & (vlSelf->Buffer__DOT__data ^ vlSelf->Buffer__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->Buffer__DOT____Vtogcov__data_o = ((0xfffffffbU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_o) 
                                                  | (4U 
                                                     & vlSelf->Buffer__DOT__data));
    }
    if ((8U & (vlSelf->Buffer__DOT__data ^ vlSelf->Buffer__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->Buffer__DOT____Vtogcov__data_o = ((0xfffffff7U 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_o) 
                                                  | (8U 
                                                     & vlSelf->Buffer__DOT__data));
    }
    if ((0x10U & (vlSelf->Buffer__DOT__data ^ vlSelf->Buffer__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->Buffer__DOT____Vtogcov__data_o = ((0xffffffefU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_o) 
                                                  | (0x10U 
                                                     & vlSelf->Buffer__DOT__data));
    }
    if ((0x20U & (vlSelf->Buffer__DOT__data ^ vlSelf->Buffer__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->Buffer__DOT____Vtogcov__data_o = ((0xffffffdfU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_o) 
                                                  | (0x20U 
                                                     & vlSelf->Buffer__DOT__data));
    }
    if ((0x40U & (vlSelf->Buffer__DOT__data ^ vlSelf->Buffer__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->Buffer__DOT____Vtogcov__data_o = ((0xffffffbfU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_o) 
                                                  | (0x40U 
                                                     & vlSelf->Buffer__DOT__data));
    }
    if ((0x80U & (vlSelf->Buffer__DOT__data ^ vlSelf->Buffer__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->Buffer__DOT____Vtogcov__data_o = ((0xffffff7fU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_o) 
                                                  | (0x80U 
                                                     & vlSelf->Buffer__DOT__data));
    }
    if ((0x100U & (vlSelf->Buffer__DOT__data ^ vlSelf->Buffer__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->Buffer__DOT____Vtogcov__data_o = ((0xfffffeffU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_o) 
                                                  | (0x100U 
                                                     & vlSelf->Buffer__DOT__data));
    }
    if ((0x200U & (vlSelf->Buffer__DOT__data ^ vlSelf->Buffer__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->Buffer__DOT____Vtogcov__data_o = ((0xfffffdffU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_o) 
                                                  | (0x200U 
                                                     & vlSelf->Buffer__DOT__data));
    }
    if ((0x400U & (vlSelf->Buffer__DOT__data ^ vlSelf->Buffer__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->Buffer__DOT____Vtogcov__data_o = ((0xfffffbffU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_o) 
                                                  | (0x400U 
                                                     & vlSelf->Buffer__DOT__data));
    }
    if ((0x800U & (vlSelf->Buffer__DOT__data ^ vlSelf->Buffer__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->Buffer__DOT____Vtogcov__data_o = ((0xfffff7ffU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_o) 
                                                  | (0x800U 
                                                     & vlSelf->Buffer__DOT__data));
    }
    if ((0x1000U & (vlSelf->Buffer__DOT__data ^ vlSelf->Buffer__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->Buffer__DOT____Vtogcov__data_o = ((0xffffefffU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_o) 
                                                  | (0x1000U 
                                                     & vlSelf->Buffer__DOT__data));
    }
    if ((0x2000U & (vlSelf->Buffer__DOT__data ^ vlSelf->Buffer__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->Buffer__DOT____Vtogcov__data_o = ((0xffffdfffU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_o) 
                                                  | (0x2000U 
                                                     & vlSelf->Buffer__DOT__data));
    }
    if ((0x4000U & (vlSelf->Buffer__DOT__data ^ vlSelf->Buffer__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->Buffer__DOT____Vtogcov__data_o = ((0xffffbfffU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_o) 
                                                  | (0x4000U 
                                                     & vlSelf->Buffer__DOT__data));
    }
    if ((0x8000U & (vlSelf->Buffer__DOT__data ^ vlSelf->Buffer__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->Buffer__DOT____Vtogcov__data_o = ((0xffff7fffU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_o) 
                                                  | (0x8000U 
                                                     & vlSelf->Buffer__DOT__data));
    }
    if ((0x10000U & (vlSelf->Buffer__DOT__data ^ vlSelf->Buffer__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->Buffer__DOT____Vtogcov__data_o = ((0xfffeffffU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_o) 
                                                  | (0x10000U 
                                                     & vlSelf->Buffer__DOT__data));
    }
    if ((0x20000U & (vlSelf->Buffer__DOT__data ^ vlSelf->Buffer__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->Buffer__DOT____Vtogcov__data_o = ((0xfffdffffU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_o) 
                                                  | (0x20000U 
                                                     & vlSelf->Buffer__DOT__data));
    }
    if ((0x40000U & (vlSelf->Buffer__DOT__data ^ vlSelf->Buffer__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->Buffer__DOT____Vtogcov__data_o = ((0xfffbffffU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_o) 
                                                  | (0x40000U 
                                                     & vlSelf->Buffer__DOT__data));
    }
    if ((0x80000U & (vlSelf->Buffer__DOT__data ^ vlSelf->Buffer__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->Buffer__DOT____Vtogcov__data_o = ((0xfff7ffffU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_o) 
                                                  | (0x80000U 
                                                     & vlSelf->Buffer__DOT__data));
    }
    if ((0x100000U & (vlSelf->Buffer__DOT__data ^ vlSelf->Buffer__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->Buffer__DOT____Vtogcov__data_o = ((0xffefffffU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_o) 
                                                  | (0x100000U 
                                                     & vlSelf->Buffer__DOT__data));
    }
    if ((0x200000U & (vlSelf->Buffer__DOT__data ^ vlSelf->Buffer__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->Buffer__DOT____Vtogcov__data_o = ((0xffdfffffU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_o) 
                                                  | (0x200000U 
                                                     & vlSelf->Buffer__DOT__data));
    }
    if ((0x400000U & (vlSelf->Buffer__DOT__data ^ vlSelf->Buffer__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->Buffer__DOT____Vtogcov__data_o = ((0xffbfffffU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_o) 
                                                  | (0x400000U 
                                                     & vlSelf->Buffer__DOT__data));
    }
    if ((0x800000U & (vlSelf->Buffer__DOT__data ^ vlSelf->Buffer__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->Buffer__DOT____Vtogcov__data_o = ((0xff7fffffU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_o) 
                                                  | (0x800000U 
                                                     & vlSelf->Buffer__DOT__data));
    }
    if ((0x1000000U & (vlSelf->Buffer__DOT__data ^ vlSelf->Buffer__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->Buffer__DOT____Vtogcov__data_o = ((0xfeffffffU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_o) 
                                                  | (0x1000000U 
                                                     & vlSelf->Buffer__DOT__data));
    }
    if ((0x2000000U & (vlSelf->Buffer__DOT__data ^ vlSelf->Buffer__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->Buffer__DOT____Vtogcov__data_o = ((0xfdffffffU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_o) 
                                                  | (0x2000000U 
                                                     & vlSelf->Buffer__DOT__data));
    }
    if ((0x4000000U & (vlSelf->Buffer__DOT__data ^ vlSelf->Buffer__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->Buffer__DOT____Vtogcov__data_o = ((0xfbffffffU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_o) 
                                                  | (0x4000000U 
                                                     & vlSelf->Buffer__DOT__data));
    }
    if ((0x8000000U & (vlSelf->Buffer__DOT__data ^ vlSelf->Buffer__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->Buffer__DOT____Vtogcov__data_o = ((0xf7ffffffU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_o) 
                                                  | (0x8000000U 
                                                     & vlSelf->Buffer__DOT__data));
    }
    if ((0x10000000U & (vlSelf->Buffer__DOT__data ^ vlSelf->Buffer__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->Buffer__DOT____Vtogcov__data_o = ((0xefffffffU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_o) 
                                                  | (0x10000000U 
                                                     & vlSelf->Buffer__DOT__data));
    }
    if ((0x20000000U & (vlSelf->Buffer__DOT__data ^ vlSelf->Buffer__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->Buffer__DOT____Vtogcov__data_o = ((0xdfffffffU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_o) 
                                                  | (0x20000000U 
                                                     & vlSelf->Buffer__DOT__data));
    }
    if ((0x40000000U & (vlSelf->Buffer__DOT__data ^ vlSelf->Buffer__DOT____Vtogcov__data_o))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->Buffer__DOT____Vtogcov__data_o = ((0xbfffffffU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_o) 
                                                  | (0x40000000U 
                                                     & vlSelf->Buffer__DOT__data));
    }
    if (((vlSelf->Buffer__DOT__data ^ vlSelf->Buffer__DOT____Vtogcov__data_o) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->Buffer__DOT____Vtogcov__data_o = ((0x7fffffffU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_o) 
                                                  | (0x80000000U 
                                                     & vlSelf->Buffer__DOT__data));
    }
    if (((IData)(vlSelf->__Vcellinp__Buffer__clk_i) 
         ^ (IData)(vlSelf->Buffer__DOT____Vtogcov__clk_i))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->Buffer__DOT____Vtogcov__clk_i = vlSelf->__Vcellinp__Buffer__clk_i;
    }
    if ((1U & (vlSelf->__Vcellinp__Buffer__data_i ^ vlSelf->Buffer__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->Buffer__DOT____Vtogcov__data_i = ((0xfffffffeU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_i) 
                                                  | (1U 
                                                     & vlSelf->__Vcellinp__Buffer__data_i));
    }
    if ((2U & (vlSelf->__Vcellinp__Buffer__data_i ^ vlSelf->Buffer__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->Buffer__DOT____Vtogcov__data_i = ((0xfffffffdU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_i) 
                                                  | (2U 
                                                     & vlSelf->__Vcellinp__Buffer__data_i));
    }
    if ((4U & (vlSelf->__Vcellinp__Buffer__data_i ^ vlSelf->Buffer__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->Buffer__DOT____Vtogcov__data_i = ((0xfffffffbU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_i) 
                                                  | (4U 
                                                     & vlSelf->__Vcellinp__Buffer__data_i));
    }
    if ((8U & (vlSelf->__Vcellinp__Buffer__data_i ^ vlSelf->Buffer__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->Buffer__DOT____Vtogcov__data_i = ((0xfffffff7U 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_i) 
                                                  | (8U 
                                                     & vlSelf->__Vcellinp__Buffer__data_i));
    }
    if ((0x10U & (vlSelf->__Vcellinp__Buffer__data_i 
                  ^ vlSelf->Buffer__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->Buffer__DOT____Vtogcov__data_i = ((0xffffffefU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_i) 
                                                  | (0x10U 
                                                     & vlSelf->__Vcellinp__Buffer__data_i));
    }
    if ((0x20U & (vlSelf->__Vcellinp__Buffer__data_i 
                  ^ vlSelf->Buffer__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->Buffer__DOT____Vtogcov__data_i = ((0xffffffdfU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_i) 
                                                  | (0x20U 
                                                     & vlSelf->__Vcellinp__Buffer__data_i));
    }
    if ((0x40U & (vlSelf->__Vcellinp__Buffer__data_i 
                  ^ vlSelf->Buffer__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->Buffer__DOT____Vtogcov__data_i = ((0xffffffbfU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_i) 
                                                  | (0x40U 
                                                     & vlSelf->__Vcellinp__Buffer__data_i));
    }
    if ((0x80U & (vlSelf->__Vcellinp__Buffer__data_i 
                  ^ vlSelf->Buffer__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->Buffer__DOT____Vtogcov__data_i = ((0xffffff7fU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_i) 
                                                  | (0x80U 
                                                     & vlSelf->__Vcellinp__Buffer__data_i));
    }
    if ((0x100U & (vlSelf->__Vcellinp__Buffer__data_i 
                   ^ vlSelf->Buffer__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->Buffer__DOT____Vtogcov__data_i = ((0xfffffeffU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_i) 
                                                  | (0x100U 
                                                     & vlSelf->__Vcellinp__Buffer__data_i));
    }
    if ((0x200U & (vlSelf->__Vcellinp__Buffer__data_i 
                   ^ vlSelf->Buffer__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->Buffer__DOT____Vtogcov__data_i = ((0xfffffdffU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_i) 
                                                  | (0x200U 
                                                     & vlSelf->__Vcellinp__Buffer__data_i));
    }
    if ((0x400U & (vlSelf->__Vcellinp__Buffer__data_i 
                   ^ vlSelf->Buffer__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->Buffer__DOT____Vtogcov__data_i = ((0xfffffbffU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_i) 
                                                  | (0x400U 
                                                     & vlSelf->__Vcellinp__Buffer__data_i));
    }
    if ((0x800U & (vlSelf->__Vcellinp__Buffer__data_i 
                   ^ vlSelf->Buffer__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->Buffer__DOT____Vtogcov__data_i = ((0xfffff7ffU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_i) 
                                                  | (0x800U 
                                                     & vlSelf->__Vcellinp__Buffer__data_i));
    }
    if ((0x1000U & (vlSelf->__Vcellinp__Buffer__data_i 
                    ^ vlSelf->Buffer__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->Buffer__DOT____Vtogcov__data_i = ((0xffffefffU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_i) 
                                                  | (0x1000U 
                                                     & vlSelf->__Vcellinp__Buffer__data_i));
    }
    if ((0x2000U & (vlSelf->__Vcellinp__Buffer__data_i 
                    ^ vlSelf->Buffer__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->Buffer__DOT____Vtogcov__data_i = ((0xffffdfffU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_i) 
                                                  | (0x2000U 
                                                     & vlSelf->__Vcellinp__Buffer__data_i));
    }
    if ((0x4000U & (vlSelf->__Vcellinp__Buffer__data_i 
                    ^ vlSelf->Buffer__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->Buffer__DOT____Vtogcov__data_i = ((0xffffbfffU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_i) 
                                                  | (0x4000U 
                                                     & vlSelf->__Vcellinp__Buffer__data_i));
    }
    if ((0x8000U & (vlSelf->__Vcellinp__Buffer__data_i 
                    ^ vlSelf->Buffer__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->Buffer__DOT____Vtogcov__data_i = ((0xffff7fffU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_i) 
                                                  | (0x8000U 
                                                     & vlSelf->__Vcellinp__Buffer__data_i));
    }
    if ((0x10000U & (vlSelf->__Vcellinp__Buffer__data_i 
                     ^ vlSelf->Buffer__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->Buffer__DOT____Vtogcov__data_i = ((0xfffeffffU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_i) 
                                                  | (0x10000U 
                                                     & vlSelf->__Vcellinp__Buffer__data_i));
    }
    if ((0x20000U & (vlSelf->__Vcellinp__Buffer__data_i 
                     ^ vlSelf->Buffer__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->Buffer__DOT____Vtogcov__data_i = ((0xfffdffffU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_i) 
                                                  | (0x20000U 
                                                     & vlSelf->__Vcellinp__Buffer__data_i));
    }
    if ((0x40000U & (vlSelf->__Vcellinp__Buffer__data_i 
                     ^ vlSelf->Buffer__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->Buffer__DOT____Vtogcov__data_i = ((0xfffbffffU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_i) 
                                                  | (0x40000U 
                                                     & vlSelf->__Vcellinp__Buffer__data_i));
    }
    if ((0x80000U & (vlSelf->__Vcellinp__Buffer__data_i 
                     ^ vlSelf->Buffer__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->Buffer__DOT____Vtogcov__data_i = ((0xfff7ffffU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_i) 
                                                  | (0x80000U 
                                                     & vlSelf->__Vcellinp__Buffer__data_i));
    }
    if ((0x100000U & (vlSelf->__Vcellinp__Buffer__data_i 
                      ^ vlSelf->Buffer__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->Buffer__DOT____Vtogcov__data_i = ((0xffefffffU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_i) 
                                                  | (0x100000U 
                                                     & vlSelf->__Vcellinp__Buffer__data_i));
    }
    if ((0x200000U & (vlSelf->__Vcellinp__Buffer__data_i 
                      ^ vlSelf->Buffer__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->Buffer__DOT____Vtogcov__data_i = ((0xffdfffffU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_i) 
                                                  | (0x200000U 
                                                     & vlSelf->__Vcellinp__Buffer__data_i));
    }
    if ((0x400000U & (vlSelf->__Vcellinp__Buffer__data_i 
                      ^ vlSelf->Buffer__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->Buffer__DOT____Vtogcov__data_i = ((0xffbfffffU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_i) 
                                                  | (0x400000U 
                                                     & vlSelf->__Vcellinp__Buffer__data_i));
    }
    if ((0x800000U & (vlSelf->__Vcellinp__Buffer__data_i 
                      ^ vlSelf->Buffer__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->Buffer__DOT____Vtogcov__data_i = ((0xff7fffffU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_i) 
                                                  | (0x800000U 
                                                     & vlSelf->__Vcellinp__Buffer__data_i));
    }
    if ((0x1000000U & (vlSelf->__Vcellinp__Buffer__data_i 
                       ^ vlSelf->Buffer__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->Buffer__DOT____Vtogcov__data_i = ((0xfeffffffU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_i) 
                                                  | (0x1000000U 
                                                     & vlSelf->__Vcellinp__Buffer__data_i));
    }
    if ((0x2000000U & (vlSelf->__Vcellinp__Buffer__data_i 
                       ^ vlSelf->Buffer__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->Buffer__DOT____Vtogcov__data_i = ((0xfdffffffU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_i) 
                                                  | (0x2000000U 
                                                     & vlSelf->__Vcellinp__Buffer__data_i));
    }
    if ((0x4000000U & (vlSelf->__Vcellinp__Buffer__data_i 
                       ^ vlSelf->Buffer__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->Buffer__DOT____Vtogcov__data_i = ((0xfbffffffU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_i) 
                                                  | (0x4000000U 
                                                     & vlSelf->__Vcellinp__Buffer__data_i));
    }
    if ((0x8000000U & (vlSelf->__Vcellinp__Buffer__data_i 
                       ^ vlSelf->Buffer__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->Buffer__DOT____Vtogcov__data_i = ((0xf7ffffffU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_i) 
                                                  | (0x8000000U 
                                                     & vlSelf->__Vcellinp__Buffer__data_i));
    }
    if ((0x10000000U & (vlSelf->__Vcellinp__Buffer__data_i 
                        ^ vlSelf->Buffer__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->Buffer__DOT____Vtogcov__data_i = ((0xefffffffU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_i) 
                                                  | (0x10000000U 
                                                     & vlSelf->__Vcellinp__Buffer__data_i));
    }
    if ((0x20000000U & (vlSelf->__Vcellinp__Buffer__data_i 
                        ^ vlSelf->Buffer__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->Buffer__DOT____Vtogcov__data_i = ((0xdfffffffU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_i) 
                                                  | (0x20000000U 
                                                     & vlSelf->__Vcellinp__Buffer__data_i));
    }
    if ((0x40000000U & (vlSelf->__Vcellinp__Buffer__data_i 
                        ^ vlSelf->Buffer__DOT____Vtogcov__data_i))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->Buffer__DOT____Vtogcov__data_i = ((0xbfffffffU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_i) 
                                                  | (0x40000000U 
                                                     & vlSelf->__Vcellinp__Buffer__data_i));
    }
    if (((vlSelf->__Vcellinp__Buffer__data_i ^ vlSelf->Buffer__DOT____Vtogcov__data_i) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->Buffer__DOT____Vtogcov__data_i = ((0x7fffffffU 
                                                   & vlSelf->Buffer__DOT____Vtogcov__data_i) 
                                                  | (0x80000000U 
                                                     & vlSelf->__Vcellinp__Buffer__data_i));
    }
}

VL_ATTR_COLD void VBuffer___024root___configure_coverage(VBuffer___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    VBuffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBuffer___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "Buffer.v", 5, 11, ".Buffer", "v_toggle/Buffer", "clk_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "Buffer.v", 6, 11, ".Buffer", "v_toggle/Buffer", "reset_n_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "Buffer.v", 8, 27, ".Buffer", "v_toggle/Buffer", "data_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "Buffer.v", 8, 27, ".Buffer", "v_toggle/Buffer", "data_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "Buffer.v", 8, 27, ".Buffer", "v_toggle/Buffer", "data_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "Buffer.v", 8, 27, ".Buffer", "v_toggle/Buffer", "data_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "Buffer.v", 8, 27, ".Buffer", "v_toggle/Buffer", "data_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "Buffer.v", 8, 27, ".Buffer", "v_toggle/Buffer", "data_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "Buffer.v", 8, 27, ".Buffer", "v_toggle/Buffer", "data_i[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "Buffer.v", 8, 27, ".Buffer", "v_toggle/Buffer", "data_i[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "Buffer.v", 8, 27, ".Buffer", "v_toggle/Buffer", "data_i[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "Buffer.v", 8, 27, ".Buffer", "v_toggle/Buffer", "data_i[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "Buffer.v", 8, 27, ".Buffer", "v_toggle/Buffer", "data_i[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "Buffer.v", 8, 27, ".Buffer", "v_toggle/Buffer", "data_i[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "Buffer.v", 8, 27, ".Buffer", "v_toggle/Buffer", "data_i[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "Buffer.v", 8, 27, ".Buffer", "v_toggle/Buffer", "data_i[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "Buffer.v", 8, 27, ".Buffer", "v_toggle/Buffer", "data_i[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "Buffer.v", 8, 27, ".Buffer", "v_toggle/Buffer", "data_i[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "Buffer.v", 8, 27, ".Buffer", "v_toggle/Buffer", "data_i[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "Buffer.v", 8, 27, ".Buffer", "v_toggle/Buffer", "data_i[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "Buffer.v", 8, 27, ".Buffer", "v_toggle/Buffer", "data_i[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "Buffer.v", 8, 27, ".Buffer", "v_toggle/Buffer", "data_i[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "Buffer.v", 8, 27, ".Buffer", "v_toggle/Buffer", "data_i[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "Buffer.v", 8, 27, ".Buffer", "v_toggle/Buffer", "data_i[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "Buffer.v", 8, 27, ".Buffer", "v_toggle/Buffer", "data_i[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "Buffer.v", 8, 27, ".Buffer", "v_toggle/Buffer", "data_i[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "Buffer.v", 8, 27, ".Buffer", "v_toggle/Buffer", "data_i[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "Buffer.v", 8, 27, ".Buffer", "v_toggle/Buffer", "data_i[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "Buffer.v", 8, 27, ".Buffer", "v_toggle/Buffer", "data_i[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "Buffer.v", 8, 27, ".Buffer", "v_toggle/Buffer", "data_i[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "Buffer.v", 8, 27, ".Buffer", "v_toggle/Buffer", "data_i[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "Buffer.v", 8, 27, ".Buffer", "v_toggle/Buffer", "data_i[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "Buffer.v", 8, 27, ".Buffer", "v_toggle/Buffer", "data_i[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "Buffer.v", 8, 27, ".Buffer", "v_toggle/Buffer", "data_i[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "Buffer.v", 10, 28, ".Buffer", "v_toggle/Buffer", "data_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "Buffer.v", 10, 28, ".Buffer", "v_toggle/Buffer", "data_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "Buffer.v", 10, 28, ".Buffer", "v_toggle/Buffer", "data_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "Buffer.v", 10, 28, ".Buffer", "v_toggle/Buffer", "data_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "Buffer.v", 10, 28, ".Buffer", "v_toggle/Buffer", "data_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "Buffer.v", 10, 28, ".Buffer", "v_toggle/Buffer", "data_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "Buffer.v", 10, 28, ".Buffer", "v_toggle/Buffer", "data_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "Buffer.v", 10, 28, ".Buffer", "v_toggle/Buffer", "data_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "Buffer.v", 10, 28, ".Buffer", "v_toggle/Buffer", "data_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "Buffer.v", 10, 28, ".Buffer", "v_toggle/Buffer", "data_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "Buffer.v", 10, 28, ".Buffer", "v_toggle/Buffer", "data_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "Buffer.v", 10, 28, ".Buffer", "v_toggle/Buffer", "data_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "Buffer.v", 10, 28, ".Buffer", "v_toggle/Buffer", "data_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "Buffer.v", 10, 28, ".Buffer", "v_toggle/Buffer", "data_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "Buffer.v", 10, 28, ".Buffer", "v_toggle/Buffer", "data_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "Buffer.v", 10, 28, ".Buffer", "v_toggle/Buffer", "data_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "Buffer.v", 10, 28, ".Buffer", "v_toggle/Buffer", "data_o[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "Buffer.v", 10, 28, ".Buffer", "v_toggle/Buffer", "data_o[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "Buffer.v", 10, 28, ".Buffer", "v_toggle/Buffer", "data_o[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "Buffer.v", 10, 28, ".Buffer", "v_toggle/Buffer", "data_o[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "Buffer.v", 10, 28, ".Buffer", "v_toggle/Buffer", "data_o[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "Buffer.v", 10, 28, ".Buffer", "v_toggle/Buffer", "data_o[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "Buffer.v", 10, 28, ".Buffer", "v_toggle/Buffer", "data_o[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "Buffer.v", 10, 28, ".Buffer", "v_toggle/Buffer", "data_o[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "Buffer.v", 10, 28, ".Buffer", "v_toggle/Buffer", "data_o[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "Buffer.v", 10, 28, ".Buffer", "v_toggle/Buffer", "data_o[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "Buffer.v", 10, 28, ".Buffer", "v_toggle/Buffer", "data_o[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "Buffer.v", 10, 28, ".Buffer", "v_toggle/Buffer", "data_o[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "Buffer.v", 10, 28, ".Buffer", "v_toggle/Buffer", "data_o[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "Buffer.v", 10, 28, ".Buffer", "v_toggle/Buffer", "data_o[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "Buffer.v", 10, 28, ".Buffer", "v_toggle/Buffer", "data_o[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "Buffer.v", 10, 28, ".Buffer", "v_toggle/Buffer", "data_o[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "Buffer.v", 13, 25, ".Buffer", "v_toggle/Buffer", "data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "Buffer.v", 13, 25, ".Buffer", "v_toggle/Buffer", "data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "Buffer.v", 13, 25, ".Buffer", "v_toggle/Buffer", "data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "Buffer.v", 13, 25, ".Buffer", "v_toggle/Buffer", "data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "Buffer.v", 13, 25, ".Buffer", "v_toggle/Buffer", "data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "Buffer.v", 13, 25, ".Buffer", "v_toggle/Buffer", "data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "Buffer.v", 13, 25, ".Buffer", "v_toggle/Buffer", "data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "Buffer.v", 13, 25, ".Buffer", "v_toggle/Buffer", "data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "Buffer.v", 13, 25, ".Buffer", "v_toggle/Buffer", "data[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "Buffer.v", 13, 25, ".Buffer", "v_toggle/Buffer", "data[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "Buffer.v", 13, 25, ".Buffer", "v_toggle/Buffer", "data[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "Buffer.v", 13, 25, ".Buffer", "v_toggle/Buffer", "data[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "Buffer.v", 13, 25, ".Buffer", "v_toggle/Buffer", "data[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "Buffer.v", 13, 25, ".Buffer", "v_toggle/Buffer", "data[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "Buffer.v", 13, 25, ".Buffer", "v_toggle/Buffer", "data[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "Buffer.v", 13, 25, ".Buffer", "v_toggle/Buffer", "data[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "Buffer.v", 13, 25, ".Buffer", "v_toggle/Buffer", "data[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "Buffer.v", 13, 25, ".Buffer", "v_toggle/Buffer", "data[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "Buffer.v", 13, 25, ".Buffer", "v_toggle/Buffer", "data[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "Buffer.v", 13, 25, ".Buffer", "v_toggle/Buffer", "data[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "Buffer.v", 13, 25, ".Buffer", "v_toggle/Buffer", "data[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "Buffer.v", 13, 25, ".Buffer", "v_toggle/Buffer", "data[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "Buffer.v", 13, 25, ".Buffer", "v_toggle/Buffer", "data[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "Buffer.v", 13, 25, ".Buffer", "v_toggle/Buffer", "data[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "Buffer.v", 13, 25, ".Buffer", "v_toggle/Buffer", "data[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "Buffer.v", 13, 25, ".Buffer", "v_toggle/Buffer", "data[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "Buffer.v", 13, 25, ".Buffer", "v_toggle/Buffer", "data[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "Buffer.v", 13, 25, ".Buffer", "v_toggle/Buffer", "data[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "Buffer.v", 13, 25, ".Buffer", "v_toggle/Buffer", "data[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "Buffer.v", 13, 25, ".Buffer", "v_toggle/Buffer", "data[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "Buffer.v", 13, 25, ".Buffer", "v_toggle/Buffer", "data[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "Buffer.v", 13, 25, ".Buffer", "v_toggle/Buffer", "data[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "Buffer.v", 18, 9, ".Buffer", "v_branch/Buffer", "if", "18-19");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "Buffer.v", 18, 10, ".Buffer", "v_branch/Buffer", "else", "21-22");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "Buffer.v", 17, 5, ".Buffer", "v_line/Buffer", "block", "17");
}
