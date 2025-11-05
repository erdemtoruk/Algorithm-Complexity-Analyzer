# Algorithm-Complexity-Analyzer
This project benchmarks classic algorithms implemented in C++ and analyzes how their empirical runtime growth compares to theoretical time complexities.
Each algorithm is executed on randomly generated input data of varying sizes, measuring the minimum, maximum, and average execution times. The results are then visualized using Python.

# Contents
- [Algorithms](#Algorithms)
  - [Searching Algorithms](#searching-algorithms)
  - [Sorting Algorithms](#sorting-algorithms)
    - [Insertion Sort](#insertion-sort)
    - [Merge Sort](#merge-sort)
    - [Quick Sort](#quick-sort)

# Algorithms

## Searching Algorithms

## Sorting Algorithms

### Insertion Sort
A simple comparison-based sorting algorithm that builds the final sorted array one item at a time.

- **Time Complexity**
  - Best: O(n)
  - Average: O(n²)
  - Worst: O(n²)

- **Space Complexity**
  - O(1)

[Insertion Sort Header](include/sorting/insertion_sort.hpp) | [Insertion Sort Implementation](src/sorting/insertion_sort.cpp)

### Merge Sort
A divide-and-conquer algorithm that recursively splits the array into halves, sorts them, and then merges the sorted halves into one.

- **Time Complexity**
  - Best: O(nlogn)
  - Average: O(nlogn)
  - Worst: O(nlogn)

- **Space Complexity**
  - O(n)

[Merge Sort Header](include/sorting/merge_sort.hpp) | [Merge Sort Implementation](src/sorting/merge_sort.cpp)

### Quick Sort
A divide-and-conquer algorithm that partitions the array around a pivot element and recursively sorts the resulting subarrays.

- **Time Complexity**
  - Best: O(nlogn)
  - Average: O(nlogn)
  - Worst: O(n²)

- **Space Complexity**
  - O(logn)

[Quick Sort Header](include/sorting/quick_sort.hpp) | [Quick Sort Implementation](src/sorting/quick_sort.cpp)

# Lisence
This project is licensed under the MIT License.