#include "Time.h"

Time::Time() {

};

Time::Time(string start, string end) {
    this->startTime = start;
    this->endTime = end;
};

string Time::getStartTime() const {
    return this->startTime;
};

string Time::getEndTime() const {
    return this->endTime;
};

void Time::setStartTime(string sTime) {
    this->startTime = sTime;
};

void Time::setEndTime(string eTime) {
    this->endTime = eTime;
};