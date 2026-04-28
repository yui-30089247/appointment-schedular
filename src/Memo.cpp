#include "Memo.h"

Memo::Memo() {
    this->description = "";
};

Memo::Memo(string desc) {
    this->description = desc;
};

string Memo::getMemo() const {
    return this->description;
};

void Memo::setMemo(string desc) {
    this->description = desc;
};