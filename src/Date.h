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
        string date; // here, I set the date type to string, but it might change after more planning
    public:
        Date();
        string getDate() const;
        void setDate(string date);
};

#endif