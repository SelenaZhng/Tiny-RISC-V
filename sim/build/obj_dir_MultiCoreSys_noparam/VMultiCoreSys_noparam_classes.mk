# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VMultiCoreSys_noparam.mk for the caller.

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
	VMultiCoreSys_noparam \
	VMultiCoreSys_noparam__Dpi_Export__0 \
	VMultiCoreSys_noparam___024root__DepSet_he7bfbdc2__0 \
	VMultiCoreSys_noparam___024root__DepSet_he7bfbdc2__1 \
	VMultiCoreSys_noparam___024root__DepSet_he7bfbdc2__2 \
	VMultiCoreSys_noparam___024root__DepSet_he7bfbdc2__3 \
	VMultiCoreSys_noparam___024root__DepSet_he7bfbdc2__4 \
	VMultiCoreSys_noparam___024root__DepSet_he7bfbdc2__5 \
	VMultiCoreSys_noparam___024root__DepSet_he7bfbdc2__6 \
	VMultiCoreSys_noparam___024root__DepSet_he7bfbdc2__7 \
	VMultiCoreSys_noparam___024root__DepSet_he7bfbdc2__8 \
	VMultiCoreSys_noparam___024root__DepSet_he7bfbdc2__9 \
	VMultiCoreSys_noparam___024root__DepSet_he7bfbdc2__10 \
	VMultiCoreSys_noparam___024root__DepSet_he7bfbdc2__11 \
	VMultiCoreSys_noparam___024root__DepSet_he7bfbdc2__12 \
	VMultiCoreSys_noparam___024root__DepSet_he7bfbdc2__13 \
	VMultiCoreSys_noparam___024root__DepSet_he7bfbdc2__14 \
	VMultiCoreSys_noparam___024root__DepSet_he7bfbdc2__15 \
	VMultiCoreSys_noparam___024root__DepSet_he7bfbdc2__16 \
	VMultiCoreSys_noparam___024root__DepSet_he7bfbdc2__17 \
	VMultiCoreSys_noparam___024root__DepSet_he7bfbdc2__18 \
	VMultiCoreSys_noparam___024root__DepSet_he7bfbdc2__19 \
	VMultiCoreSys_noparam___024root__DepSet_he7bfbdc2__20 \
	VMultiCoreSys_noparam___024root__DepSet_he7bfbdc2__21 \
	VMultiCoreSys_noparam___024root__DepSet_he7bfbdc2__22 \
	VMultiCoreSys_noparam___024root__DepSet_he7bfbdc2__23 \
	VMultiCoreSys_noparam___024root__DepSet_he7bfbdc2__24 \
	VMultiCoreSys_noparam___024root__DepSet_he7bfbdc2__25 \
	VMultiCoreSys_noparam___024root__DepSet_he7bfbdc2__26 \
	VMultiCoreSys_noparam___024root__DepSet_he7bfbdc2__27 \
	VMultiCoreSys_noparam___024root__DepSet_he7bfbdc2__28 \
	VMultiCoreSys_noparam___024root__DepSet_h06b5dd0f__0 \
	VMultiCoreSys_noparam___024root__DepSet_h06b5dd0f__1 \
	VMultiCoreSys_noparam___024root__DepSet_h06b5dd0f__2 \
	VMultiCoreSys_noparam___024root__DepSet_h06b5dd0f__3 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VMultiCoreSys_noparam__ConstPool_0 \
	VMultiCoreSys_noparam___024root__Slow \
	VMultiCoreSys_noparam___024root__DepSet_he7bfbdc2__0__Slow \
	VMultiCoreSys_noparam___024root__DepSet_h06b5dd0f__0__Slow \
	VMultiCoreSys_noparam___024root__DepSet_h06b5dd0f__1__Slow \
	VMultiCoreSys_noparam___024root__DepSet_h06b5dd0f__2__Slow \
	VMultiCoreSys_noparam___024unit__Slow \
	VMultiCoreSys_noparam___024unit__DepSet_h18f938a4__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VMultiCoreSys_noparam__Dpi \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VMultiCoreSys_noparam__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
