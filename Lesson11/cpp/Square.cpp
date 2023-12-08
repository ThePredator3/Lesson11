#include <iostream>

#include "Square.hpp"

Square::Square(int lenghtSide)
{
    m_lenghtSide = lenghtSide;
}

void Square::SetArea()
{
    m_area = m_lenghtSide * m_lenghtSide;
}

void Square::SetPerimeter()
{
    m_perimeter = m_lenghtSide * 4;
}

void Square::GetArea()
{
    SetArea();
    
    std::cout << "area of the square: " << m_area << std::endl;
}

void Square::GetPerimeter()
{
    SetPerimeter();
    
    std::cout << "perimeter of the square: " << m_perimeter << std::endl;
}

void Square::GetInfo()
{
    SetArea();
    SetPerimeter();
    
    std::cout << "area of the square: " << m_area << std::endl;
    std::cout << "perimeter of the square: " << m_perimeter << std::endl;
}


