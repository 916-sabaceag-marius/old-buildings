//
// Created by Marius on 4/23/2024.
//

#ifndef OLD_BUILDINGS_BUILDING_H
#define OLD_BUILDINGS_BUILDING_H

#include <string>

using std::string;
using std::to_string;

class Building {

protected:
    string address;
    int constructionYear;

public:

    Building();
    Building(const string& _address, int _constructionYear);

    virtual bool mustBeRestored() = 0;
    virtual bool canBeDemolished() = 0;

    string toString();

    virtual ~Building() = default;

    int getYear();
};


#endif //OLD_BUILDINGS_BUILDING_H
