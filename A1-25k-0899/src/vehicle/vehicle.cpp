#include "vehicle.h"
#include <ctime>

Vehicle::Vehicle() {
    brand = "Unknown";
    model = "Unknown";
    year = 2000;
    engineCC = 1000;
    fuelType = "Petrol";
    transmission = "Manual";
}

Vehicle::Vehicle(string b, string m, int y, int e, string f, string t) {
    brand = b;
    model = m;
    year = y;
    engineCC = e;
    fuelType = f;
    transmission = t;
}

Vehicle::Vehicle(const Vehicle& v) {
    brand = v.brand;
    model = v.model;
    year = v.year;
    engineCC = v.engineCC;
    fuelType = v.fuelType;
    transmission = v.transmission;
}

void Vehicle::displaySpecs() const {
    cout << brand << " " << model << " (" << year << ") "
         << engineCC << "cc " << fuelType << " " << transmission << endl;
}

bool Vehicle::matchesFilter(string b, int y) const {
    return (brand == b && year >= y);
}

int Vehicle::calculateAge() const {
    time_t t = time(0);
    tm* now = localtime(&t);
    return (now->tm_year + 1900) - year;
}

void Vehicle::updateSpecs(string f, string t) {
    fuelType = f;
    transmission = t;
}