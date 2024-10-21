#include <iostream>

int main()
{
    int my_char {97};
    
    while (my_char <= 122)
    {
        std::cout << "Character: " << static_cast<char>(my_char) << " ASCII code: " << my_char << '\n';
        ++my_char;
    }

    return 0;
}
