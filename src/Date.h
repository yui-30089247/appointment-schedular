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
        int date;
    public:
        Date();
        // Date(string d);
        Date(int y, int m, int d);
        string getDate() const;
        void setDate(int y, int m, int d);
};

#endif