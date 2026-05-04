#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>

using namespace std;

/**
 * This class retrieves a date and modify an appointment's date. 
 */

class Date {
    private:
        // string date; // here, I set the date type to string (MM/DD/YY), but it might change after more planning
        int year;
        int month;
        int day;
    public:
        Date();
        // Date(string d);
        Date(int y, int m, int d);
        int getYear() const;
        int getMonth() const;
        int getDay() const;
        void setYear(int y);
        void setMonth(int m);
        void setDay(int d);
        // void setDate(int y, int m, int d);
};

#endif