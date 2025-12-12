// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VMULTICORESYS_NOPARAM_H_
#define VERILATED_VMULTICORESYS_NOPARAM_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class VMultiCoreSys_noparam__Syms;
class VMultiCoreSys_noparam___024root;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) VMultiCoreSys_noparam VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VMultiCoreSys_noparam__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = false;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&reset,0,0);
    VL_OUT8(&commit_inst,3,0);
    VL_OUT8(&dcache_access,3,0);
    VL_OUT8(&dcache_miss,3,0);
    VL_OUT8(&icache_access,3,0);
    VL_OUT8(&icache_miss,3,0);
    VL_OUT8(&stats_en,0,0);
    VL_IN8(&dmem_reqstream_rdy,0,0);
    VL_OUT8(&dmem_reqstream_val,0,0);
    VL_OUT8(&dmem_respstream_rdy,0,0);
    VL_IN8(&dmem_respstream_val,0,0);
    VL_IN8(&imem_reqstream_rdy,0,0);
    VL_OUT8(&imem_reqstream_val,0,0);
    VL_OUT8(&imem_respstream_rdy,0,0);
    VL_IN8(&imem_respstream_val,0,0);
    VL_OUTW(&dmem_reqstream_msg,175,0,6);
    VL_INW(&dmem_respstream_msg,145,0,5);
    VL_OUTW(&imem_reqstream_msg,175,0,6);
    VL_INW(&imem_respstream_msg,145,0,5);
    VL_IN((&mngr2proc_msg)[4],31,0);
    VL_OUT8((&mngr2proc_rdy)[4],0,0);
    VL_IN8((&mngr2proc_val)[4],0,0);
    VL_OUT((&proc2mngr_msg)[4],31,0);
    VL_IN8((&proc2mngr_rdy)[4],0,0);
    VL_OUT8((&proc2mngr_val)[4],0,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VMultiCoreSys_noparam___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VMultiCoreSys_noparam(VerilatedContext* contextp, const char* name = "TOP");
    explicit VMultiCoreSys_noparam(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VMultiCoreSys_noparam();
  private:
    VL_UNCOPYABLE(VMultiCoreSys_noparam);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    /// DPI Export functions
    static void line_trace(svBitVecVal* trace_str);

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
