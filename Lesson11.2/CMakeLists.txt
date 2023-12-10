cmake_minimum_required(VERSION 3.27)
project(Lesson11_2)

set(CMAKE_CXX_STANDARD 17)

add_executable(Lesson11_2 main.cpp
        "Resources/SecondTask.cpp"
        "Headers/SecondTask.h"
        Resources/RailwayCarriage.cpp
        Headers/RailwayCarriage.h
        Resources/Boxcar.cpp
        Headers/Boxcar.h
        Resources/TankCar.cpp
        Headers/TankCar.h
        Resources/DataEntryCheck.cpp
        Headers/DataEntryCheck.h)
