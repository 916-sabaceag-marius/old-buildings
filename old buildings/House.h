//
// Created by Marius on 4/23/2024.
//

#ifndef OLD_BUILDINGS_HOUSE_H
#define OLD_BUILDINGS_HOUSE_H


#include "Building.h"

class House : public Building{

private:
    string houseType;
    bool isHistorical;

public:

    House();
    House(const string &_address, int _constructionYear, const string &_houseType, bool _isHistorical);

    bool mustBeRestored() override;

    bool canBeDemolished() override;

    ~House() override = default;
};


#endif //OLD_BUILDINGS_HOUSE_H
