//
// Created by Marius on 4/23/2024.
//

#ifndef OLD_BUILDINGS_UI_H
#define OLD_BUILDINGS_UI_H


#include "Controller.h"
#include <iostream>

using std::cin;
using std::cout;

class UI {

private:

    Controller controller;

    void AddBuilding();
    void AddBlock();
    void AddHouse();

    void PrintBuildings();
    void WriteToFile();

public:

    void Run();

};


#endif //OLD_BUILDINGS_UI_H
