#include <iostream>
#include <string>

#include "../Headers/Boxcar.h"
#include "../Headers/DataEntryCheck.h"

Boxcar::Boxcar(int weight, const std::string &hazardClass) :
    RailwayCarriage(weight, hazardClass, "Boxcar") {}

void Boxcar::AddBox()
{
    int boxCount{0};
    int boxWeight{0};

    std::cout << "enter the number of boxes and the weight of box: ";
    std::cin >> boxCount >> boxWeight;
    std::cout << std::endl;

    DataEntryCheck(boxCount);
    DataEntryCheck(boxWeight);

    m_boxCount = boxCount;
    m_boxWeight = boxWeight;

    m_weight += m_boxCount * m_boxWeight;
}
