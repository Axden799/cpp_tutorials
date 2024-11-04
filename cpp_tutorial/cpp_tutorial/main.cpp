#include <iostream>
#include <string_view>

enum class Animal
{
    pig,
    chicken,
    goat,
    cat,
    dog,
    duck,
};

constexpr std::string_view getAnimalName(Animal animal)
{
    using enum Animal;
    switch (animal)
    {
        case pig: return "pig";
        case chicken: return "chicken";
        case goat: return "goat";
        case cat: return "cat";
        case dog: return "dog";
        case duck: return "duck";
        default: return "???";
    }
}

void printNumberOfLegs(Animal animal)
{
    std::string_view name { getAnimalName(animal) };
    int legs {};
    using enum Animal;
    switch (animal)
    {
        case chicken:
        case duck:
            legs = 2;
            break;
        case goat:
        case cat:
        case dog:
        case pig:
            legs = 4;
            break;
        default:
            std::cout << "???";
            break;
    }
    
    std::cout << "A " << name << " has " << legs << " legs.\n";
}

int main()
{
    Animal cat { Animal::cat };
    Animal chicken { Animal::chicken };
    
    printNumberOfLegs(cat);
    printNumberOfLegs(chicken);
    return 0;
}
