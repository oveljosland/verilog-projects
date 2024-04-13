cmake_minimum_required(VERSION 3.16)
project(Template CXX)

# Find Verilator
find_package(verilator HINTS ${VERILATOR_ROOT} $ENV{VERILATOR_ROOT})

# SystemC dependencies
set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)

# Find SystemC using SystemC's CMake integration
find_package(SystemCLanguage PATHS ${SYSTEMC_ROOT})

# Add executable (test_bench exec) <- (template-bench code)
add_executable(VBuffer_tb Buffer_tb.cc)

# Set target executable
set_property(
        TARGET VBuffer_tb
        PROPERTY CXX_STANDARD ${SystemC_CXX_STANDARD}
)

# Verilate executable
verilate(VBuffer_tb SYSTEMC COVERAGE TRACE
        INCLUDE_DIRECTORIES "."
        SOURCES Buffer.v
)

verilator_link_systemc(VBuffer_tb)
