#include "utils/vector_creator.hpp"

std::vector<int> generateRandomVector(int n) {
    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        v[i] = std::rand() % 1000;
    }
    return v;
}