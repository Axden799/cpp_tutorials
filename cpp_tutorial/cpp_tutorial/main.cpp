#include <iostream>

enum class MonsterType
{
   ogre,
    dragon,
    orc,
    spider,
    slime,
};

struct Monster
{
    MonsterType type{  };
    std::string name{};
    int health{};
};

void printMonster(Monster& monster)
{
    std::cout << "This ";
    switch (monster.type)
    {
        case MonsterType::ogre:
        {
            std::cout << "Ogre ";
            break;
        }
        case MonsterType::dragon:
            {
                std::cout << "Dragon ";
                break;
            }
        case MonsterType::orc:
            {
                std::cout << "Orc ";
                break;
            }
        case MonsterType::spider:
            {
                std::cout << "Spider ";
                break;
            }
        case MonsterType::slime:
        {
            std::cout << "Slime ";
            break;
        }
        default:
            break;
    }
    
    std::cout << "is named " << monster.name << " and has " << monster.health << " health.\n";
}

int main()
{
    Monster ogre{ MonsterType::ogre, "Torg", 145 };
    Monster slime{ MonsterType::slime, "Blurp", 23 };
    printMonster(ogre);
    printMonster(slime);

    return 0;
}
