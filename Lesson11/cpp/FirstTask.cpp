#include <iostream>

#include "FirstTask.hpp"
#include "Figure.hpp"
#include "Square.hpp"
#include "Triangle.hpp"

void RectTest()
{
    int sideSquare1{ 0 }, sideSquare2{ 0 };
    std::cout << "enter the length of the side of the rectangle: ";
    std::cin >> sideSquare1 >> sideSquare2;

    Rectangle rect(sideSquare1, sideSquare2);

    rect.PrintInfo();
}

void TriangleTest()
{
    int firstSideTriangle{ 0 };
    int secondSideTriangle{ 0 };
    int thirdSideTriangle{ 0 };
    std::cout << "enter the length of the sides of the triangle: ";
    std::cin >> firstSideTriangle >> secondSideTriangle >> thirdSideTriangle;

    Triangle triangle(firstSideTriangle, secondSideTriangle, thirdSideTriangle);

    if (triangle.CheckExistence())
    {
        triangle.PrintInfo();
    }
    else
    {
        std::cout << std::endl << "triangle is not created!" << std::endl << std::endl;
    }
}

void SquareTest()
{
    int sideSquare{ 0 };
    std::cout << "enter the length of the side of the square: ";
    std::cin >> sideSquare;

    Square square(sideSquare);

    square.PrintInfo();
    square.PrintInscribedCircleArea();
}

void FirstTask()
{
    SquareTest();
    RectTest();
    TriangleTest();
}
