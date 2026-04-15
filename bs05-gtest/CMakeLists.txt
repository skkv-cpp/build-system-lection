cmake_minimum_required(VERSION 3.31.7)

project(gtest_example)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

include(CPM)
include(dependencies)

add_subdirectory(src)

include(CTest)
enable_testing()
add_subdirectory(test)
