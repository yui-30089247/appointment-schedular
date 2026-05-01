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

    cout << "What operations do you want to do?" << endl;
    cout << "Enter 1 for View Appointment" << endl;
    cout << "Enter 2 for Add Appointment" << endl;
    cout << "Enter 3 for Delete Appointment" << endl;
    cout << "Enter 4 for Edit Appointment" << endl;
    
    cin >> option;
    if (option == 2) {
        string title;
        string date;
        string locationName;
        string address;
        string startTime;
        string endTime;
        string memo;
        cout << "Title of the appointment: ";
        cin >> title;
        cout << "Date of the appointment: ";
        cin >> date;
        cout << "Start time of the appointment: ";
        cin >> startTime;
        cout << "End time of the appointment: ";
        cin >> endTime;
        cout << "Location of the appointment: ";
        cin >> locationName;
        cout << "Address of the appointment: ";
        cin >> address;
        cout << "Description of the appointment: ";
        cin >> memo;

        Date date1 = Date(2026, 5, 2);

        // Time time1 = Time(startTime, endTime);
    //     Location location1 = Location(locationName, address);
    //     Memo memo1 = Memo(memo);
    //     Appointment app1 = Appointment(title, date1, time1, location1, memo1);
    //     AppointmentManager am = AppointmentManager();
    //     am.addAppointment(app1);
    }
}