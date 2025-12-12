# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VMultiCoreDataCache_noparam.mk for the caller.

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
	VMultiCoreDataCache_noparam \
	VMultiCoreDataCache_noparam__Dpi_Export__0 \
	VMultiCoreDataCache_noparam___024root__DepSet_h6d178592__0 \
	VMultiCoreDataCache_noparam___024root__DepSet_h6d178592__1 \
	VMultiCoreDataCache_noparam___024root__DepSet_h6d178592__2 \
	VMultiCoreDataCache_noparam___024root__DepSet_h6d178592__3 \
	VMultiCoreDataCache_noparam___024root__DepSet_h6d178592__4 \
	VMultiCoreDataCache_noparam___024root__DepSet_h6d178592__5 \
	VMultiCoreDataCache_noparam___024root__DepSet_h6d178592__6 \
	VMultiCoreDataCache_noparam___024root__DepSet_h6d178592__7 \
	VMultiCoreDataCache_noparam___024root__DepSet_h6d178592__8 \
	VMultiCoreDataCache_noparam___024root__DepSet_h6d178592__9 \
	VMultiCoreDataCache_noparam___024root__DepSet_h6d178592__10 \
	VMultiCoreDataCache_noparam___024root__DepSet_h6d178592__11 \
	VMultiCoreDataCache_noparam___024root__DepSet_h6d178592__12 \
	VMultiCoreDataCache_noparam___024root__DepSet_h6d178592__13 \
	VMultiCoreDataCache_noparam___024root__DepSet_h6d178592__14 \
	VMultiCoreDataCache_noparam___024root__DepSet_h6d178592__15 \
	VMultiCoreDataCache_noparam___024root__DepSet_h6d178592__16 \
	VMultiCoreDataCache_noparam___024root__DepSet_he43dd8fd__0 \
	VMultiCoreDataCache_noparam___024root__DepSet_he43dd8fd__1 \
	VMultiCoreDataCache_noparam___024root__DepSet_he43dd8fd__2 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VMultiCoreDataCache_noparam__ConstPool_0 \
	VMultiCoreDataCache_noparam___024root__Slow \
	VMultiCoreDataCache_noparam___024root__DepSet_h6d178592__0__Slow \
	VMultiCoreDataCache_noparam___024root__DepSet_he43dd8fd__0__Slow \
	VMultiCoreDataCache_noparam___024root__DepSet_he43dd8fd__1__Slow \
	VMultiCoreDataCache_noparam___024unit__Slow \
	VMultiCoreDataCache_noparam___024unit__DepSet_h58726e86__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VMultiCoreDataCache_noparam__Dpi \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VMultiCoreDataCache_noparam__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
