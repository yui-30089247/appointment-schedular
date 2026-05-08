#include <iostream>
#include <cassert>
#include "../src/Appointment.h"
#include "../src/DateTime.h"
#include "../src/Location.h"
#include "../src/Memo.h"
#include "../src/AppointmentManager.h"
#include <cassert>
#include <iostream>

using namespace std;

void test_appointment_initialization() {
    DateTime dateTime = DateTime("2025-01-01 19:00");
    Location location = Location("Some restaurant", "Some address");
    Memo memo = Memo("The restaurant has a dress code");
    Appointment appointment = Appointment("Dinner Party", dateTime, location, memo);
    AppointmentManager appointmentManager = AppointmentManager();
    appointmentManager.addAppointment(appointment);

    assert(appointment.getTitle() == "Dinner Party");
    assert(appointment.getDateTime().toString() == "2025-01-01 19:00");
    assert(appointment.getLocation().getName() == "Some restaurant");
    assert(appointment.getLocation().getAddress() == "Some address");
    assert(appointment.getMemo().getDesciption() == "The restaurant has a dress code");

    cout << "Passed" << endl;
}

void test_add_appointment() {
    DateTime dateTime = DateTime("2025-05-30 09:00");
    Location location = Location("Bay Dentist", "San Francisco 123");
    Memo memo = Memo("Arrive 15 minutes before the appointment");
    Appointment appointment = Appointment();
    appointment.setTitle("Dentist");
    appointment.setDateTime(dateTime);
    appointment.setLocation(location);
    AppointmentManager appointmentManager = AppointmentManager();
    appointmentManager.addAppointment(appointment);

    assert(appointmentManager.getNumAppointments() == 1);

    cout << "Passed" << endl;
}

void test_add_appointment_invalid_date() {
    try {
        DateTime invalidDate = DateTime("2025-20-30 09:00"); // invalid month
        Appointment appointment;
        appointment.setDateTime(invalidDate);
    } catch (const invalid_argument& e) {
        assert(string(e.what()) == "Invalid month");
        cout << "Passed" << endl;
    }
}

int main() {
    test_appointment_initialization();
    test_add_appointment();
    test_add_appointment_invalid_date();
}