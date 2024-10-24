#include <iostream>
#include "io.h"

int readNumber();

void writeAnswer(int answer);

int main()
{
    int x{ readNumber() };
    std::cout << "First number: " << x << '\n';
    int y{ readNumber() };
    std::cout << "Second number: " << y << '\n';
    writeAnswer(x + y);
    
    return 0;
}
