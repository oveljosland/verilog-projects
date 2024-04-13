// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VBUFFER__SYMS_H_
#define VERILATED_VBUFFER__SYMS_H_  // guard

#include "systemc.h"
#include "verilated_sc.h"
#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VBuffer.h"

// INCLUDE MODULE CLASSES
#include "VBuffer___024root.h"

// SYMS CLASS (contains all model state)
class VBuffer__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VBuffer* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VBuffer___024root              TOP;

    // COVERAGE
    uint32_t __Vcoverage[69];

    // CONSTRUCTORS
    VBuffer__Syms(VerilatedContext* contextp, const char* namep, VBuffer* modelp);
    ~VBuffer__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
