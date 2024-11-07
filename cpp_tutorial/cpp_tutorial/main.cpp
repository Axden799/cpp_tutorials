#include <iostream>
#include <string_view>

template <typename T>
struct Triad
{
    T first{};
    T second{};
    T third{};
};

// If using C++17, we need to provide a deduction guide (not required in C++20)
// A Triad with three arguments of the same type should deduce to a Triad<T>
template <typename T>
Triad(T, T, T) -> Triad<T>;

template<typename T>
void print(const Triad<T>& triad)
{
    std::cout << "[" << triad.first << ", " << triad.second << ", " << triad.third << "]";
}


int main()
{
    Triad t1{ 1, 2, 3 }; // note: uses CTAD to deduce template arguments
    print(t1);

    Triad t2{ 1.2, 3.4, 5.6 }; // note: uses CTAD to deduce template arguments
    print(t2);

    return 0;
}
