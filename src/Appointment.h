#ifndef APPOINTMENT_H
#define APPOINTMENT_H

#include <iostream>
#include <string>
#include <vector>
#include "Date.h"
#include "Time.h"
#include "Location.h"
#include "Memo.h"

/**
 * This class creates, retrieve, change and delete appointments. 
 */

class Appointment {
    private:
        string name;
        Date date;
        Location location;
        Time time;
        Memo memo;

    public:
        Appointment();
        Appointment(Date date, Time time, Location location, Memo memo);
        string getName() const;
        Date getDate() const;
        Location getLocation() const;
        Time getTime() const;
        Memo getMemo() const;
        void setName(string name);
        void setDate(Date date);
        void setTime(Time time);
        void setMemo(Memo memo);
};

#endif