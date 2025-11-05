#ifndef QUICK_SORT_HPP
#define QUICK_SORT_HPP

#include <iostream>
#include "utils/timer.hpp"
#include "utils/csv_writer.hpp"
#include "utils/vector_creator.hpp"

/*
 *  Run quick sort for different size of arrays
 */
void testQuickSort();

/*
 *  Quick Sort is a divide and conquer algorithm that selects a pivot element,
 *  partitions the array into two halves and recursively sorts each half.
 *  
 *  Best case: O(nlogn)
 *  Average case: O(nlogn)
 *  Worst case: O(n^2)
 * 
 *  Space complexity: O(logn)
 */
void quickSort(std::vector<int>&, int, int);

#endif
