#include <iostream>
#include <string>

#include "../Headers/SecondTask.h"
#include "../Headers/RailwayCarriage.h"
#include "../Headers/Boxcar.h"
#include "../Headers/TankCar.h"
#include "../Headers/DataEntryCheck.h"

void RailwayCarriageTest()
{
    int weight{ 0 };
    std::string hazardClass = "no result";

    std::cout << "enter the weight of the car: ";
    std::cin >> weight;
    DataEntryCheck(weight);

    std::cout << "enter the hazard class of the cargo: ";
    std::cin >> hazardClass;

    RailwayCarriage car(weight, hazardClass);

    car.PrintInfo();
}

void BoxcarTest()
{
    int weight{ 0 };
    std::string hazardClass = "no result";

    std::cout << "enter the weight of the Boxcar: ";
    std::cin >> weight;
    DataEntryCheck(weight);

    std::cout << "enter the hazard class of the cargo: ";
    std::cin >> hazardClass;

    Boxcar boxcar(weight, hazardClass);
    boxcar.AddBox();
    boxcar.PrintInfo();
}

void TankCarTest()
{
    int weight{ 0 };
    std::string hazardClass = "no result";

    std::cout << "enter the weight of the TankCar: ";
    std::cin >> weight;
    DataEntryCheck(weight);

    std::cout << "enter the hazard class of the cargo: ";
    std::cin >> hazardClass;

    TankCar tankCar(weight, hazardClass);
    tankCar.AddLiquid();
    tankCar.PrintInfo();
}

void SecondTask()
{
    RailwayCarriageTest();
    BoxcarTest();
    TankCarTest();
}