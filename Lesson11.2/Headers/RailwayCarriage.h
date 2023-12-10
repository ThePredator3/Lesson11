#pragma once

#include <string>

class RailwayCarriage
{
public:
    RailwayCarriage(int weight, const std::string& hazardClass, const std::string& carName = "car");

    virtual void PrintInfo();

protected:
    RailwayCarriage() = default;

    int m_weight{ 0 };
    std::string m_hazardClass{"hazard class not established"};
    std::string m_carName{"no name"};
};

