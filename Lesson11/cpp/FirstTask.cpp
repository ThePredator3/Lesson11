#include <iostream>

#include "FirstTask.hpp"
#include "Figure.hpp"
#include "Square.hpp"
#include "Triangle.hpp"

void FirstTask()
{
    int sideSquare{ 0 };
    
    std::cout << "enter the length of the side of the square: ";
    std::cin >> sideSquare;
    
    int firstSideTriangle{0};
    int secondSideTriangle{0};
    int thirdSideTriangle{0};
    
    std::cout << "enter the length of the sides of the triangle: ";
    std::cin >> firstSideTriangle >> secondSideTriangle >> thirdSideTriangle;
    
    Square square(sideSquare);

    square.GetInfo();
    
    Triangle triangle(firstSideTriangle, secondSideTriangle, thirdSideTriangle);
    
    triangle.GetInfo();
    
    
//    //========================================
//    
//    Figure square(sideSquare);
//    
//    square.GetAreaSquare();
//    square.GetPerimeterSquare();
//    
//    //========================================
//
//    Figure triangle(firstSideTriangle, secondSideTriangle, thirdSideTriangle);
//    
//    triangle.GetAreaTriangle();
//    triangle.GetPerimeterTriangle();
    
//    std::cout << std::endl;
//    
//    std::cout << "area of the square = " << square.AreaSquare() << std::endl;
//    std::cout << "perimeter of the square = " << square.PerimeterSquare() << std::endl;
//    
//    std::cout << "area of the triangle = " << triangle.AreaTriangle() << std::endl;
//    std::cout << "perimeter of the triangle = " << triangle.PerimeterTriangle() << std::endl;
//    
//    std::cout << std::endl;
}
