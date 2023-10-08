cmake_minimum_required(VERSION 3.14) 

option(MAKE_EXE "exe?" OFF)

project(SPRT)

add_executable(Sprt main.cpp)

target_sources(Sprt PRIVATE
    sprt.cpp
)
