#include <iostream>
#include "benchmark.hpp"

int main(){
    Benchmarks* bench = new Benchmarks();
    std::cout << bench -> forLoop(1000000) << std::endl;
    delete bench;
}