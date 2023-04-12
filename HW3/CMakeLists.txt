cmake_minimum_required(VERSION 3.24)
project (HW3)

set(CMAKE_CXX_STANDARD 17)

add_executable(HW3 main.cpp Currency.cpp Currency.h CurrencyFactory.cpp CurrencyFactory.h)
