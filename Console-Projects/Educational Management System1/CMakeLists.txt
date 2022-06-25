cmake_minimum_required(VERSION 3.21)
project(Educational_Management_System1)

set(CMAKE_CXX_STANDARD 14)

add_executable(Educational_Management_System1 main.cpp "Doctor .h" Doctor.cpp Courses.h Courses.cpp Student.h Student.cpp)
