#pragma once

#include <string>

class Warrior
{
public:
    Warrior(int health, int damageDealt, const std::string& warriorType);

    virtual void PrintInfo();

protected:
    int m_health{-1};
    int m_damageDealt{-1}; // наносимый урон
//    int m_damageReceived{-1}; // полученный урон
    std::string m_warriorType{"Warrior"};
};

