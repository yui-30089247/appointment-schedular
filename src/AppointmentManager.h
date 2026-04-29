#ifndef APPOINTMENTMANAGER_H
#define APPOINTMENTMANAGER_H

#include <vector>
#include "Appointment.h"

class AppointmentManager {
    private:
        vector<Appointment> appointments;

    public:
        AppointmentManager();
        vector<Appointment> getAppointments() const;
        void addAppointment(Appointment appointment);
        void deleteAppointment(Appointment appointment);
        void displayAppointments() const; 
        void editAppointment(Appointment appointment);
};

#endif