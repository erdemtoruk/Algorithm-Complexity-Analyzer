#include "sorting/quick_sort.hpp"

void testQuickSort(){
    Timer t;
    double milisec = 0;

    CSVWriter writer("results/quick_sort.csv");

    for (int n = 100; n < 5000; n+=100)
    {
        double total = 0;
        double min = 1e9;
        double max = -1;
        for(int i = 0; i < 20; i++)
        {
            std::vector<int> v = generateRandomVector(n);

            t.start();
            quickSort(v, 0, v.size()-1);
            milisec = t.stop();

            if(milisec < min) min = milisec;
            if(milisec > max) max = milisec;
            total += milisec;
        }
        double avg = total / 20.0;

        writer.addRow(n, min, avg, max);
    }
}

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