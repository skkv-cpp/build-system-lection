cmake_minimum_required(VERSION 3.31.7)

project(HelloWorld)

add_library(hello SHARED lib/hello.cpp)
target_include_directories(hello PUBLIC include)

add_executable(main main.cpp)
target_link_libraries(main PRIVATE hello)
