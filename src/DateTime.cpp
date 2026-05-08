#include "DateTime.h"
#include <string>
#include <chrono>
#include <stdexcept>

using namespace std;
using namespace chrono;

DateTime::DateTime() = default;

// constructor: takes a string (YYYY-MM-DD HH:MM) and convert it to time_point
DateTime::DateTime(const string& dateTimeStr) {
    dateTime = parseDateTime(dateTimeStr);
}

// takes a string (YYYY-MM-DD HH:MM) and convert it to time_point
system_clock::time_point DateTime::parseDateTime(const string& dateTimeStr) {
    // initialize tm structure
    tm tm = {};

    // read from the input string
    istringstream ss(dateTimeStr);
    
    // parse the string into tm structure
    ss >> get_time(&tm, "%Y-%m-%d %H:%M");

    if (ss.fail()) {
        throw invalid_argument("Invalid datetime format");
    }

    // convert tm to time_t (epoch)
    return system_clock::from_time_t(mktime(&tm));
}

// get the epoch time
long long DateTime::toEpoch() const {
    // calculates the duration between the dateTime and the Unix epoch (1970/1/1)
    return duration_cast<seconds>(dateTime.time_since_epoch()).count();
}

bool DateTime::isFuture() const {
    return dateTime > system_clock::now();
}

bool DateTime::operator<(const DateTime& other) const {
    return dateTime < other.dateTime;
}

bool DateTime::operator==(const DateTime& other) const {
    return dateTime == other.dateTime;
}

// converts the time_point back to a formatted string
string DateTime::toString() const {
    // converts dateTime ->time_t 
    time_t time = system_clock::to_time_t(dateTime);
    ostringstream oss;
    oss << put_time(localtime(&time), "%Y-%m-%d %H:%M");
    return oss.str();
}