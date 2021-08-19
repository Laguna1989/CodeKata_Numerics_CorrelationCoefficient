import pytest
from correlation import calculate_sum


@pytest.mark.parametrize("values, expected_sum", [([0], 0),
                                                  ([1], 1),
                                                  ([], 0),
                                                  (range(0, 10), 45)])
def test_sum_of_x_values(values, expected_sum):
    calculated_sum = calculate_sum(values)
    assert calculated_sum == expected_sum
