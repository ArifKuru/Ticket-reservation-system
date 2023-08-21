cmake_minimum_required(VERSION 3.25)
project(untitled2)

set(CMAKE_CXX_STANDARD 11)

add_executable(untitled2 main.cpp event.cpp event.h customer.cpp customer.h manager.cpp manager.h PERSON.h)
