#include "Appointment.h"
#include <iostream>

using namespace std;

Appointment::Appointment() {

};

Appointment::Appointment(string title, Date date, Time time, Location location, Memo memo) {
    this->title = title;
    this->date = date;
    this->time = time;
    this->location = location;
    this->memo = memo;
};

string Appointment::getTitle() const {
    return this->title;
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

void Appointment::setTitle(string title) {
    this->title = title;
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