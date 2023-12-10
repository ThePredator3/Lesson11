#pragma once
#include"Figure.hpp"

class Rectangle : public Figure

{
public:
    Rectangle(int lenghtSideLonger, int lenghtSideShorter, const std::string figureName="Rectangle");

protected:
    void CalculateArea() override;
};
