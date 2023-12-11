#pragma once
#include <vector>
#include <string>

class Figure
{
public:
    Figure(const std::vector<int>& sides, const std::string& figureName);

    virtual void PrintInfo();

protected:
    Figure() = default;
    virtual void CalculateArea() = 0; //hard to do universal way for each and every figure
    virtual void CalculatePerimeter(); //but perimeter - easy!

    std::vector<int> m_lenghtSides{}; //every figure has sides, right?

    int m_area{ -1 }; //not 1. 1 is valid square. I'd set -1 in case it hasn't been calculated yet.
    int m_perimeter{ -1 };

    std::string m_figureName{ "no figure" };
};
