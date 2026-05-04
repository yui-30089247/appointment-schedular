#include "Location.h"

Location::Location() {

};

Location::Location(string name, string address) {
    this->name = name;
    this->address = address;
};

string Location::getName() const {
    return this->name;
};

string Location::getAddress() const {
    return this->address;
};

void Location::setName(string name) {
    this->name = name;
};

void Location::setAddress(string address) {
    this->address = address;
};