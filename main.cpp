#include <iostream>
#include "recursion.h"

int main(){
    std::cout << "\nTask A\n";
    std::cout << printRange(-2, 10) << "\n";

    std::cout << "\nTask B\n";
    int x = sumRange(1, 3);
    std::cout << x << "\n";   // 6

    int y = sumRange(-2, 10);
    std::cout << y << "\n";   // 52

    std::cout << "\nTask C\n";
    int size = 10;
    int *arr = new int[size]; // allocate array dynamically
    arr[0] = 12;
    arr[1] = 17;
    arr[2] = -5;
    arr[3] = 3;
    arr[4] = 7;
    arr[5] = -15;
    arr[6] = 27;
    arr[7] = 5;
    arr[8] = 13;
    arr[9] = -21;

    int sum1 = sumArray(arr, size); // Add all elements
    std::cout << "Sum is " << sum1 << "\n";  // Sum is 43
    
    int sum2 = sumArray(arr, 5); // Add up first five elements
    std::cout << "Sum is " << sum2 << "\n";  // Sum is 34
    
    std::cout << "\nTask D\n";
    
    std::cout << std::boolalpha << isAlphanumeric("ABCD") << "\n";        // true (1)
    std::cout << std::boolalpha <<  isAlphanumeric("Abcd1234xyz") << "\n"; // true (1)
    std::cout << std::boolalpha <<  isAlphanumeric("KLMN 8-7-6") << "\n";  // false (0)

    std::cout << "\nTask E\n";

    std::cout << std::boolalpha <<  nestedParens("((()))") << "\n";      // true (1)
    std::cout << std::boolalpha <<  nestedParens("()") << "\n";          // true (1)
    std::cout << std::boolalpha <<  nestedParens("") << "\n";            // true (1)

    std::cout << std::boolalpha <<  nestedParens("(((") << "\n";         // false (0)
    std::cout << std::boolalpha <<  nestedParens("(()") << "\n";         // false (0)
    std::cout << std::boolalpha <<  nestedParens(")(") << "\n";          // false (0)
    std::cout << std::boolalpha <<  nestedParens("a(b)c") << "\n";       // false (0)

    return 0;
}