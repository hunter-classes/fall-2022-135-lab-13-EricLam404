#include <iostream>
#include "recursion.h"

void printRange(int left, int right){
    if(left <= right){
        std::cout << std::to_string(left) << "\n";
        printRange(left + 1, right);
    }
}