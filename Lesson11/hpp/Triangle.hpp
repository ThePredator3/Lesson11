#pragma once
#include "Figure.hpp"

class Triangle : public Figure
{
public:
    Triangle(int firstSide, int secondSide, int thirdSide);
    
    bool CheckExistence();
    
private:
    void CalculateArea() override;
//    bool CheckExistence();
};
