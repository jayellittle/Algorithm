# Big-O Analysis

The Big-O asymptotic notation gives the upper bound area, which can be described as following.

- $g$, $f$ are functions from $\mathbb{N}\rightarrow\mathbb{N}$ ($\mathbb{N}$ : The set of natural numbers)

- Function $f$ is said to be $O(g)$ (Big-O of $g$), if there is a constant $c>0$ and a natural number $n_0$, which is $f(n)\leq c\cdot g(n)$ for all $n\geq n_0$

- $O(g)$ is a set, but $f=O(g)$ does not mean $f\in O(g)$


## General stepwise procedure for Big-O runtime analysis

1. Figure out what the input is and what $n$ represents

2. Express the maximum number of operations the algorithm performs in terms of $n$

3. Eliminate all excluding the highest order terms

4. Remove all the constant factors


## Useful properties of Big-O notation analysis

- a


## Sources

[Link](https://www.geeksforgeeks.org/analysis-algorithms-big-o-analysis/)
