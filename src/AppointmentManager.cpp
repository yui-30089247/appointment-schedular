#include "AppointmentManager.h"
#include "Appointment.h"
#include <iostream>

using namespace std;

AppointmentManager::AppointmentManager() {

};

vector<Appointment> AppointmentManager::getAppointments() const {
    return this->appointments;
};

void AppointmentManager::addAppointment(Appointment appointment) {
    this->appointments.push_back(appointment);
};

void AppointmentManager::displayAppointments() const {
    cout << "----- Appointments -----" << endl;

    for (int i = 0; i < this->appointments.size(); i++) {
        Appointment app = this->appointments[i];
        cout << "Appointment " << (i + 1) << ": " << endl;
        cout << "Date: " << app.getDate().getDate() << endl;
        cout << "Time: " << app.getTime().getStartTime() << " - " << app.getTime().getEndTime() << endl;
        cout << "Location: " << app.getLocation().getName() << " - " << app.getLocation().getAddress() << endl;
        cout << "Memo: " << app.getMemo().getMemo();
        cout << "--------------------" << endl;
    }
}; 

void AppointmentManager::deleteAppointment(Appointment appointment) {
    cout << "Not implemented yet" << endl;
    /**
     * TODO:
     * To implement this function, I will need to iterate through all the apointments
     * and find a matching one and delete it from the list.
     */
}

void AppointmentManager::editAppointment(Appointment appointment) {
    cout << "Not implemented yet" << endl;
    /**
     * TODO:
     * To implement this function, I will need to find a matching appointment by looping all the appointments. 
     * I might need an unique ID for each appointment so that I can find by the ID (future implementation)
     */
}
