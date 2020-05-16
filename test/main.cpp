#include "circle.h"
#include "geomCalc.h"
#include "intersection.h"
#include "structFill.h"

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

TEST(structFill, correctFill)
{
    Circle one;
    std::string text = "circle(14.74 -70.25, 9)";

    EXPECT_TRUE(structFill(one, text));

    text = "circle(-68.145 52.008, 32)";
    EXPECT_TRUE(structFill(one, text));

    text = "circle(-51.32 -49.22, 158)";
    EXPECT_TRUE(structFill(one, text));
}

TEST(structFillTest, incorrectFill)
{
    Circle one;
    std::string text = "triangle(1.5 1.5, 3)";

    EXPECT_FALSE(structFill(one, text));

    text = "circle(56 39.5, -18)";
    EXPECT_FALSE(structFill(one, text));
}

TEST(intersectionTest, intersect)
{
    Circle one;
    one.x = 5;
    one.y = 5;
    one.r = 10;

	Circle two;
    two.x = 0;
    two.y = 0;
    two.r = 10;

	EXPECT_TRUE(Intersection(one, two));
}

TEST(intersectionTest, not_intersect)
{
    Circle one;
    one.x = 100;
    one.y = 100;
    one.r = 10;

    Circle two;
    two.x = -100;
    two.y = -100;
    two.r = 10;

    EXPECT_FALSE(Intersection(one, two));
}