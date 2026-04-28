#include "Appointment.h"
#include <iostream>

using namespace std;

Appointment::Appointment() {
    this->appointments = {};
};

Appointment::Appointment(Date date, Time time, Location location, Memo memo) {
    // may not need this contructor
};

vector<Appointment> Appointment::getAppointments() const {
    return this->appointments;
};

void Appointment::addAppointment(Appointment appointment) {
    this->appointments.push_back(appointment);
};

void Appointment::deleteAppointment(Appointment appointment) {
    // TODO: delete the appointment from the vector
    cout << "Not implemented yet" << endl;
};

void Appointment::displayAppointments() {
    // TODO: iterate through the appointments and display with the appointment information
    cout << "Not implemented yet" << endl;
}; 