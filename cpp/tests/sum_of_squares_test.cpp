#include "correlation.hpp"
#include <gtest/gtest.h>
#include <tuple>

class SumOfSquaresTestFixture
    : public ::testing::TestWithParam<std::tuple<std::vector<double>, double>> {
};

TEST_P(SumOfSquaresTestFixture, SumOfSquareValues)
{
    std::vector<double> const values = std::get<0>(GetParam());
    double const expected_sum = std::get<1>(GetParam());

    double const calculated_value = calculate_sum_of_squares(values);

    ASSERT_DOUBLE_EQ(expected_sum, calculated_value);
}

INSTANTIATE_TEST_SUITE_P(SumOfSquaresTest, SumOfSquaresTestFixture,
    ::testing::Values(std::make_tuple(std::vector<double> { 0.0 }, 0.0),
        std::make_tuple(std::vector<double> { 1.0 }, 1.0),
        std::make_tuple(std::vector<double> {}, 0.0),
        std::make_tuple(
            std::vector<double> { 0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0 }, 285.0)));
