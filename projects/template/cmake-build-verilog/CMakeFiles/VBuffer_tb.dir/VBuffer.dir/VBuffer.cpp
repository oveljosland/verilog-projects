// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VBuffer.h"
#include "VBuffer__Syms.h"
#include "verilated_vcd_sc.h"

//============================================================
// Constructors

VBuffer::VBuffer(sc_module_name /* unused */)
    : vlSymsp{new VBuffer__Syms(nullptr, name(), this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , reset_n_i{vlSymsp->TOP.reset_n_i}
    , data_i{vlSymsp->TOP.data_i}
    , data_o{vlSymsp->TOP.data_o}
    , rootp{&(vlSymsp->TOP)}
{
    // Sensitivities on all clocks and combinational inputs
    SC_METHOD(eval);
    sensitive << clk_i;
    sensitive << reset_n_i;
    sensitive << data_i;

}

//============================================================
// Destructor

VBuffer::~VBuffer() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VBuffer___024root___eval_initial(VBuffer___024root* vlSelf);
void VBuffer___024root___eval_settle(VBuffer___024root* vlSelf);
void VBuffer___024root___eval(VBuffer___024root* vlSelf);
QData VBuffer___024root___change_request(VBuffer___024root* vlSelf);
#ifdef VL_DEBUG
void VBuffer___024root___eval_debug_assertions(VBuffer___024root* vlSelf);
#endif  // VL_DEBUG
void VBuffer___024root___final(VBuffer___024root* vlSelf);

static void _eval_initial_loop(VBuffer__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VBuffer___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VBuffer___024root___eval_settle(&(vlSymsp->TOP));
        VBuffer___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VBuffer___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("Buffer.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VBuffer___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VBuffer::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VBuffer::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VBuffer___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VBuffer___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VBuffer___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("Buffer.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VBuffer___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VBuffer::contextp() const {
    return vlSymsp->_vm_contextp__;
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VBuffer::final() {
    VBuffer___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VBuffer___024root__trace_init_top(VBuffer___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VBuffer___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBuffer___024root*>(voidSelf);
    VBuffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VBuffer___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VBuffer___024root__trace_register(VBuffer___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VBuffer::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (!sc_core::sc_get_curr_simcontext()->elaboration_done()) {
        vl_fatal(__FILE__, __LINE__, name(), "VBuffer::trace() is called before sc_core::sc_start(). Run sc_core::sc_start(sc_core::SC_ZERO_TIME) before trace() to complete elaboration.");
    }if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VBuffer___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
