# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VMemNet_noparam.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VMemNet_noparam \
	VMemNet_noparam__Dpi_Export__0 \
	VMemNet_noparam___024root__DepSet_h83a472fd__0 \
	VMemNet_noparam___024root__DepSet_h83a472fd__1 \
	VMemNet_noparam___024root__DepSet_h83a472fd__2 \
	VMemNet_noparam___024root__DepSet_h83a472fd__3 \
	VMemNet_noparam___024root__DepSet_h83a472fd__4 \
	VMemNet_noparam___024root__DepSet_h83a472fd__5 \
	VMemNet_noparam___024root__DepSet_h83a472fd__6 \
	VMemNet_noparam___024root__DepSet_h83a472fd__7 \
	VMemNet_noparam___024root__DepSet_h476ed247__0 \
	VMemNet_noparam___024root__DepSet_h476ed247__1 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VMemNet_noparam__ConstPool_0 \
	VMemNet_noparam___024root__Slow \
	VMemNet_noparam___024root__DepSet_h83a472fd__0__Slow \
	VMemNet_noparam___024root__DepSet_h476ed247__0__Slow \
	VMemNet_noparam___024root__DepSet_h476ed247__1__Slow \
	VMemNet_noparam___024unit__Slow \
	VMemNet_noparam___024unit__DepSet_ha97d80ba__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VMemNet_noparam__Dpi \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VMemNet_noparam__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
