#include <iostream>
#include "recursion.h"

void printRange(int left, int right){
    if(left <= right){
        std::cout << std::to_string(left) << "\n";
        printRange(left + 1, right);
    }
}

int sumRange(int left, int right){
    if(left == right){
        return left;
    }
    else{
        return left + sumRange(left + 1, right);
    }
}