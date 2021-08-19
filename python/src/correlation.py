from math import sqrt
import numpy as np


def calculate_sum(values):
    return sum(values)


def calculate_sum_of_squares(values):
    return sum(map(lambda x: x * x, values))


def calculate_sum_of_multiplies(values_x, values_y):
    return sum(np.multiply(values_x, values_y))


def correlation(values_x, values_y):
    assert len(values_x) == len(values_y)
    n = len(values_x)

    sum_xy = calculate_sum_of_multiplies(values_x, values_y)
    sum_x = calculate_sum(values_x)
    sum_y = calculate_sum(values_y)

    sum_x_squared = calculate_sum_of_squares(values_x)
    sum_y_squared = calculate_sum_of_squares(values_y)

    return (n * sum_xy - sum_x * sum_y) / sqrt((n * sum_x_squared - sum_x ** 2) * (n * sum_y_squared - sum_y ** 2))
