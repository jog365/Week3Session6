#include "number_tools.h"

#include <iostream>

void printTwoNumbers(int first, int second) {
    std::cout << first << " + " << second << " = " << first + second << "\n";
}

int largerNumber(int first, int second) {
    if (first >= second) {
        return first;
    }
    return second;
}
