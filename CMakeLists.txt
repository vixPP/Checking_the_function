cmake_minimum_required(VERSION 3.10)
project(Checking_the_function)

add_subdirectory(catch2)
add_executable(Checking_the_function Checking_the_function.cpp "test.cpp")
target_link_libraries(Checking_the_function PRIVATE Catch2::Catch2)