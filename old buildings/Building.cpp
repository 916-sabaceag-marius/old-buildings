//
// Created by Marius on 4/23/2024.
//

#include "Building.h"

Building::Building() {
    address="";
    constructionYear=0;
}

Building::Building(const string& _address, int _constructionYear) {
    address = _address;
    constructionYear = _constructionYear;
}

string Building::toString() {

    return "Address: " + address + "; Year: " + to_string(constructionYear);
}

int Building::getYear(){
    return constructionYear;
}