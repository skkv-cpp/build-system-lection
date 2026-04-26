cmake_minimum_required(VERSION 3.31.7)

project(HelloWorld)

if (HELLO)
	add_executable(hello hello.cpp)
	enable_testing()
	add_test(hello_test hello)
endif()
