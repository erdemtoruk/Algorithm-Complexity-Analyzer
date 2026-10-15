#ifndef INSERTION_SORT_STRATEGY_HPP
#define INSERTION_SORT_STRATEGY_HPP

#include "strategies/sorting/sorting_strategy.hpp"

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
class InsertionSortStrategy : public SortingStrategy {
public:
    void sort(std::vector<int>& values) const override;
    std::string name() const override;
};

#endif
