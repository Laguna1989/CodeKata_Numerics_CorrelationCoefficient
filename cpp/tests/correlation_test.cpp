#include "correlation.hpp"
#include <algorithm>
#include <gtest/gtest.h>
#include <numeric>

std::vector<double> range(int count)
{
    std::vector<double> values(count, 0);
    std::iota(values.begin(), values.end(), 0.0);
    return values;
}

TEST(CorrelationTest, FullPositiveCorrelation)
{
    auto values_x = range(20);
    auto values_y = range(20);
    double const r = correlation(values_x, values_y);

    ASSERT_DOUBLE_EQ(r, 1.0);
}

TEST(CorrelationTest, FullNegativeCorrelation)
{
    auto values_x = range(20);
    std::vector<double> values_y(20, 0.0);
    std::transform(values_x.cbegin(), values_x.cend(), values_y.begin(), [](auto v) { return -v; });
    double const r = correlation(values_x, values_y);

    ASSERT_DOUBLE_EQ(r, -1.0);
}

TEST(CorrelationTest, FullPositiveCorrelationExampleTwo)
{
    std::vector<double> values_x { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    std::vector<double> values_y { 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };
    double const r = correlation(values_x, values_y);

    ASSERT_DOUBLE_EQ(r, 1.0);
}

TEST(CorrelationTest, FullPositiveCorrelationExampleThree)
{
    std::vector<double> values_x { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    std::vector<double> values_y { 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
    double const r = correlation(values_x, values_y);

    ASSERT_DOUBLE_EQ(r, 1.0);
}

TEST(CorrelationTest, RealData)
{
    std::vector<double> values_x { 1634.0, 6886.0, 9070.0, 19857.0, 32131.0, 47230.0, 66945.0,
        94389.0, 103085.0, 95730.0, 98776.0, 106290.0, 101069.0, 95560.0 };
    std::vector<double> values_y { 104916.0, 95615.0, 98484.0, 91416.0, 72885.0, 59093.0, 35522.0,
        7747.0, 5792.0, 4362.0, 3360.0, 2350.0, 1829.0, 1538.0 };
    double const r = correlation(values_x, values_y);

    ASSERT_DOUBLE_EQ(r, -0.9964801022825676);
}
