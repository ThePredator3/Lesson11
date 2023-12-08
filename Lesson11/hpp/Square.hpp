#pragma once

#include "Figure.hpp"

class Square : public Figure
{
public:
    
    Square(int lenghtSide);
    
    void GetArea() override;
    void GetPerimeter() override;
    void GetInfo() override;
    
private:
//    int m_lenghtSide{1};
//    int m_area{1};
//    int m_perimeter{1};
    
    void SetArea() override;
    void SetPerimeter() override;
    
};
