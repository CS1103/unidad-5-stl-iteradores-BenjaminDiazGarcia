cmake_minimum_required(VERSION 3.14)
project(ProgressionSTL)

set(CMAKE_CXX_STANDARD 17)

add_executable(ProgressionSTL main.cpp ArithProgress.cpp ArithProgress.h GeomProgress.cpp GeomProgress.h FibonacciProgress.cpp FibonacciProgress.h)