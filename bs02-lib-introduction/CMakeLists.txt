cmake_minimum_required(VERSION 3.31.7)

project(HelloWorld)

add_library(hello lib/hello.cpp)
target_include_directories(hello include)

add_executable(main main.cpp)
target_link_libraries(main hello)
