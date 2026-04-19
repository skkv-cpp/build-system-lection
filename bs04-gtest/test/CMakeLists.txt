add_executable(test_math test_add.cpp test_div.cpp test_mul.cpp test_sub.cpp)
target_link_libraries(test_math PRIVATE math GTest::gtest GTest::gtest_main)

add_test(NAME test_math COMMAND test_math)
