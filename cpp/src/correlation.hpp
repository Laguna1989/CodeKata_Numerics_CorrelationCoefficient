#ifndef CODE_KATA_CORRELATION_HPP
#define CODE_KATA_CORRELATION_HPP

#include <vector>

double calculate_sum(std::vector<double> const& values);

double calculate_sum_of_multiplies(
    std::vector<double> const& values_x, std::vector<double> const& values_y);

double calculate_sum_of_squares(std::vector<double> const& values);

double correlation(std::vector<double> const& values_x, std::vector<double> const& values_y);

#endif // CODE_KATA_CORRELATION_HPP
