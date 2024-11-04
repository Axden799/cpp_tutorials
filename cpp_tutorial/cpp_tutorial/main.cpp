#include <iostream>

namespace MonsterType
{
    enum MonsterType {
        orc,
        goblin,
        troll,
        ogre,
        skeleton,
    };
}

int main()
{
    MonsterType::MonsterType monster { MonsterType::skeleton };
    if (monster == MonsterType::skeleton)
        std::cout << "I am a skeleton!\n";
    return 0;
}
