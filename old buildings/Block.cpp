//
// Created by Marius on 4/23/2024.
//

#include "Block.h"

Block::Block() : Building() {
    totalApartments = 0;
    occupiedApartments = 0;
}

Block::Block(const string& _address, int _constructionYear, int _totalApartments, int _occupiedApartments)
: Building(_address,_constructionYear){
    totalApartments = _totalApartments;
    occupiedApartments = _occupiedApartments;
}


bool Block::mustBeRestored() {

    return 2024 - constructionYear > 40 && occupiedApartments*100 / totalApartments >= 80;

}

bool Block::canBeDemolished() {
    return occupiedApartments*100 / totalApartments < 5;
}
