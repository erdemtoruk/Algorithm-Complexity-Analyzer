#include <cstdlib>
#include <ctime>
#include <iostream>

#include "testers/base_tester.hpp"
#include "testers/sorting_tester.hpp"

int main() {
    std::srand(std::time(0));

    int familyChoice;
    std::cout << "Select tester option:\n";
    std::cout << "0. Run all sorting algorithms\n";
    std::cout << "1. Sorting\n";
    std::cout << "Choice: ";
    if (!(std::cin >> familyChoice)) {
        std::cout << "Invalid input." << std::endl;
        return 1;
    }

    BaseTester* tester = NULL;
    bool runAll = false;

    switch (familyChoice) {
        case 0:
            tester = new SortingTester();
            runAll = true;
            break;
        case 1:
            tester = new SortingTester();
            break;
        default:
            std::cout << "Invalid tester option." << std::endl;
            return 1;
    }

    if (runAll) {
        std::cout << "Running all sorting algorithms..." << std::endl;
        tester->runAll();
    } else if (!tester->selectStrategy()) {
        delete tester;
        return 1;
    } else {
        std::cout << "Running test..." << std::endl;
        tester->run();
    }

    std::cout << "Tests completed." << std::endl;
    delete tester;

    return 0;
}
