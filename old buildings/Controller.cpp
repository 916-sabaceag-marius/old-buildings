//
// Created by Marius on 4/23/2024.
//

#include <iostream>
#include "Controller.h"
#include "Block.h"
#include "House.h"

Controller::Controller() {

    data.push_back(new Block("Strada1", 1990, 100, 80));
    data.push_back(new Block("Strada4", 1880, 100, 2));
    data.push_back(new House("Strada2", 1900, "Vila", false));
    data.push_back(new House("Strada3", 1900, "Vila", true));
}




Controller::~Controller() {
    for(auto & i : data)
        delete i;
}

void Controller::AddBuilding(Building *building) {

    data.push_back(building);

}

vector<Building *> Controller::GetBuildings() {

    auto sortedData = data;

    sort(sortedData.begin(),sortedData.end(),[](Building* a, Building* b){
        return a->getYear() > b->getYear();
    });

    return sortedData;

}

vector<Building *> Controller::GetBuildingsToBeRestored() {

    vector<Building*> v;

    copy_if(data.begin(),data.end(),back_inserter(v),[](Building* b){
        return b->mustBeRestored();
    });

    return v;

}

vector<Building *> Controller::GetBuildingsToBeDemolished() {

    vector<Building*> v;

    copy_if(data.begin(),data.end(),back_inserter(v),[](Building* b){
        return b->canBeDemolished();
    });

    return v;
}

void Controller::WriteToFile(const string &filename, vector<Building *> v) {

    ofstream out(filename);

    for(auto & i : v){
        out<< i->toString()<<'\n';
    }

    out.close();

}


