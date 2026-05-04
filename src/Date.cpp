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

string Date::getDate() const {
    return to_string(this->year) + to_string(this->month) + to_string(this->day);
};

void Date::setDate(int y, int m, int d) {
    /**
     * TODO: I want to allow users to set future appointments. 
     * If the specified date is before current date, I want to throw an error
     */
    if (y < 1990) {
        throw invalid_argument("Invalid year");
    } else if (m < 1 || m > 12) {
        throw invalid_argument("Invalid year");
    } else if (d < 1 || d > 31) {
        throw invalid_argument("Invalid year");
    } else {
        this->year = y;
        this->month = m;
        this->day = d;
    }
};