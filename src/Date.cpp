#include "Date.h"

Date::Date() {

};

Date::Date(string d) {
    this->date = d;
};

string Date::getDate() const {
    return this->date;
};

void Date::setDate(string date) {
    this->date = date;
};