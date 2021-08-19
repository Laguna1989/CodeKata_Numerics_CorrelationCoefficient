#include <gtest/gtest.h>
#include "correlation.hpp"

TEST(SumOfMultiplies, TestCase1)
{
    std::vector<double> values_x { 1.0, 2.0, 3.0 };
    std::vector<double> values_y { 1.0, 1.0, 1.0 };

    ASSERT_DOUBLE_EQ(calculate_sum_of_multiplies(values_x, values_y), 6.0);
}

TEST(SumOfMultiplies, TestCase2)
{
    std::vector<double> values_x { 1.0, 2.0, 3.0 };
    std::vector<double> values_y { 2.0, 2.0, 2.0 };

    ASSERT_DOUBLE_EQ(calculate_sum_of_multiplies(values_x, values_y), 12.0);
}

TEST(SumOfMultiplies, TestCase3)
{
    std::vector<double> values_x { 1.0, 2.0, 3.0 };
    std::vector<double> values_y { 4.0, 5.0, 6.0 };

    ASSERT_DOUBLE_EQ(calculate_sum_of_multiplies(values_x, values_y), 32.0);
}
