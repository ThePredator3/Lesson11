#pragma once

#include "Rectangle.hpp"

class Square : public Rectangle
{
public:

    Square(int lenghtSide) :
        Rectangle(lenghtSide, lenghtSide) {};

private:

};