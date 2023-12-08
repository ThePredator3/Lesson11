#include <iostream>

#include "Figure.hpp"

Figure::Figure(int lenghtSide)
{
    m_lenghtSide = lenghtSide;
}

void Figure::SetArea()
{
    m_area = m_lenghtSide * m_lenghtSide;
}

void Figure::SetPerimeter()
{
    m_perimeter = m_lenghtSide * 4;
}

void Figure::GetArea()
{
    SetArea();
    
    std::cout << "area of the square: " << m_area << std::endl;
}

void Figure::GetPerimeter()
{
    SetPerimeter();
    
    std::cout << "perimeter of the square: " << m_perimeter << std::endl;
}

void Figure::GetInfo()
{
    SetArea();
    SetPerimeter();
    
    std::cout << "area of the square: " << m_area << std::endl;
    std::cout << "perimeter of the square: " << m_perimeter << std::endl;
}

//Figure::Figure(int lenghtSideSquare)
//{
//    m_lenghtSideSquare = lenghtSideSquare;
//}
//
//Figure::Figure(int lenghtFirstSideTriangle, int lenghtSecondSideTriangle, int lenghtThirdSideTriangle)
//{
//    m_lenghtFirstSideTriangle = lenghtFirstSideTriangle;
//    m_lenghtSecondSideTriangle = lenghtSecondSideTriangle;
//    m_lenghtThirdSideTriangle = lenghtThirdSideTriangle;
//}
//
//// SQUARE
//
//void Figure::SetAreaSquare()
//{
//    m_areaSquare = m_lenghtSideSquare * m_lenghtSideSquare;
//}
//
//void Figure::SetPerimeterSquare()
//{
//    m_perimeterSquare = m_lenghtSideSquare * 4;
//}
//
//void Figure::GetAreaSquare()
//{
//    SetAreaSquare();
//    std::cout << "area of the square: " << m_areaSquare << std::endl;
//}
//
//void Figure::GetPerimeterSquare()
//{
//    SetPerimeterSquare();
//    std::cout << "perimeter of the square: " << m_perimeterSquare << std::endl;
//}
//
//void Figure::GetInfoSquare()
//{
//    SetAreaSquare();
//    SetPerimeterSquare();
//    std::cout << "area of the square: " << m_areaSquare << std::endl;
//    std::cout << "perimeter of the square: " << m_perimeterSquare << std::endl;
//}
//
//// TRIANGLE
//
//void Figure::SetAreaTriangle()
//{
//    m_areaTriangle = 0;
//}
//
//void Figure::SetPerimeterTriangle()
//{
//    m_perimeterTriangle = m_lenghtFirstSideTriangle + m_lenghtSecondSideTriangle + m_lenghtThirdSideTriangle;
//}
//
//void Figure::GetAreaTriangle()
//{
//    SetAreaTriangle();
//    std::cout << "area of the triangle: " << m_areaTriangle << std::endl;
//}
//
//void Figure::GetPerimeterTriangle()
//{
//    SetPerimeterTriangle();
//    std::cout << "perimeter of the triangle: " << m_perimeterTriangle << std::endl;
//}
//
//void Figure::GetInfoTriangle()
//{
//    SetAreaTriangle();
//    SetPerimeterTriangle();
//    std::cout << "area of the triangle: " << m_areaTriangle << std::endl;
//    std::cout << "perimeter of the triangle: " << m_perimeterTriangle << std::endl;
//}
