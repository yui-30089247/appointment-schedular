#ifndef LOCATION_H
#define LOCATION_H

#include <iostream>
#include <string>

using namespace std;

/**
 * This class sets the name of the place that the appointment occurs and its address 
 */

class Location {
    private:
        string name;
        string address;

    public:
        string getName() const;
        string getAddress() const;
        void setName();
        void setAddress();
};
 #endif