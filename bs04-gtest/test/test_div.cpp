#include "operations/div.h"

#include <gtest/gtest.h>


namespace test::math
{

TEST(test_div, simple)
{
    EXPECT_EQ(::math::div(6, 2), 3);
    EXPECT_EQ(::math::div(-6, 2), -3);
    EXPECT_NE(::math::div(6, 2), 4);
}

} // namespace test::math
