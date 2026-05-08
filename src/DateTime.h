#include <chrono>
#include <string>
#include <stdexcept>
#include <iomanip>
#include <sstream>

using namespace std;
using namespace chrono;

class DateTime {
    private:
        system_clock::time_point dateTime; // represent a point in time, time_point is a data type
    
    public:
        // takes a string (YYYY-MM-DD HH:MM) and convert it to time_point
        DateTime(const string& dateTimeStr);
        static system_clock::time_point parseDateTime(const string& dateTimeStr);

        // returns the epoch time inseconds
        long long toEpoch() const;

        // checks if the dateTime is in the future
        bool isFuture() const;

        // compare two DateTime objects
        bool operator<(const DateTime& other) const;
        bool operator==(const DateTime& other) const;

        // converts the time_point back to a formatted string
        string toString() const;
};