#include "../../include/sorting/insertion_sort.hpp"

void testInsertionSort(std::vector<int>& v){
    Timer t;
    double milisec = 0;

    std::cout << "Before sorting: ";
    for (int num : v)
        std::cout << num << " ";
    std::cout << "\n";

    t.start();
    insertionSort(v);
    milisec = t.stop();

    std::cout << "After sorting:  ";
    for (int num : v)
        std::cout << num << " ";
    std::cout << "\n";

    std::cout << "Elapsed time: " << milisec << "ms" << std::endl; 
}

void insertionSort(std::vector<int>& v){
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

