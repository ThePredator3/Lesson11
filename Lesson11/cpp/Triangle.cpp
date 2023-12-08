#include <iostream>

#include "Triangle.hpp"

Triangle::Triangle(int firstSide, int secondSide, int thirdSide)
{
    m_firstSide = firstSide;
    m_secondSide = secondSide;
    m_thirdSide = thirdSide;
}

void Triangle::SetArea()
{
    m_area = 0;
}

void Triangle::SetPerimeter()
{
    m_perimeter = m_firstSide + m_secondSide + m_thirdSide;
}

void Triangle::GetArea()
{
    SetArea();
    
    std::cout << "area of the triangle: " << m_area << std::endl;
}

void Triangle::GetPerimeter()
{
    SetPerimeter();
    
    std::cout << "perimeter of the triangle: " << m_perimeter << std::endl;
}

void Triangle::GetInfo()
{
    SetArea();
    SetPerimeter();
    
    std::cout << "area of the triangle: " << m_area << std::endl;
    std::cout << "perimeter of the triangle: " << m_perimeter << std::endl;
}
