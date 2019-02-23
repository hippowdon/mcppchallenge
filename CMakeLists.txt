cmake_minimum_required(VERSION 3.0.0)
project(mcppchallenge VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)

find_package(Catch2 REQUIRED)

add_executable(chapter_1_1 main.cpp chapter1_1.cpp)
