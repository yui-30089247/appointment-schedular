#ifndef APPOINTMENT_H
#define APPOINTMENT_H

#include <iostream>
#include <string>
#include <vector>
#include "Location.h"
#include "Memo.h"
#include "DateTime.h"

/**
 * This class creates, retrieve, change and delete appointments. 
 */

class Appointment {
    private:
        string title;
        DateTime dateTime;
        Location location;
        Memo memo;

    public:
        Appointment(string title, DateTime datetime, Location location, Memo memo);
        string getTitle() const;
        DateTime getDateTime() const;
        Location getLocation() const;
        Memo getMemo() const;

        void setTitle(string title);
        void setDateTime(DateTime datetime);
        void setMemo(Memo memo);
        void setLocation(Location location);
};

#endif