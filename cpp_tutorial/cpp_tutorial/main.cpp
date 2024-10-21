#include <iostream>

void fizzbuzz(int value)
{
    for(int i{ 1 }; i <= value; ++i)
    {
        bool printed { false };
        if (i % 3 == 0)
        {
            printed = true;
            std::cout << "fizz";
        }
        if (i % 5 == 0)
        {
            printed = true;
            std::cout << "buzz";
        }
        if (i % 7 == 0)
        {
            printed = true;
            std::cout << "pop";
        }
        
        if (!printed)
        {
            std::cout << i;
        }
        
        std::cout << '\n';
    }
}

int main()
{
    fizzbuzz(150);

    return 0;
}
