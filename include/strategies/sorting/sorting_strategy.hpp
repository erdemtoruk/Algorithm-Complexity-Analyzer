#ifndef SORTING_STRATEGY_HPP
#define SORTING_STRATEGY_HPP

#include <string>
#include <vector>

class SortingStrategy {
public:
    virtual ~SortingStrategy() {}
    virtual void sort(std::vector<int>& values) const = 0;
    virtual std::string name() const = 0;
};

#endif
