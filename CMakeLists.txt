cmake_minimum_required(VERSION 3.21)
project(Lab4KP)

set(CMAKE_CXX_STANDARD 17)

add_executable(Lab4KP main.cpp Product.h Position.h Order.h Client.h PriceBase.h)
