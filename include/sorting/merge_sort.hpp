#ifndef MERGE_SORT_HPP
#define MERGE_SORT_HPP

#include <iostream>
#include "utils/timer.hpp"
#include "utils/csv_writer.hpp"
#include "utils/vector_creator.hpp"

/*
 *  Run merge sort for different size of arrays
 */
void testMergeSort();

/*
 *  Merge Sort is a divide and conquer algorithm that divides the array into halves,
 *  recursively sorts each half, and then merges the sorted halves back together.
 *  
 *  Best case: O(nlogn)
 *  Average case: O(nlogn)
 *  Worst case: O(nlogn)
 * 
 *  Space complexity: O(n)
 */
void mergeSort(std::vector<int>&, int, int);


/*
 * Combines two sorted subarrays into a single sorted segment within the original array.
 */
void merge(std::vector<int>&, int, int, int);
#endif
