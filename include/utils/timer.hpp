#ifndef TIMER_HPP
#define TIMER_HPP

#include <chrono>

class Timer {
    private:
        std::chrono::high_resolution_clock::time_point startTime;
    public:
        // Start the timer
        void start();

        // Stop the timer and return elapsed time in milliseconds
        double stop();
};

#endif