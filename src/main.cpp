#include "Appointment.h"
#include "Time.h"
#include "Location.h"

int main() {
    Date date1 = Date("04/22/26");
    Time time1 = Time("10:00", "17:00");
    Location location1 = Location("Some restaurant", "Some address");
    Memo memo1 = Memo("The restaurant has a dress code");
    Appointment appointment = Appointment(date1, time1, location1, memo1);

    
}