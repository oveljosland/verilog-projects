// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBuffer.h for the primary calling header

#include "verilated.h"

#include "VBuffer__Syms.h"
#include "VBuffer___024root.h"

void VBuffer___024root___ctor_var_reset(VBuffer___024root* vlSelf);

VBuffer___024root::VBuffer___024root(VBuffer__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , clk_i("clk_i")
    , reset_n_i("reset_n_i")
    , data_i("data_i")
    , data_o("data_o")
    , vlSymsp{symsp}
 {
    // Reset structure values
    VBuffer___024root___ctor_var_reset(this);
}

void VBuffer___024root___configure_coverage(VBuffer___024root* vlSelf, bool first);

void VBuffer___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
    VBuffer___024root___configure_coverage(this, first);
}

VBuffer___024root::~VBuffer___024root() {
}

// Coverage
void VBuffer___024root::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string(name())+hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
