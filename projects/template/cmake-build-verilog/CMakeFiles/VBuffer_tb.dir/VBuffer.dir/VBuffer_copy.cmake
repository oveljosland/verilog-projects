# Verilated -*- CMake -*-
# DESCRIPTION: Verilator output: CMake include script with class lists
#
# This CMake script lists generated Verilated files, for including in higher level CMake scripts.
# This file is meant to be consumed by the verilate() function,
# which becomes available after executing `find_package(verilator).

### Constants...
set(PERL "perl" CACHE FILEPATH "Perl executable (from $PERL)")
set(VERILATOR_ROOT "/Users/oveljosland/Verilog/libraries/verilator-v4.224" CACHE PATH "Path to Verilator kit (from $VERILATOR_ROOT)")

### Compiler flags...
# User CFLAGS (from -CFLAGS on Verilator command line)
set(VBuffer_USER_CFLAGS )
# User LDLIBS (from -LDFLAGS on Verilator command line)
set(VBuffer_USER_LDLIBS )

### Switches...
# SystemC output mode?  0/1 (from --sc)
set(VBuffer_SC 1)
# Coverage output mode?  0/1 (from --coverage)
set(VBuffer_COVERAGE 1)
# Threaded output mode?  0/1/N threads (from --threads)
set(VBuffer_THREADS 0)
# Threaded tracing output mode?  0/1/N threads (from --threads/--trace-threads)
set(VBuffer_TRACE_THREADS 0)
set(VBuffer_TRACE_FST_WRITER_THREAD 0)
# Struct output mode?  0/1 (from --trace-structs)
set(VBuffer_TRACE_STRUCTS 0)
# VCD Tracing output mode?  0/1 (from --trace)
set(VBuffer_TRACE_VCD 1)
# FST Tracing output mode? 0/1 (from --trace-fst)
set(VBuffer_TRACE_FST 0)

### Sources...
# Global classes, need linked once per executable
set(VBuffer_GLOBAL "${VERILATOR_ROOT}/include/verilated.cpp" "${VERILATOR_ROOT}/include/verilated_cov.cpp" "${VERILATOR_ROOT}/include/verilated_vcd_c.cpp" "${VERILATOR_ROOT}/include/verilated_vcd_sc.cpp")
# Generated module classes, non-fast-path, compile with low/medium optimization
set(VBuffer_CLASSES_SLOW "/Users/oveljosland/Verilog/projects/template/cmake-build-verilog/CMakeFiles/VBuffer_tb.dir/VBuffer.dir/VBuffer___024root__Slow.cpp" "/Users/oveljosland/Verilog/projects/template/cmake-build-verilog/CMakeFiles/VBuffer_tb.dir/VBuffer.dir/VBuffer___024root__DepSet_h0dfe99ea__0__Slow.cpp" "/Users/oveljosland/Verilog/projects/template/cmake-build-verilog/CMakeFiles/VBuffer_tb.dir/VBuffer.dir/VBuffer___024root__DepSet_hcd23f29f__0__Slow.cpp")
# Generated module classes, fast-path, compile with highest optimization
set(VBuffer_CLASSES_FAST "/Users/oveljosland/Verilog/projects/template/cmake-build-verilog/CMakeFiles/VBuffer_tb.dir/VBuffer.dir/VBuffer.cpp" "/Users/oveljosland/Verilog/projects/template/cmake-build-verilog/CMakeFiles/VBuffer_tb.dir/VBuffer.dir/VBuffer___024root__DepSet_h0dfe99ea__0.cpp" "/Users/oveljosland/Verilog/projects/template/cmake-build-verilog/CMakeFiles/VBuffer_tb.dir/VBuffer.dir/VBuffer___024root__DepSet_hcd23f29f__0.cpp")
# Generated support classes, non-fast-path, compile with low/medium optimization
set(VBuffer_SUPPORT_SLOW "/Users/oveljosland/Verilog/projects/template/cmake-build-verilog/CMakeFiles/VBuffer_tb.dir/VBuffer.dir/VBuffer__Syms.cpp" "/Users/oveljosland/Verilog/projects/template/cmake-build-verilog/CMakeFiles/VBuffer_tb.dir/VBuffer.dir/VBuffer__Trace__0__Slow.cpp")
# Generated support classes, fast-path, compile with highest optimization
set(VBuffer_SUPPORT_FAST "/Users/oveljosland/Verilog/projects/template/cmake-build-verilog/CMakeFiles/VBuffer_tb.dir/VBuffer.dir/VBuffer__Trace__0.cpp")
# All dependencies
set(VBuffer_DEPS "/Users/oveljosland/Verilog/libraries/verilator-v4.224/bin/verilator_bin" "Buffer.v")
# User .cpp files (from .cpp's on Verilator command line)
set(VBuffer_USER_CLASSES )
