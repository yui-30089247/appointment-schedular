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
        string startTime;
        string endTime;
    public:
        Time();
        string getStartTime() const;
        string getEndTime() const;
        void setStartTime(string sTime);
        void setEndTime(string eTime);
};

#endif