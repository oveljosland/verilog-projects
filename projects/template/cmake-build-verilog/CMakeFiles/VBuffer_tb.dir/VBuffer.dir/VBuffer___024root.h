// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See VBuffer.h for the primary calling header

#ifndef VERILATED_VBUFFER___024ROOT_H_
#define VERILATED_VBUFFER___024ROOT_H_  // guard

#include "systemc.h"
#include "verilated_sc.h"
#include "verilated.h"
#include "verilated_cov.h"

class VBuffer__Syms;
VL_MODULE(VBuffer___024root) {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __Vcellinp__Buffer__reset_n_i;
    CData/*0:0*/ __Vcellinp__Buffer__clk_i;
    CData/*0:0*/ Buffer__DOT____Vtogcov__clk_i;
    CData/*0:0*/ Buffer__DOT____Vtogcov__reset_n_i;
    CData/*0:0*/ __VinpClk__TOP____Vcellinp__Buffer__reset_n_i;
    CData/*0:0*/ __Vclklast__TOP____Vcellinp__Buffer__clk_i;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP____Vcellinp__Buffer__reset_n_i;
    CData/*0:0*/ __Vchglast__TOP____Vcellinp__Buffer__reset_n_i;
    IData/*31:0*/ __Vcellinp__Buffer__data_i;
    IData/*31:0*/ Buffer__DOT__data;
    IData/*31:0*/ Buffer__DOT____Vtogcov__data_i;
    IData/*31:0*/ Buffer__DOT____Vtogcov__data_o;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    sc_in<bool> clk_i;
    sc_in<bool> reset_n_i;
    sc_in<uint32_t> data_i;
    sc_out<uint32_t> data_o;

    // INTERNAL VARIABLES
    VBuffer__Syms* const vlSymsp;

    // CONSTRUCTORS
    VBuffer___024root(VBuffer__Syms* symsp, const char* name);
    ~VBuffer___024root();
    VL_UNCOPYABLE(VBuffer___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
