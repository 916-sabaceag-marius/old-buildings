cmake_minimum_required(VERSION 3.27)
project(old_buildings)

set(CMAKE_CXX_STANDARD 17)

add_executable(old_buildings main.cpp
        Building.cpp
        Building.h
        Block.cpp
        Block.h
        House.cpp
        House.h
        Controller.cpp
        Controller.h
        UI.cpp
        UI.h)
