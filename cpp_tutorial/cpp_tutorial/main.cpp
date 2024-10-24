#include <iostream>

double getValue()
{
    std::cout << "Enter a double value: ";
    double x{};
    std::cin >> x;
    return x;
}

char getSymbol()
{
    std::cout << "Enter +, -, *, or /: ";
    char a{};
    std::cin >> a;
    return a;
}

void calculateResult(double x, double y, char symbol)
{
    std::cout << x << " " << symbol << " " << y << " is ";
    
    if (symbol == '+')
        std::cout << x + y << '\n';
    if (symbol == '-')
        std::cout << x - y << '\n';
    if (symbol == '*')
        std::cout << x * y << '\n';
    if (symbol == '/')
        std::cout << x / y << '\n';
}

int main()
{
    double x { getValue() };
    double y { getValue() };
    char symbol { getSymbol() };
    calculateResult(x, y, symbol);
    
    return 0;
}
