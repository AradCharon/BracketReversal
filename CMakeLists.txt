cmake_minimum_required(VERSION 3.10)

project(BracketReversal)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


# Header files location
include_directories(include)


# Main executable
add_executable(
    BracketReversal
    src/main.cpp
    src/bracket_reversal.cpp
)


# Test executable
add_executable(
    BracketReversalTests
    tests/test_bracket.cpp
    src/bracket_reversal.cpp
)