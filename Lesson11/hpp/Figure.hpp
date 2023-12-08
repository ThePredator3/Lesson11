#pragma once

class Figure
{
protected:
    
    Figure() = default;
    Figure(int lenghtSide);
    
    virtual void GetArea();
    virtual void GetPerimeter();
    virtual void GetInfo();
    
    virtual void SetArea();
    virtual void SetPerimeter();
    
    int m_lenghtSide{1};
    int m_area{1};
    int m_perimeter{1};
    
    
//    Figure(int lenghtSideSquare);
//    Figure(int lenghtFirstSideTriangle, int lenghtSecondSideTriangle, int lenghtThirdSideTriangle);
    
//    void GetAreaSquare();
//    void GetPerimeterSquare();
//    void GetInfoSquare();
//
//    void GetAreaTriangle();
//    void GetPerimeterTriangle();
//    void GetInfoTriangle();
    
    // SQUARE
//    int m_lenghtSideSquare{ 1 };
    
//    int m_areaSquare{ 1 };
//    int m_perimeterSquare{ 1 };
    
//    void SetAreaSquare();
//    void SetPerimeterSquare();
    
    // TRIANGLE
//    int m_lenghtFirstSideTriangle{ 1 };
//    int m_lenghtSecondSideTriangle{ 1 };
//    int m_lenghtThirdSideTriangle{ 1 };
    
//    int m_areaTriangle{ 1 };
//    int m_perimeterTriangle{ 1 };
    
//    void SetAreaTriangle();
//    void SetPerimeterTriangle();
};
