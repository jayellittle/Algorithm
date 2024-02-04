# Asymptotic Notation

Asymptotic notation is a way to describe the running time or space complexity of an algorithm based on the input size. It is commonly used in complexity analysis to describe how an algorithm performs as the size of the input grows. Following three of these notations are most commonly used.


1. Big-O Notation ($O$)

   - Provides an upper bound on the growth rate of an algorithm's running time or space usage

   - Represents the worst-case scenario

     - The maximum amount of time or space an algorithm may need to solve a problem

   - If an algorithm's running time is $O(n)$, the running time increases linearly with the input size $n$, or less


2. Omega Notation ($\Omega$)

   - Provides a lower bound on the growth rate of an algorithm's running time or space usage

   - Represents the best-case scenario

     - The minimum amount of time or space an algorithm may need to solve a problem

   - If an algorithm's running time is $\Omega(n)$, the running time increase linearly with the input size $n$, or more


3. Theta Notation ($\Theta$)

   - Provides both upper and lower bound on the growth rate of an algorithm's running time or space usage

   - Represents the average-case scenario

     - The amount of time or space an algorithm typically needs to solve a problem

   - If an algorithm's running time is $\Theta(n)$, the running time increase linearly with the input size $n$


Asymptotic notation does not provide an exact running time or space usage for an algorithm, but rather a description of how the algorithm scales with respect to input size. It is a useful tool for comparing the efficiency of different algorithms and for predicting how they will perform on large input sizes.




https://www.geeksforgeeks.org/asymptotic-notation-and-analysis-based-on-input-size-of-algorithms/

https://www.geeksforgeeks.org/analysis-algorithms-big-o-analysis/
