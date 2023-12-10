#pragma once

#include <string>

#include "RailwayCarriage.h"

class Boxcar : public RailwayCarriage
{
public:
    Boxcar(int weight, const std::string& hazardClass);

    void AddBox();

private:
    int m_boxWeight{0};
    int m_boxCount{0};
};

