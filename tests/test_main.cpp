#include <iostream>
#include <cassert>
#include "../src/Appointment.h"
#include "../src/Date.h"
#include "../src/Time.h"
#include "../src/Location.h"
#include "../src/Memo.h"
#include "../src/AppointmentManager.h"
#include <cassert>
#include <iostream>

using namespace std;

void test_appointment_initialization() {
    // TODO: Create an Appointment and verify initial state
    Date date = Date(2025, 1, 1);
    Time time = Time("19:00", "21:00");
    Location location = Location("Some restaurant", "Some address");
    Memo memo = Memo("The restaurant has a dress code");
    Appointment appointment = Appointment("Dinner Party", date, time, location, memo);
    AppointmentManager appointmentManager = AppointmentManager();
    appointmentManager.addAppointment(appointment);

    assert(appointment.getTitle() == "Dinner Party");
    assert(appointment.getDate().getYear() == 2025);
    assert(appointment.getDate().getMonth() == 1);
    assert(appointment.getDate().getDay() == 1);
    assert(appointment.getTime().getStartTime() == "19:00");
    assert(appointment.getTime().getEndTime() == "21:00");
    assert(appointment.getLocation().getName() == "Some restaurant");
    assert(appointment.getLocation().getAddress() == "Some address");
    assert(appointment.getMemo().getDesciption() == "The restaurant has a dress code");

    cout << "Passed" << endl;
}

void test_add_appointment() {
    Date date = Date();
    date.setYear(2025);
    date.setMonth(5);
    date.setDay(30);
    Time time = Time("9:00", "10:00");
    Location location = Location("Bay Dentist", "San Francisco 123");
    Memo memo = Memo("Arrive 15 minutes before the appointment");
    Appointment appointment = Appointment();
    appointment.setTitle("Dentist");
    appointment.setDate(date);
    appointment.setTime(time);
    appointment.setLocation(location);
    AppointmentManager appointmentManager = AppointmentManager();
    appointmentManager.addAppointment(appointment);

    assert(appointmentManager.getNumAppointments() == 1);

    cout << "Passed" << endl;
}

void test_add_appointment_invalid_date() {
    try {
        Date invalidDate;
        invalidDate.setYear(2025);
        invalidDate.setMonth(20); // invalid month
        invalidDate.setDay(30);
    
        Appointment appointment;
        appointment.setDate(invalidDate);
    } catch (const invalid_argument& e) {
        assert(string(e.what()) == "Invalid month");
        cout << "Passed" << endl;
    }
    // Time time = Time("9:00", "10:00");
    // Location location = Location("Bay Dentist", "San Francisco 123");
    // Memo memo = Memo("Arrive 15 minutes before the appointment");
    // Appointment appointment = Appointment();
    // appointment.setTitle("Dentist");
    // appointment.setDate(date);
    // appointment.setTime(time);
    // appointment.setLocation(location);
    // AppointmentManager appointmentManager = AppointmentManager();
    // appointmentManager.addAppointment(appointment);
}

int main() {
    test_appointment_initialization();
    test_add_appointment();
    test_add_appointment_invalid_date();
}