#include <iostream>

int getNum()
{
    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;
    return x;
}

int main()
{
    int smaller{ getNum() };
    int larger{ getNum() };
    if (larger < smaller)
    {
        std::cout << "Swapping the values.\n";
        int temp { smaller };
        smaller = larger;
        larger = temp;
    }
    
    std::cout << "Smaller: " << smaller << " Larger: " << larger << '\n';
        
    return 0;
}
