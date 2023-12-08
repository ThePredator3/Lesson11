#pragma once
#include "Figure.hpp"

class Triangle : public Figure
{
public:
    Triangle(int firstSide, int secondSide, int thirdSide);

private:
    void CalculateArea() override;
};