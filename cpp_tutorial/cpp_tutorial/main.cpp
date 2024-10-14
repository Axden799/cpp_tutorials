#include <iostream>
#include <string>

std::string setPersonName(int num)
{
    std::cout << "Enter a name for person " << num << ": ";
    std::string str {};
    std::getline(std::cin >> std::ws, str);
    return str;
}

int setAge(std::string_view sv)
{
    std::cout << "Enter an age for " << sv << ": ";
    int age { };
    std::cin >> age;
    return age;
}

void printOlder(std::string_view name1, std::string_view name2, int age1, int age2)
{
    if (age1 > age2)
        std::cout << name1 << " (age " << age1 << ") is older than " << name2 << " (age " << age2 << ").\n";
    else
        std::cout << name2 << " (age " << age2 << ") is older than " << name1 << " (age " << age1 << ").\n";
}

int main()
{
    std::string person1 { setPersonName(1) };
    int age1 { setAge(person1) };
    std::string person2 { setPersonName(2) };
    int age2 { setAge(person2) };
    printOlder(person1, person2, age1, age2);
        
    return 0;
}
