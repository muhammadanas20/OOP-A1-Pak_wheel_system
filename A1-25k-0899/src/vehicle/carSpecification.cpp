#include "carSpecification.h"

CarSpecification::CarSpecification() : MAX_MILEAGE(500000) {
    mileage = 0;
    condition = "Good";
    accidentFree = true;
    inspected = false;
}

CarSpecification::CarSpecification(int m, string c, bool a, bool i)
    : MAX_MILEAGE(500000) {
    mileage = m;
    condition = c;
    accidentFree = a;
    inspected = i;
}

CarSpecification& CarSpecification::operator=(const CarSpecification& other) {
    if (this != &other) {
        mileage = other.mileage;
        condition = other.condition;
        accidentFree = other.accidentFree;
        inspected = other.inspected;
    }
    return *this;
}

bool CarSpecification::isReliable() const {
    return accidentFree && mileage < MAX_MILEAGE;
}

void CarSpecification::updateMileage(int m) {
    if (m < MAX_MILEAGE)
        mileage = m;
}

void CarSpecification::markInspected() {
    inspected = true;
}

void CarSpecification::showInspectionReport() const {
    cout << "Mileage: " << mileage
         << ", Condition: " << condition
         << ", Accident Free: " << accidentFree
         << ", Inspected: " << inspected << endl;
}