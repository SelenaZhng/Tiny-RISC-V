# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VCacheAlt___05Fp_num_banks_4.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VCacheAlt___05Fp_num_banks_4 \
	VCacheAlt___05Fp_num_banks_4__Dpi_Export__0 \
	VCacheAlt___05Fp_num_banks_4___024root__DepSet_hcca8d2a9__0 \
	VCacheAlt___05Fp_num_banks_4___024root__DepSet_hc8591fde__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VCacheAlt___05Fp_num_banks_4__ConstPool_0 \
	VCacheAlt___05Fp_num_banks_4___024root__Slow \
	VCacheAlt___05Fp_num_banks_4___024root__DepSet_hcca8d2a9__0__Slow \
	VCacheAlt___05Fp_num_banks_4___024root__DepSet_hc8591fde__0__Slow \
	VCacheAlt___05Fp_num_banks_4___024unit__Slow \
	VCacheAlt___05Fp_num_banks_4___024unit__DepSet_h925d1791__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VCacheAlt___05Fp_num_banks_4__Dpi \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VCacheAlt___05Fp_num_banks_4__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
