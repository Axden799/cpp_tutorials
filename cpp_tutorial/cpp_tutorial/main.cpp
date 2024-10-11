#include <iomanip> // for std::setw (which sets the width of the subsequent output)
#include <iostream>

double getDouble()
{
    double x {};
    std::cout << "Enter a double value: ";
    std::cin >> x;
    return x;
}

char getOperator()
{
    char c {};
    std::cout << "Enter +, -, *, or /: ";
    std::cin >> c;
    if (c == '+' || c == '-' || c == '*' || c== '/')
    {
        return c;
    } else
    {
        return 'a';
    }
}

double calculateResult(double x, double y, char c)
{
    if (c == '+')
    {
        return x + y;
    }
    else if (c == '-')
    {
        return x - y;
    }
    else if (c == '*')
    {
        return x * y;
    }
    else if (c == '/')
    {
        return x / y;
    }
    else
    {
        return 0.0;
    }
}

int main()
{
    double x { getDouble() };
    double y { getDouble() };
    char c { getOperator() };
    if (c == 'a')
    {
        std::cout << '\n';
    }
    else
    {
        std::cout << x << " " << c << " " << y << " is " << calculateResult(x, y, c) << '\n';
    }
    
    return 0;
}
