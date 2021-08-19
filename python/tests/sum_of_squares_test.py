import pytest
from correlation import calculate_sum_of_squares


@pytest.mark.parametrize("values, expected_sum", [([0], 0),
                                                  ([1], 1),
                                                  ([], 0),
                                                  ([2], 4),
                                                  (range(0, 3), 5),
                                                  (range(0, 10), 285)
                                                  ])
def test_sum_of_x_values(values, expected_sum):
    calculated_sum_of_squares = calculate_sum_of_squares(values)
    assert calculated_sum_of_squares == expected_sum
