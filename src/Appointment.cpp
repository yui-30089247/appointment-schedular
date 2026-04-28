#include "Appointment.h"
#include <iostream>

using namespace std;

Appointment::Appointment() {

};

Appointment::Appointment(Date date, Time time, Location location, Memo memo) {
    // may not need this contructor
};

string Appointment::getName() const {
    return this->name;
};

Date Appointment::getDate() const {
    return this->date;
};

Location Appointment::getLocation() const {
    return this->location;
};

Time Appointment::getTime() const {
    return this->time;
};

Memo Appointment::getMemo() const {
    return this->memo;
};

void Appointment::setName(string name) {
    this->name = name;
};

void Appointment::setDate(Date date) {
    this->date = date;
};

void Appointment::setTime(Time time) {
    this->time = time;
};

void Appointment::setMemo(Memo memo) {
    this->memo = memo;
};