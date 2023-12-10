#include <iostream>

#include "Square.hpp"

Square::Square(int lenghtSide) :
    Rectangle(lenghtSide, lenghtSide, "Square") {};

void Square::CalculateInscribedCircleArea()
{
    m_InscribedCircleArea = 4 * sqrt(m_lenghtSides[0] / 2);
}

void Square::PrintInscribedCircleArea()
{
    CalculateInscribedCircleArea();
    
    std::cout << "area of the inscribed circle in a " << m_figureName << ": " << m_InscribedCircleArea << std::endl << std::endl;
}

//void Square::PrintInfo()
//{
//    CalculateArea();
//    CalculatePerimeter();
//    CalculateInscribedCircleArea();
//    
//    std::cout << std::endl << "area of the " << m_figureName << ": " << m_area << std::endl;
//    std::cout << "perimeter of the " << m_figureName << ": " << m_perimeter << std::endl;
//    std::cout << "area of the inscribed circle in a " << m_figureName << ": " << m_InscribedCircleArea << std::endl << std::endl;
//}


