#include "strategies/sorting/insertion_sort_strategy.hpp"

void InsertionSortStrategy::sort(std::vector<int>& v) const {
    // Iterate over each element starting from the second
    for(int i = 1; i < (int) v.size(); i++){
        int value = v.at(i);    // Store the current element
        
        // Shift elements in the sorted part that are greater than `value` to the right
        for(int j = i-1; j >= 0 && value < v.at(j); j--){
            // Change position
            v.at(j+1) = v.at(j);
            v.at(j) = value;
        }
    }
}

std::string InsertionSortStrategy::name() const {
    return "insertion_sort";
}
