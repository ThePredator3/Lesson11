#include <iostream>
#include "string"

#include "../Headers/TankCar.h"
#include "../Headers/DataEntryCheck.h"

TankCar::TankCar(int weight, const std::string &hazardClass) :
    RailwayCarriage(weight, hazardClass, "TankCar") {}

void TankCar::AddLiquid()
{
    int liquidVolume{0};
    int liquidDensity{0};

    std::cout << "enter the volume and density of liquid: ";
    std::cin >> liquidVolume >> liquidDensity;
    std::cout << std::endl;

    DataEntryCheck(liquidVolume);
    DataEntryCheck(liquidDensity);

    m_liquidVolume = liquidVolume;
    m_liquidDensity = liquidDensity;

    m_weight += m_liquidVolume * m_liquidDensity;
}
