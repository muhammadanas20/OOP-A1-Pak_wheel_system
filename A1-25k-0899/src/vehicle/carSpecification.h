#ifndef CARSPECIFICATION_H
#define CARSPECIFICATION_H

#include <iostream>
using namespace std;

class CarSpecification {
private:
    int mileage;
    string condition;
    bool accidentFree;
    bool inspected;
    const int MAX_MILEAGE;

public:
    CarSpecification();
    CarSpecification(int, string, bool, bool);

    bool isReliable() const;
    void updateMileage(int);
    void markInspected();
    void showInspectionReport() const;
};

#endif