#include "correlation.hpp"
#include <numeric>

double calculate_sum(std::vector<double> const& values)
{
    return std::accumulate(values.begin(), values.end(), 0.0);
}

double calculate_sum_of_multiplies(
    std::vector<double> const& values_x, std::vector<double> const& values_y)
{
    return std::inner_product(values_x.cbegin(), values_x.cend(), values_y.begin(), 0.0);
}

double calculate_sum_of_squares(std::vector<double> const& values)
{
    return std::inner_product(values.begin(), values.cend(), values.cbegin(), 0.0);
}

double correlation(std::vector<double> const& values_x, std::vector<double> const& values_y)
{
    auto const n = values_x.size();

    double const sum_xy = calculate_sum_of_multiplies(values_x, values_y);
    double const sum_x = calculate_sum(values_x);
    double const sum_y = calculate_sum(values_y);

    double const sum_x_squared = calculate_sum_of_squares(values_x);
    double const sum_y_squared = calculate_sum_of_squares(values_y);

    return (n * sum_xy - sum_x * sum_y)
        / sqrt((n * sum_x_squared - sum_x * sum_x) * (n * sum_y_squared - sum_y * sum_y));
}
