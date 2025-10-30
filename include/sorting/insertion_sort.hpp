#ifndef INSERTION_SORT_HPP
#define INSERTION_SORT_HPP

#include <iostream>
#include "utils/timer.hpp"
#include "utils/csv_writer.hpp"
#include "utils/vector_creator.hpp"

/*
 *  Run insertion sort for different size of arrays
 */
void testInsertionSort();

/*
 *  Insertion Sort works by repeatedly picking the next element from the unsorted portion
 *  of the array and inserting it into the correct position in the sorted portion.
 *  
 *  Best case: O(n)
 *  Average case: O(n^2)
 *  Worst case: O(n^2)
 * 
 *  Space complexity: O(1)
 */
void insertionSort(std::vector<int>&);

#endif
