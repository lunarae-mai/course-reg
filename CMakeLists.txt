cmake_minimum_required(VERSION 3.25)
project(Project1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Project1
        Admin.cpp
        Admin.h
        College.cpp
        College.h
        Course.cpp
        Course.h
        Main.cpp
        Student.cpp
        Student.h)
