#include "sorting/insertion_sort.hpp"

void testInsertionSort(){
    Timer t;
    double milisec = 0;

    CSVWriter writer("results/insertion_sort.csv");

    for (int n = 100; n < 5000; n+=100)
    {
        double total = 0;
        double min = 1e9;
        double max = -1;
        for(int i = 0; i < 20; i++)
        {
            std::vector<int> v = generateRandomVector(n);

            t.start();
            insertionSort(v);
            milisec = t.stop();

            if(milisec < min) min = milisec;
            if(milisec > max) max = milisec;
            total += milisec;
        }
        double avg = total / 20.0;

        writer.addRow(n, min, avg, max);
    }
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

