#include "Date.h"
#include "Time.h"
#include "Location.h"
#include "Time.h"
#include "Memo.h"
#include "Appointment.h"
#include "AppointmentManager.h"

#include <iostream>
#include <string>

using namespace std;

int main() {
    int option;
    AppointmentManager appointmentManager = AppointmentManager();

    cout << "Welcome to Appointment scheduler App!" << endl;
    AppointmentManager::displayMenu();
    cin >> option;

    if (option == 2) {
        string title, startTime, endTime, locationName, address, description;
        int year, month, day;

        cout << "Title of the appointment: ";
        cin >> title;
        cout << "Date of the appointment (year month date separated by a space): ";
        cin >> year >> month >> day;
        cout << "Start time of the appointment: ";
        cin >> startTime;
        cout << "End time of the appointment: ";
        cin >> endTime;
        cout << "Location of the appointment: ";
        cin >> locationName;
        cout << "Address of the appointment: ";
        cin >> address;
        cout << "Description of the appointment: ";
        cin >> description;

        Date date = Date(year, month, day);
        Time time = Time(startTime, endTime);
        Location location = Location(locationName, address);
        Memo memo = Memo(description);
        Appointment app = Appointment(title, date, time, location, memo);
        appointmentManager.addAppointment(app);
    }

    return 0;
}