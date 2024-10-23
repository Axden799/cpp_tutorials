#include <iostream>

template <typename T>
T max(T x, T y)
{
    return (x < y) ? y : x;
}

int main()
{

    std::cout << max<int>(1, 2) << '\n';
    std::cout << max<int>(4, 3) << '\n';
    std::cout << max<double>(1, 2) << '\n';
    
    return 0;
}
