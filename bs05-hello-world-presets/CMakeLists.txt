cmake_minimum_required(VERSION 3.31.7)

project(HelloWorld)

add_executable(hello hello.cpp)

enable_testing()
add_test(hello_test hello)
