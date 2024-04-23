//
// Created by Marius on 4/23/2024.
//

#ifndef OLD_BUILDINGS_CONTROLLER_H
#define OLD_BUILDINGS_CONTROLLER_H


#include "Building.h"
#include <vector>
#include <algorithm>
#include <fstream>

using std::sort;
using std::vector;
using std::copy_if;
using std::ofstream;

class Controller {

private:

    vector<Building*> data;

public:

    Controller();

    void AddBuilding(Building* building);

    vector<Building*> GetBuildings();
    vector<Building*> GetBuildingsToBeRestored();
    vector<Building*> GetBuildingsToBeDemolished();

    void WriteToFile(const string& filename, vector<Building*> v);

    ~Controller();

};


#endif //OLD_BUILDINGS_CONTROLLER_H
