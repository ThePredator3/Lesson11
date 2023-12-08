#pragma once

#include "Figure.hpp"

class Triangle : public Figure
{
public:
    
    Triangle(int firstSide, int secondSide, int thirdSide);
    
    void GetArea() override;
    void GetPerimeter() override;
    void GetInfo() override;
    
private:
    int m_firstSide{1};
    int m_secondSide{1};
    int m_thirdSide{1};
    
    void SetArea() override;
    void SetPerimeter() override;
};
