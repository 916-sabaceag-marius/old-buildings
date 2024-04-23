//
// Created by Marius on 4/23/2024.
//

#ifndef OLD_BUILDINGS_BLOCK_H
#define OLD_BUILDINGS_BLOCK_H


#include "Building.h"

class Block : public Building {

private:
    int totalApartments;
    int occupiedApartments;

public:

    Block();
    Block(const string& _address, int _constructionYear, int _totalApartments, int _occupiedApartments);

    bool mustBeRestored() override;

    bool canBeDemolished() override;

    ~Block() override = default;
};


#endif //OLD_BUILDINGS_BLOCK_H
