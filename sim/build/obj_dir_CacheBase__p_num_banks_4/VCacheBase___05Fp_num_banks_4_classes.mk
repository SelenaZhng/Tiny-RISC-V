# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VCacheBase___05Fp_num_banks_4.mk for the caller.

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
	VCacheBase___05Fp_num_banks_4 \
	VCacheBase___05Fp_num_banks_4__Dpi_Export__0 \
	VCacheBase___05Fp_num_banks_4___024root__DepSet_h2483e9c2__0 \
	VCacheBase___05Fp_num_banks_4___024root__DepSet_h6b99fd90__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VCacheBase___05Fp_num_banks_4__ConstPool_0 \
	VCacheBase___05Fp_num_banks_4___024root__Slow \
	VCacheBase___05Fp_num_banks_4___024root__DepSet_h2483e9c2__0__Slow \
	VCacheBase___05Fp_num_banks_4___024root__DepSet_h6b99fd90__0__Slow \
	VCacheBase___05Fp_num_banks_4___024unit__Slow \
	VCacheBase___05Fp_num_banks_4___024unit__DepSet_h9c698fbc__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VCacheBase___05Fp_num_banks_4__Dpi \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VCacheBase___05Fp_num_banks_4__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
