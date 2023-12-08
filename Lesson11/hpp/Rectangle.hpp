#pragma once
#include"Figure.h"

class Rectangle : public Figure

{
public:
    Rectangle(int lenghtSideLonger, int lenghtSideShorter, const std::string figureName="Rectangle");

private:

    void CalculateArea() override;
};
