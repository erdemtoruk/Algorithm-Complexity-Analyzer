#include "strategies/sorting/quick_sort_strategy.hpp"

namespace {
void quickSort(std::vector<int>& v, int lowIndex, int highIndex){
    // Base case
    if(highIndex <= lowIndex)
        return;
    
    int leftIndex = lowIndex;
    int pivot = v[highIndex];   // Last element is pivot

    // Look for elements that smaller than pivot
    for(int rightIndex = lowIndex; rightIndex < highIndex; rightIndex++){
        if(v[rightIndex] < pivot){
            // Swap
            int temp = v[leftIndex];
            v[leftIndex] = v[rightIndex];
            v[rightIndex] = temp;

            leftIndex++;
        }
    }

    // Swap pivot to correct position
    v[highIndex] = v[leftIndex];
    v[leftIndex] = pivot;

    // Recursively sort left and right partitions
    quickSort(v, lowIndex, leftIndex - 1);
    quickSort(v, leftIndex + 1, highIndex);
}
}

void QuickSortStrategy::sort(std::vector<int>& values) const {
    quickSort(values, 0, static_cast<int>(values.size()) - 1);
}

std::string QuickSortStrategy::name() const {
    return "quick_sort";
}
