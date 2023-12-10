#include <iostream>

#include "../Headers/ThirdTask.h"
#include "../Headers/Archer.h"
#include "../Headers/Infantryman.h"
#include "../Headers/DataEntryCheck.h"

void ArcherTest()
{
    int health = 100;
    int damage = 10;

    Archer archer(health, damage);

    archer.PrintInfo();
}

void InfantrymanTest()
{
    int health = 120;
    int damage = 15;

    Infantryman infantryman(health, damage);

    infantryman.PrintInfo();
}

void ThirdTask()
{
    ArcherTest();
    InfantrymanTest();
}
