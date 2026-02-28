#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
using namespace std;

class Vehicle {
private:
    string brand;
    string model;
    int year;
    int engineCC;
    string fuelType;
    string transmission;
    const int MIN_YEAR = 1886;

public:
    Vehicle();
    Vehicle(string, string, int, int, string, string);
    Vehicle(const Vehicle&);

    void displaySpecs() const;
    bool matchesFilter(string, int) const;
    int calculateAge() const;
    void updateSpecs(string, string);
};

#endif