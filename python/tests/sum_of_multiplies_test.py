import pytest
from correlation import  calculate_sum_of_multiplies

def test_sum_of_multiplies_simple():
    values_x = [1,2,3]
    values_y = [1,1,1]

    assert calculate_sum_of_multiplies(values_x, values_y) == 6

def test_sum_of_multiplies_simple2():
    values_x = [1,2,3]
    values_y = [2,2,2]

    assert calculate_sum_of_multiplies(values_x, values_y) == 12

def test_sum_of_multiplies_simple3():
    values_x = [1,2,3]
    values_y = [4,5,6]

    assert calculate_sum_of_multiplies(values_x, values_y) == 32