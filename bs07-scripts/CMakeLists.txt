cmake_minimum_required(VERSION 3.31.7)

project(scripts-example)

add_executable(hello EXCLUDE_FROM_ALL hello.cpp)

find_package(Python3 COMPONENTS Interpreter REQUIRED)

add_custom_target(SetupPythonVenv
    COMMAND ${Python3_EXECUTABLE} -m venv venv
)

add_custom_target(RunScript
    COMMAND ${Python3_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/run.py ${PROJECT_BINARY_DIR}/hello
    DEPENDS SetupPythonVenv hello
)


