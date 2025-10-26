# Algorithm-Complexity-Analyzer

# Description
This project benchmarks classic algorithms implemented in C++ and analyzes how their empirical runtime growth compares to theoretical time complexities.
Each algorithm is executed on randomly generated input data of varying sizes, measuring the minimum, maximum, and average execution times. The results are then visualized using Python.

# Algorithms

## Sorting Algorithms

### Insertion Sort
A simple comparison-based sorting algorithm that builds the final sorted array one item at a time.

*Time Complexity
-Best: O(n)
-Average O(n^2)
-Worst: O(n^2)

*Space Complexity
-O(1)

[Insertion Sort Header](include/sorting/insertion_sort.hpp)
[Insertion Sort Implementation](src/sorting/insertion_sort.cpp)

# Lisence
This project is licensed under the MIT License.