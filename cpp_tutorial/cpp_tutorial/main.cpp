#include <iostream>

int sumTo(int value)
{
    int sum { };
    for(int i{ value }; i > 0; --i)
    {
        sum += i;
    }
    
    return sum;
}

int main()
{
    std::cout << sumTo(5) << " \n";

    return 0;
}
