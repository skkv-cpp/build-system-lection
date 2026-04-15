#include "operations/sub.hh"

#include <gtest/gtest.h>


namespace test::math
{

TEST(test_sub, simple)
{
    EXPECT_EQ(::math::sub(5, 3), 2);
    EXPECT_EQ(::math::sub(-1, 1), -2);
    EXPECT_NE(::math::sub(5, 3), 3);
}

} // namespace test::math
