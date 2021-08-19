import numpy as np
import pytest

from correlation import correlation
import matplotlib.pyplot as plt

def test_full_positive_correlation():
    values_x = range(0, 20)
    values_y = range(0, 20)

    r = correlation(values_x, values_y)

    assert r == 1.0


def test_full_positive_correlation_two():
    values_x = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
    values_y = [0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20]

    r = correlation(values_x, values_y)

    assert r == pytest.approx(1.0)
    r_np = np.corrcoef(values_x, values_y)
    assert r_np[0, 1] == r


def test_full_positive_correlation_two():
    values_x = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
    values_y = [10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20]

    r = correlation(values_x, values_y)
    assert r == 1.0


def test_full_negative_correlation():
    values_x = range(0, 20)
    values_y = list(reversed(range(0, 20)))

    r = correlation(values_x, values_y)

    assert r == -1.0


def test_real_data():
    values_verbraucherinsolvenzen = [
        1634.0,
        6886.0,
        9070.0,
        19857.0,
        32131.0,
        47230.0,
        66945.0,
        94389.0,
        103085.0,
        95730.0,
        98776.0,
        106290.0,
        101069.0,
        95560.0
    ]

    values_spaetaussiedler = [
        104916.0,
        95615.0,
        98484.0,
        91416.0,
        72885.0,
        59093.0,
        35522.0,
        7747.0,
        5792.0,
        4362.0,
        3360.0,
        2350.0,
        1829.0,
        1538.0
    ]

    assert len(values_spaetaussiedler) == len(values_verbraucherinsolvenzen)

    fig = plt.figure()
    ax = fig.add_subplot()
    plt.xlabel('x position')
    plt.ylabel('y position')

    ax.scatter(values_verbraucherinsolvenzen, values_spaetaussiedler)

#    plt.show()

    r = correlation(values_verbraucherinsolvenzen, values_spaetaussiedler)
    assert r == pytest.approx(-0.9964801022825676)