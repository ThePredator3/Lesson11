#include <iostream>

#include "Triangle.hpp"

Triangle::Triangle(int firstSide, int secondSide, int thirdSide) :
    Figure({ firstSide, secondSide, thirdSide }, "Triangle") {}

void Triangle::CalculateArea()
{
    CalculatePerimeter();
    auto halfPerimeter = m_perimeter / 2;
    m_area = sqrt(halfPerimeter *
        (halfPerimeter - m_lenghtSides[0]) *
        (halfPerimeter - m_lenghtSides[1]) *
        (halfPerimeter - m_lenghtSides[2])); // Herons Formula
}

bool Triangle::CheckExistence()
{
    if (m_lenghtSides[0] + m_lenghtSides[1] > m_lenghtSides[2] &&
        m_lenghtSides[0] + m_lenghtSides[2] > m_lenghtSides[1] &&
        m_lenghtSides[1] + m_lenghtSides[2] > m_lenghtSides[0])
    {
        return true;
    }
    else
    {
        return false;
    }
}
