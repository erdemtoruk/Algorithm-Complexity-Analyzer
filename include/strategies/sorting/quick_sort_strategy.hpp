#ifndef QUICK_SORT_STRATEGY_HPP
#define QUICK_SORT_STRATEGY_HPP

#include "strategies/sorting/sorting_strategy.hpp"

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
class QuickSortStrategy : public SortingStrategy {
public:
    void sort(std::vector<int>& values) const override;
    std::string name() const override;
};

#endif
