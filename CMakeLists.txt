cmake_minimum_required(VERSION 3.14) 

project(SPRT)

add_executable(Sprt main.cpp)

target_sources(Sprt PRIVATE
    sprt.cpp
)
