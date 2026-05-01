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
        string title;
        Date date;
        Location location;
        Time time;
        Memo memo;

    public:
        Appointment();
        Appointment(string title, Date date, Time time, Location location, Memo memo);
        string getTitle() const;
        Date getDate() const;
        Location getLocation() const;
        Time getTime() const;
        Memo getMemo() const;
        void setTitle(string title);
        void setDate(Date date);
        void setTime(Time time);
        void setMemo(Memo memo);
};

#endif