#include "sorting/merge_sort.hpp"

void testMergeSort(){
    Timer t;
    double milisec = 0;

    CSVWriter writer("results/merge_sort.csv");

    for (int n = 100; n < 5000; n+=100)
    {
        double total = 0;
        double min = 1e9;
        double max = -1;
        for(int i = 0; i < 20; i++)
        {
            std::vector<int> v = generateRandomVector(n);

            t.start();
            mergeSort(v, 0, (int) v.size()-1);
            milisec = t.stop();

            if(milisec < min) min = milisec;
            if(milisec > max) max = milisec;
            total += milisec;
        }
        double avg = total / 20.0;

        writer.addRow(n, min, avg, max);
    }
}

void mergeSort(std::vector<int>& v, int p, int r){
    if(p < r){
        int q = (p+r)/2;        // Middle index
        mergeSort(v, p, q);     // Sort left-side
        mergeSort(v, q+1, r);   // Sort right-side
        merge(v, p, q, r);      // Merge sorted subarrays 
    }
}

void merge(std::vector<int>& v, int p, int q, int r){
    // Temporary arrays
    std::vector<int> left;
    std::vector<int> right;

    // Copy data to temporary arrays
    for(int i = 0; i < q-p+1; i++){
        left.push_back(v[p+i]);
    }
    left.push_back(INT32_MAX);

    for(int j = 0; j < r-q; j++){
        right.push_back(v[q+j+1]);
    }
    right.push_back(INT32_MAX);

    // Merge the two sorted subarrays back into the original array
    int i = 0;
    int j = 0;
    for (int k = p; k <= r; k++)
    {
        if(left[i] < right[j])
            v[k] = left[i++];
        else
            v[k] = right[j++];
    }
}
