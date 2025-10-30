#include "sorting/insertion_sort.hpp"
#include "sorting/merge_sort.hpp"


int main() {
    std::srand(std::time(0));

    testInsertionSort();
    testMergeSort();

    return 0;
}

