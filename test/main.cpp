#include "circle.h"
#include "geomCalc.h"
#include <gtest/gtest.h>

TEST(perimeterTest, correctInput)
{
    Circle one;

    one.r = 5;
    EXPECT_FLOAT_EQ(31.415, Perimeter(one));

    one.r = 1337.322;
    EXPECT_FLOAT_EQ(8402.3945, Perimeter(one));

    one.r = 0.005;
    EXPECT_FLOAT_EQ(0.031415, Perimeter(one));
}