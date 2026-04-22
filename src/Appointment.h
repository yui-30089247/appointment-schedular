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
        vector<Appointment> appointments;
    public:
        Appointment getAppointments() const;
        void addAppointment(Appointment appointment);
        void displayAppointments(); 
};

#endif