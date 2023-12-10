#include <iostream>
#include <string>
#include "../Headers/Warrior.h"

Warrior::Warrior(int health, int damageDealt, const std::string& warriorType) :
    m_health(health),
    m_damageDealt(damageDealt),
    m_warriorType(warriorType)
{
    std::cout << m_warriorType << " created!" << std::endl;
}

void Warrior::PrintInfo()
{
    std::cout << "Type of warrior: " << m_warriorType << std::endl;
    std::cout << "Health of " << m_warriorType << " : " << m_health << std::endl;
    std::cout << "Damage dealt of " << m_warriorType << " : " << m_damageDealt << std::endl << std::endl;
}
