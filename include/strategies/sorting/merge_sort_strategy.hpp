#ifndef MERGE_SORT_STRATEGY_HPP
#define MERGE_SORT_STRATEGY_HPP

#include "strategies/sorting/sorting_strategy.hpp"

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
class MergeSortStrategy : public SortingStrategy {
public:
    void sort(std::vector<int>& values) const override;
    std::string name() const override;
};

#endif
