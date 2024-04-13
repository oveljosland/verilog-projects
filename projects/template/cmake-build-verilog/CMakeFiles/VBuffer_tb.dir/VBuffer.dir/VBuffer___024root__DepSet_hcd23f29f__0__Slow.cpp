// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBuffer.h for the primary calling header

#include "verilated.h"

#include "VBuffer___024root.h"

VL_ATTR_COLD void VBuffer___024root___eval_initial(VBuffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBuffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBuffer___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP____Vcellinp__Buffer__clk_i 
        = vlSelf->__Vcellinp__Buffer__clk_i;
    vlSelf->__Vclklast__TOP____VinpClk__TOP____Vcellinp__Buffer__reset_n_i 
        = vlSelf->__VinpClk__TOP____Vcellinp__Buffer__reset_n_i;
}

VL_ATTR_COLD void VBuffer___024root___settle__TOP__0(VBuffer___024root* vlSelf);

VL_ATTR_COLD void VBuffer___024root___eval_settle(VBuffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBuffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBuffer___024root___eval_settle\n"); );
    // Body
    VBuffer___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VBuffer___024root___final(VBuffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBuffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBuffer___024root___final\n"); );
}

VL_ATTR_COLD void VBuffer___024root___ctor_var_reset(VBuffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBuffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBuffer___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->__Vcellinp__Buffer__data_i = VL_RAND_RESET_I(32);
    vlSelf->__Vcellinp__Buffer__reset_n_i = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__Buffer__clk_i = VL_RAND_RESET_I(1);
    vlSelf->Buffer__DOT__data = VL_RAND_RESET_I(32);
    vlSelf->Buffer__DOT____Vtogcov__clk_i = VL_RAND_RESET_I(1);
    vlSelf->Buffer__DOT____Vtogcov__reset_n_i = VL_RAND_RESET_I(1);
    vlSelf->Buffer__DOT____Vtogcov__data_i = VL_RAND_RESET_I(32);
    vlSelf->Buffer__DOT____Vtogcov__data_o = VL_RAND_RESET_I(32);
    vlSelf->__VinpClk__TOP____Vcellinp__Buffer__reset_n_i = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP____Vcellinp__Buffer__reset_n_i = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
