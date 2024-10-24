//
//  io.cpp
//  cpp_tutorial
//
//  Created by Denis Dutka on 10/24/24.
//
#include <iostream>
#include "io.h"

int readNumber()
{
    int x{};
    std::cout << "Enter a number: ";
    std::cin >> x;
    return x;
}

void writeAnswer(int answer)
{
    std::cout << "The sum of these two values is: " << answer << '\n';
}
