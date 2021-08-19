# Overview

This is a Code Nummy about the correlation coefficient.

# Theory

## Correlation

Knowledge about correlation is a powerful tool in maths, statistics and data analysis. You have two 
(seemingly unrelated?) measures `x` and `y`. How likely is it that an increase in `x` leads to an 
increase in `y`? This is the question that is answered by the correlation between `x`and `y`.

This leads to all sort of interesting as well as entertaining observerations [1, 2, 3]. But remember,

"**Correlation does not mean causation!**" [wikipedia](https://en.wikipedia.org/wiki/Correlation_does_not_imply_causation)

But to be able to boast with this sentence among your friends, you need to understand how this *correlation thing* works
internally and how to calculate it.

Assume a set of `x` and `y` value pairs. E.g. the number of nuclear power plants per year and the amount of 
swimming pool drownings per year. Are they correlated or not?

The correlation coefficient `r` will answer this question. It is a value in the range `[-1, 1]` where a value of 0
means "
completely unrelated", and a value of -1 or 1 means "completely related". It is calculated as follows:

<img src="https://render.githubusercontent.com/render/math?math=r%20%3D%20%5Cfrac%7Bn%5Ccdot%5Csum%20xy%20-%20%5Csum%20x%20%5Csum%20y%7D%7B%5Csqrt%7B(%20n%5Csum%20x%5E2%20-%20(%5Csum%20x)%5E2)%5Ccdot(n%5Csum%20y%5E2%20-(%5Csum%20y)%5E2)%7D%7D">

# Exercise

* implement the function `calculate_sum(values)` in `src/correlation`, which calculates the sum of the values
* implement the function `calculate_sum_of_squares(values)` in `src/correlation`, which calculates the sum of the
  squared values
* implement the function `calculate_sum_of_multiplies` in `src/correlation`, which calculates the sum of the multiplied
  values
* Now implement the function `correlation` in `src/correlation`, which will calculate the value `r` by using all the
  previously defined functions.

## Hints for C++
`std::accumulate` and `std::inner_product` can prove helpful.

## Hints for Python
`np.multiply` can prove helpful.

## Application

Think of any measurement of two (possibly?) related values, that you can easily perform on your own. Some ideas:

* grab some books from your bookshelf and measure width and height of a book
* the width and length of individual spaghetti from a pack
* pick two measures from [csgostats](https://csgostats.gg/match) or [league of graphs](https://www.leagueofgraphs.com/)
* stock market example: S&P500 and bitcoin value in USD
* any of the examples from [1, 2, 3]

# Further Reading and references

* Correlation examples
    * [1] [buzzfeed](https://www.buzzfeednews.com/article/kjh2110/the-10-most-bizarre-correlations)
    * [3] [spurious correlations](https://www.tylervigen.com/spurious-correlations)
    * [2] [Scheinkorrelation (german only)](https://scheinkorrelation.jimdofree.com/)
* [The organic chemistry teacher - Correlation Coefficient (youtube video)](https://www.youtube.com/watch?v=11c9cs6WpJU)
