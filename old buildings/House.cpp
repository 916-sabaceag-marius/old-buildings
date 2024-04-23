//
// Created by Marius on 4/23/2024.
//

#include "House.h"

House::House() : Building() {
    houseType = "";
    isHistorical = false;
}

House::House(const string &_address, int _constructionYear, const string &_houseType, bool _isHistorical)
: Building(_address, _constructionYear) {
    houseType = _houseType;
    isHistorical = _isHistorical;
}

bool House::mustBeRestored() {
    return 2024 - constructionYear > 100;
}

bool House::canBeDemolished() {
    return !isHistorical;
}
