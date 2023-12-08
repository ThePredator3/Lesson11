#include "Rectangle.hpp"

Rectangle::Rectangle(int lenghtSideLonger, int lenghtSideShorter, const std::string figureName):
    Figure({ 
    lenghtSideLonger, 
    lenghtSideLonger, 
    lenghtSideShorter, 
    lenghtSideShorter 
        }, 
        figureName)
{
}

void Rectangle::CalculateArea()
{
    m_area = m_lenghtSides[0] * m_lenghtSides[3]; //this is not the string I proud of. But who cares?
}