# Big-O Analysis

The Big-O asymptotic notation gives the upper bound area, which can be described as following.

- $g$, $f$ are functions from $\mathbb{N}\rightarrow\mathbb{N}$ ($\mathbb{N}$ : The set of natural numbers)

- $f(n)=O(g(n))$, if there exists a positive integer $n_0$, and a positive constant $c$

  Constant $c$ is $f(n)\leq c\cdot g(n)$, for all $n\geq n_0$

- $O(g)$ is a set, but $f=O(g)$ does not mean $f\in O(g)$


## General stepwise procedure for Big-O runtime analysis

1. Figure out what the input is and what $n$ represents

2. Express the maximum number of operations the algorithm performs in terms of $n$

3. Eliminate all excluding the highest order terms

4. Remove all the constant factors


## Useful properties of Big-O notation analysis

- Constant Multiplication

  If $f(n)=c\cdot g(n)$, then $O(f(n))=O(g(n))$ ($c\neq 0$)
  
- Polynomial Function

  If $f(n)=a_0+a_1\cdot n+a_2\cdot n^2+\cdots+a_m\cdot n^m$, then $O(f(n))=O(n^m)$

- Summation Function

  If $f_1(n)+f_2(n)+\cdots+f_m(n)$ and $f_i(n)\leq f_{i+1}(n)$ for all $i=1,2,\cdots,m$,

  then $O(f(n))=O(\max(f_1(n),f_2(n),\cdots,f_m(n))$

- Logarithmic Function

  If $f(n)=\log_a{n}$ and $g(n)=\log_b{n}$, then $O(f(n))=O(g(n))$

  All log functions grow in the same manner in terms of Big-O

## Running Time Complexity

The algorithms can be classified as following from the best to worst performance.

- Logarithmic algorithm : $O(\log{n})$

  Runtime grows logarithmically in proportion to $n$

- Linear algorithm : $O(n)$

  Runtime grows directly in proportion to $n$

- Superlinear algorithm : $O(n\log{n})$

  Runtime grows in proportion to $n$

- Polynomial algorithm : $O(n^c)$

  Runtime grows quicker than previous, which is all based on $n$

- Exponential algorithm : $O(c^n)$

  Runtime grows even faster than polynomial algorithm based on $n$

- Factorial algorithm : $O(n!)$

  Runtime grows the fastest and becomes quicly unusable for even small values of $n$

($n$ : input size, $c$ : positive constant)

## Sources

[Link](https://www.geeksforgeeks.org/analysis-algorithms-big-o-analysis/)






