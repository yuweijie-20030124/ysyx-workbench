// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VYSYX_25060170_FISHTAILCORE_H_
#define VERILATED_VYSYX_25060170_FISHTAILCORE_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class Vysyx_25060170_fishtailcore__Syms;
class Vysyx_25060170_fishtailcore___024root;
class VerilatedVcdC;

// This class is the main interface to the Verilated model
class Vysyx_25060170_fishtailcore VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vysyx_25060170_fishtailcore__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&rst,0,0);
    VL_OUT8(&DPIC_idu_dpic_rd_addr,4,0);
    VL_OUT8(&DPIC_ls_mem_re,0,0);
    VL_OUT8(&DPIC_ls_dpic_we,0,0);
    VL_OUT8(&DPIC_ls_dpic_wlen,7,0);
    VL_OUT8(&DPIC_ls_dpic_rlen,7,0);
    VL_OUT8(&DPIC_wbu_dpic_valid,0,0);
    VL_OUT8(&DPIC_magic_flag,0,0);
    VL_OUT(&DPIC_if_id_pc,31,0);
    VL_IN(&DPIC_dpic_ifu_inst,31,0);
    VL_OUT(&DPIC_if_id_reg_pc,31,0);
    VL_OUT(&DPIC_idu_imm,31,0);
    VL_OUT(&DPIC_regs0,31,0);
    VL_OUT(&DPIC_regs1,31,0);
    VL_OUT(&DPIC_regs2,31,0);
    VL_OUT(&DPIC_regs3,31,0);
    VL_OUT(&DPIC_regs4,31,0);
    VL_OUT(&DPIC_regs5,31,0);
    VL_OUT(&DPIC_regs6,31,0);
    VL_OUT(&DPIC_regs7,31,0);
    VL_OUT(&DPIC_regs8,31,0);
    VL_OUT(&DPIC_regs9,31,0);
    VL_OUT(&DPIC_regs10,31,0);
    VL_OUT(&DPIC_regs11,31,0);
    VL_OUT(&DPIC_regs12,31,0);
    VL_OUT(&DPIC_regs13,31,0);
    VL_OUT(&DPIC_regs14,31,0);
    VL_OUT(&DPIC_regs15,31,0);
    VL_OUT(&DPIC_regs16,31,0);
    VL_OUT(&DPIC_regs17,31,0);
    VL_OUT(&DPIC_regs18,31,0);
    VL_OUT(&DPIC_regs19,31,0);
    VL_OUT(&DPIC_regs20,31,0);
    VL_OUT(&DPIC_regs21,31,0);
    VL_OUT(&DPIC_regs22,31,0);
    VL_OUT(&DPIC_regs23,31,0);
    VL_OUT(&DPIC_regs24,31,0);
    VL_OUT(&DPIC_regs25,31,0);
    VL_OUT(&DPIC_regs26,31,0);
    VL_OUT(&DPIC_regs27,31,0);
    VL_OUT(&DPIC_regs28,31,0);
    VL_OUT(&DPIC_regs29,31,0);
    VL_OUT(&DPIC_regs30,31,0);
    VL_OUT(&DPIC_regs31,31,0);
    VL_OUT(&DPIC_dpic_mhartid,31,0);
    VL_OUT(&DPIC_dpic_mstatus,31,0);
    VL_OUT(&DPIC_dpic_mepc,31,0);
    VL_OUT(&DPIC_dpic_mtvec,31,0);
    VL_OUT(&DPIC_dpic_mcause,31,0);
    VL_OUT(&DPIC_dpic_mscratch,31,0);
    VL_OUT(&DPIC_ls_dpic_data,31,0);
    VL_IN(&DPIC_dpi_ls_mem_skip_flag,31,0);
    VL_OUT(&DPIC_mem_wb_skip_flag,31,0);
    VL_OUT(&DPIC_wbu_dpic_inst,31,0);
    VL_OUT(&DPIC_wbu_dpic_pc,31,0);
    VL_OUT(&DPIC_wbu_dpic_next_pc,31,0);
    VL_IN(&DPIC_DPIC_MEM_data,31,0);
    VL_OUT(&DPIC_ls_dpic_raddr,31,0);
    VL_OUT(&DPIC_ls_dpic_waddr,31,0);
    VL_OUT(&DPIC_ex_ls_reg_pc,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vysyx_25060170_fishtailcore___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vysyx_25060170_fishtailcore(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vysyx_25060170_fishtailcore(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vysyx_25060170_fishtailcore();
  private:
    VL_UNCOPYABLE(Vysyx_25060170_fishtailcore);  ///< Copying not allowed

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
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
