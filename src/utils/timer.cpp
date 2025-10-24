#include "../../include/utils/timer.hpp"

void Timer::start(){
    startTime = std::chrono::high_resolution_clock::now();
}

double Timer::stop(){
    auto endTime = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> elapsed = endTime - startTime;
    return elapsed.count(); // returns milliseconds
}