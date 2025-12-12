// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VCACHEBASE___05FP_NUM_BANKS_4_H_
#define VERILATED_VCACHEBASE___05FP_NUM_BANKS_4_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class VCacheBase___05Fp_num_banks_4__Syms;
class VCacheBase___05Fp_num_banks_4___024root;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) VCacheBase___05Fp_num_banks_4 VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VCacheBase___05Fp_num_banks_4__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = false;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&reset,0,0);
    VL_IN8(&cache2mem_reqstream_rdy,0,0);
    VL_OUT8(&cache2mem_reqstream_val,0,0);
    VL_OUT8(&cache2mem_respstream_rdy,0,0);
    VL_IN8(&cache2mem_respstream_val,0,0);
    VL_OUT8(&proc2cache_reqstream_rdy,0,0);
    VL_IN8(&proc2cache_reqstream_val,0,0);
    VL_IN8(&proc2cache_respstream_rdy,0,0);
    VL_OUT8(&proc2cache_respstream_val,0,0);
    VL_OUTW(&cache2mem_reqstream_msg,175,0,6);
    VL_INW(&cache2mem_respstream_msg,145,0,5);
    VL_INW(&proc2cache_reqstream_msg,77,0,3);
    VL_OUT64(&proc2cache_respstream_msg,47,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VCacheBase___05Fp_num_banks_4___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VCacheBase___05Fp_num_banks_4(VerilatedContext* contextp, const char* name = "TOP");
    explicit VCacheBase___05Fp_num_banks_4(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VCacheBase___05Fp_num_banks_4();
  private:
    VL_UNCOPYABLE(VCacheBase___05Fp_num_banks_4);  ///< Copying not allowed

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
