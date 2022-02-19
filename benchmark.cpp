#include <iostream>
#include <chrono>
#include "benchmark.hpp"

int Benchmarks::forLoop(int n){
    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < n; i++ ){
    }
    auto stop = std::chrono::high_resolution_clock::now();
    return (stop-start).count();
}
