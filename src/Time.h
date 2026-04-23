#ifndef TIME_H
#define TIME_H

#include <iostream>
#include <string>

using namespace std;

/**
 * This class sets start time and end time of an appointment
 */

class Time {
    private:
        string startTime; // hh:mm
        string endTime;
    public:
        Time();
        Time(string start, string end);
        string getStartTime() const;
        string getEndTime() const;
        void setStartTime(string sTime);
        void setEndTime(string eTime);
};

#endif