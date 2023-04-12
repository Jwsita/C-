cmake_minimum_required(VERSION 3.24)
project(HW4)

set(CMAKE_CXX_STANDARD 17)

add_executable(HW4 main.cpp Option.cpp Option.h EuropeanCall.cpp EuropeanCall.h EuropeanPut.cpp EuropeanPut.h)
