#include <iostream>
#include "benchmark.hpp"

int main(){
    Benchmark::Benchmarks bench;
    std::cout << bench.forLoop(1000000) << std::endl;
}