#include "DateTime.h"
#include "Location.h"
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
        string title, dateTimeStr, locationName, address, description;
        int year, month, day;

        cout << "Title of the appointment: ";
        cin >> title;
        cout << "Date and time of the appointment (formatL YYYY-MM-DD HH:MM): ";
        cin.ignore();
        getline(cin, dateTimeStr);
        cout << "Location of the appointment: ";
        cin >> locationName;
        cout << "Address of the appointment: ";
        cin >> address;
        cout << "Description of the appointment: ";
        cin >> description;

        DateTime dateTime = DateTime(dateTimeStr);
        Location location = Location(locationName, address);
        Memo memo = Memo(description);
        Appointment app = Appointment(title, dateTime, location, memo);
        appointmentManager.addAppointment(app);
    }

    return 0;
}