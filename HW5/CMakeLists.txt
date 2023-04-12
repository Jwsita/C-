cmake_minimum_required(VERSION 3.24)
project(HW5)

set(CMAKE_CXX_STANDARD 17)

add_executable(HW5 main.cpp Option.cpp Option.h EuropeanPut.cpp EuropeanPut.h EuropeanCall.cpp EuropeanCall.h MCPricer.cpp MCPricer.h BoxMuller.cpp BoxMuller.h)
