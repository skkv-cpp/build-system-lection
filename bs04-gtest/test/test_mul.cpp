#include "operations/mul.hh"

#include <gtest/gtest.h>


namespace test::math
{

TEST(test_mul, simple)
{
    EXPECT_EQ(::math::mul(2, 3), 6);
    EXPECT_EQ(::math::mul(-1, 1), -1);
    EXPECT_NE(::math::mul(2, 2), 5);
}

} // namespace test::math
