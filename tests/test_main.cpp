#include <iostream>
#include <cassert>
#include "Appointment.h"
#include "Date.h"
#include "Time.h"
#include "Location.h"
#include "Memo.h"

void test_appointment_initialization() {
    // TODO: Create an Appointment and verify initial state
    Date date1 = Date("04/22/26");
    Time time1 = Time("10:00", "17:00");
    Location location1 = Location("Some restaurant", "Some address");
    Memo memo1 = Memo("The restaurant has a dress code");
    Appointment appointment = Appointment(date1, time1, location1, memo1);

    // test if I can get a correct value for date, time, location and memo
}

int main() {
    test_appointment_initialization();
}