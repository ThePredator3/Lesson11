#include "RailwayCarriage.h"

class TankCar : public RailwayCarriage
{
public:
    TankCar(int weight, const std::string& hazardClass);

    void AddLiquid();

private:
    int m_liquidVolume{0};
    int m_liquidDensity{0};
};

