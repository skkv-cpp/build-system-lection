add_executable(test_math test_add.cc test_div.cc test_mul.cc test_sub.cc)
target_link_libraries(test_math PRIVATE math GTest::gtest GTest::gtest_main)

add_test(NAME test_math COMMAND test_math)
