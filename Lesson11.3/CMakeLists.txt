cmake_minimum_required(VERSION 3.27)
project(Lesson11_3)

set(CMAKE_CXX_STANDARD 17)

add_executable(Lesson11_3 main.cpp
        Resources/Warrior.cpp
        Headers/Warrior.h
        Resources/Infantryman.cpp
        Headers/Infantryman.h
        Resources/Archer.cpp
        Headers/Archer.h
        Headers/DataEntryCheck.h
        Resources/DataEntryCheck.cpp
        Resources/ThirdTask.cpp
        Headers/ThirdTask.h)
