#pragma once

#include "Rectangle.hpp"

class Square : public Rectangle
{
public:
//    Square(int lenghtSide) :
//        Rectangle(lenghtSide, lenghtSide, "Square") {};
    
    Square(int lenghtSide);
    
    /*void PrintInfo() override;*/
    void PrintInscribedCircleArea();

private:
    void CalculateInscribedCircleArea();
    
    int m_InscribedCircleArea{ -1 };
};
