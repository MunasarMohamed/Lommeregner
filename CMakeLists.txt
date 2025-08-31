cmake_minimum_required(VERSION 3.29)
project(Calculator C)

set(CMAKE_C_STANDARD 11)

add_executable(Calculator main.c
        calculator.c
        calculator.h)
