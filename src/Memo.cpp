#include "Memo.h"

Memo::Memo() {
    this->description = "";
};

Memo::Memo(string desc) {
    this->description = desc;
};

string Memo::getDesciption() const {
    return this->description;
};

void Memo::setDescription(string desc) {
    this->description = desc;
};