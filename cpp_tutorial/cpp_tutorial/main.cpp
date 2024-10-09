#include <iostream>

int readNumber()
{
    int num {};
    std::cout << "Enter a number: ";
    std::cin >> num;
    return num;
}

void writeAnswer(int answer)
{
    std::cout << "The answer is: " << answer << '\n';
}

int main()
{
    int x { readNumber() };
    int y { readNumber() };
    writeAnswer(x + y);
    
    return 0;
}
