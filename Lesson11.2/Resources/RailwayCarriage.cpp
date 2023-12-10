#include <iostream>
#include <string>

#include "../Headers/RailwayCarriage.h"

RailwayCarriage::RailwayCarriage(int weight, const std::string& hazardClass, const std::string& carName) :
    m_weight(weight),
    m_hazardClass(hazardClass),
    m_carName(carName)
{
    std::cout << std::endl << m_carName << " created!" << std::endl;
}

void RailwayCarriage::PrintInfo()
{
    std::cout << "weight of " << m_carName << ": " << m_weight << " tonn" << std::endl;
    std::cout << "hazard class of the cargo: " << m_hazardClass << std::endl << std::endl;
}

