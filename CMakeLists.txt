cmake_minimum_required(VERSION 2.6)
project(basic_test)

# Setup testing
enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIR})

add_library (calculator
Calculator.cpp
)

# Add test cpp file
add_executable (calculator_test
	tests/Calculator_test.cpp
)

# Link test executables against gtest & gtest_main
target_link_libraries(calculator_test calculator gtest gtest_main)

add_test(
	NAME toy_test
	COMMAND check
)