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

TEST(perimeterTest, incorrectInput)
{
    Circle one;

    one.r = -10;
    EXPECT_TRUE(Perimeter(one) < 0);
}

TEST(areaTest, correctInput)
{
    Circle one;

	one.r = 8.65124;
    EXPECT_FLOAT_EQ(235.12228, Area(one));

	one.r = 93.59;
    EXPECT_FLOAT_EQ(27516.6752, Area(one));

	one.r = 14.55;
    EXPECT_FLOAT_EQ(665.0634, Area(one));
}

