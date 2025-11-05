#include "sorting/insertion_sort.hpp"
#include "sorting/merge_sort.hpp"
#include "sorting/quick_sort.hpp"


int main() {
    std::srand(std::time(0));

    testInsertionSort();
    testMergeSort();
    testQuickSort();

    return 0;
}

