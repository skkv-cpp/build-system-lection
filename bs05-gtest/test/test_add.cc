#include "operations/add.hh"

#include <gtest/gtest.h>


namespace test::math
{

TEST(test_add, simple)
{
    EXPECT_EQ(::math::add(2, 3), 5);
    EXPECT_EQ(::math::add(-1, 1), 0);
    EXPECT_NE(::math::add(2, 2), 5);
}

} // namespace test::math
