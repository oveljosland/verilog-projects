// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBuffer.h for the primary calling header

#include "verilated.h"

#include "VBuffer___024root.h"

void VBuffer___024root___combo__TOP__0(VBuffer___024root* vlSelf);
void VBuffer___024root___sequent__TOP__0(VBuffer___024root* vlSelf);
void VBuffer___024root___combo__TOP__1(VBuffer___024root* vlSelf);

void VBuffer___024root___eval(VBuffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBuffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBuffer___024root___eval\n"); );
    // Body
    VBuffer___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if ((((IData)(vlSelf->__Vcellinp__Buffer__clk_i) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____Vcellinp__Buffer__clk_i))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP____Vcellinp__Buffer__reset_n_i)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP____Vcellinp__Buffer__reset_n_i)))) {
        VBuffer___024root___sequent__TOP__0(vlSelf);
    }
    VBuffer___024root___combo__TOP__1(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP____Vcellinp__Buffer__clk_i 
        = vlSelf->__Vcellinp__Buffer__clk_i;
    vlSelf->__Vclklast__TOP____VinpClk__TOP____Vcellinp__Buffer__reset_n_i 
        = vlSelf->__VinpClk__TOP____Vcellinp__Buffer__reset_n_i;
    vlSelf->__VinpClk__TOP____Vcellinp__Buffer__reset_n_i 
        = vlSelf->__Vcellinp__Buffer__reset_n_i;
}

QData VBuffer___024root___change_request_1(VBuffer___024root* vlSelf);

VL_INLINE_OPT QData VBuffer___024root___change_request(VBuffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBuffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBuffer___024root___change_request\n"); );
    // Body
    return (VBuffer___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VBuffer___024root___change_request_1(VBuffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBuffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBuffer___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->__Vcellinp__Buffer__reset_n_i ^ vlSelf->__Vchglast__TOP____Vcellinp__Buffer__reset_n_i));
    VL_DEBUG_IF( if(__req && ((vlSelf->__Vcellinp__Buffer__reset_n_i ^ vlSelf->__Vchglast__TOP____Vcellinp__Buffer__reset_n_i))) VL_DBG_MSGF("        CHANGE: Buffer.v:6: __Vcellinp__Buffer__reset_n_i\n"); );
    // Final
    vlSelf->__Vchglast__TOP____Vcellinp__Buffer__reset_n_i 
        = vlSelf->__Vcellinp__Buffer__reset_n_i;
    return __req;
}

#ifdef VL_DEBUG
void VBuffer___024root___eval_debug_assertions(VBuffer___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBuffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBuffer___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
