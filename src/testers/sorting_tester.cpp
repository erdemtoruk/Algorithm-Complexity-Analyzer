#include "testers/sorting_tester.hpp"

#include <iostream>
#include <vector>

#include "strategies/sorting/insertion_sort_strategy.hpp"
#include "strategies/sorting/merge_sort_strategy.hpp"
#include "strategies/sorting/quick_sort_strategy.hpp"
#include "utils/csv_writer.hpp"
#include "utils/timer.hpp"
#include "utils/vector_creator.hpp"

SortingTester::SortingTester() : strategy(nullptr) {}

SortingTester::~SortingTester() {
    delete strategy;
}

void SortingTester::setStrategy(SortingStrategy* sortingStrategy) {
    if (!sortingStrategy) {
        std::cout << "SortingTester requires a sorting strategy." << std::endl;
        return;
    }

    if (strategy != sortingStrategy) {
        delete strategy;
        strategy = sortingStrategy;
    }
}

bool SortingTester::selectStrategy() {
    int strategyChoice;
    std::cout << "Select sorting strategy:\n";
    std::cout << "1. Insertion Sort\n";
    std::cout << "2. Merge Sort\n";
    std::cout << "3. Quick Sort\n";
    std::cout << "Choice: ";

    if (!(std::cin >> strategyChoice)) {
        std::cout << "Invalid input." << std::endl;
        return false;
    }

    switch (strategyChoice) {
        case 1:
            setStrategy(new InsertionSortStrategy());
            return true;
        case 2:
            setStrategy(new MergeSortStrategy());
            return true;
        case 3:
            setStrategy(new QuickSortStrategy());
            return true;
        default:
            std::cout << "Invalid sorting strategy." << std::endl;
            return false;
    }
}

void SortingTester::run() {
    if (!strategy) {
        std::cout << "Select a sorting strategy before running the tester." << std::endl;
        return;
    }

    CSVWriter writer("results/" + strategy->name() + ".csv");
    Timer timer;

    for (int size = 100; size < 5000; size += 100) {
        double total = 0.0;
        double minimum = 1e9;
        double maximum = 0.0;

        for (int iteration = 0; iteration < 20; ++iteration) {
            std::vector<int> values = generateRandomVector(size);

            timer.start();
            strategy->sort(values);
            const double elapsedMilliseconds = timer.stop();

            if (elapsedMilliseconds < minimum) {
                minimum = elapsedMilliseconds;
            }
            if (elapsedMilliseconds > maximum) {
                maximum = elapsedMilliseconds;
            }
            total += elapsedMilliseconds;
        }

        writer.addRow(size, minimum, total / 20.0, maximum);
    }
}

void SortingTester::runAll() {
    std::cout << "Running Insertion Sort Strategy..." << std::endl;
    setStrategy(new InsertionSortStrategy());
    run();

    std::cout << "Running Merge Sort Strategy..." << std::endl;
    setStrategy(new MergeSortStrategy());
    run();

    std::cout << "Running Quick Sort Strategy..." << std::endl;
    setStrategy(new QuickSortStrategy());
    run();
}
