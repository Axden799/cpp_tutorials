#include <iostream>

int getNum()
{
    int x{};
    std::cin >> x;
    return x;
}

int main()
{
    std::cout << "Enter an integer: ";
    int x { getNum() };
    std::cout << "Enter another integer: ";
    int y { getNum() };
    std::cout << x << " " << "+" << " " << y << " is " << x + y << '\n';
    std::cout << x << " " << "-" << " " << y << " is " << x - y << '\n';
    
    return 0;
}
