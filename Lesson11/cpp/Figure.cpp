#include <iostream>
#include <numeric>
#include "Figure.hpp"

Figure::Figure(const std::vector<int>& sides, const std::string& figureName) :
    m_lenghtSides(sides),
    m_figureName(figureName)
{
    std::cout << m_figureName << " created!" << std::endl;
}


void Figure::CalculatePerimeter()
{
    m_perimeter = std::accumulate(m_lenghtSides.begin(), m_lenghtSides.end(),
        decltype(m_lenghtSides)::value_type(0));
}

void Figure::PrintInfo()
{
    CalculatePerimeter();
    CalculateArea();

    std::cout << std::endl << "area of the " << m_figureName << ": " << m_area << std::endl;
    std::cout << "perimeter of the " << m_figureName << ": " << m_perimeter << std::endl << std::endl;
}
