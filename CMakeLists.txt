cmake_minimum_required(VERSION 3.21)
project(linuxEx)

set(CMAKE_CXX_STANDARD 14)

add_executable(linuxEx main.cpp cmake-build-debug/stockDateNode.cpp stockData.cpp stockData.h cmake-build-debug/stockDateNode.cpp)
