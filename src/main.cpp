#include "../include/sorting/insertion_sort.hpp"

int main() {
    std::vector<int> data = {5, 2, 9, 1, 5, 6, 10, 10, 12, 11, 6, 2, 12, 15, 11, 6, 1, 5, 20, 3};

    testInsertionSort(data);

    return 0;
}

