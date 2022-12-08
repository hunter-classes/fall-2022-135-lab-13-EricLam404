#include <iostream>
#include "recursion.h"

int main(){
    printRange(-2, 10);

    int x = sumRange(1, 3);
    std::cout << x << "\n";   // 6

    int y = sumRange(-2, 10);
    std::cout << y << "\n";   // 52

    return 0;
}