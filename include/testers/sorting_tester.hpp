#ifndef SORTING_TESTER_HPP
#define SORTING_TESTER_HPP

#include "strategies/sorting/sorting_strategy.hpp"
#include "testers/base_tester.hpp"

class SortingTester : public BaseTester {
private:
    SortingStrategy* strategy;

public:
    SortingTester();
    ~SortingTester();
    SortingTester(const SortingTester&) = delete;
    SortingTester& operator=(const SortingTester&) = delete;
    void setStrategy(SortingStrategy* sortingStrategy);
    bool selectStrategy() override;
    void run() override;
    void runAll() override;
};

#endif
