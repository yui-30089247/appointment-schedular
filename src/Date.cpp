#include "Date.h"
#include <string>
#include <iostream>
#include <stdexcept>

using namespace std;

Date::Date() {
    this->year = 1990;
    this->month = 1;
    this->day = 1;
};

Date::Date(int y, int m, int d) {
    this->year = y;
    this->month = m;
    this->day = d;
};

int Date::getYear() const {
    return this->year;
};

int Date::getMonth() const {
    return this->month;
};

int Date::getDay() const {
    return this->day;
};

void Date::setYear(int y) {
    this->year = y;
};

void Date::setMonth(int m) {
    this->month = m;
};

void Date::setDay(int d) {
    this->day = d;
};