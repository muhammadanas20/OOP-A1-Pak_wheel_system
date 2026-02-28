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
    const int MAX_MILEAGE; // Constant 5
public:
    CarSpecification();
    CarSpecification(int m, string c, bool a, bool i);
    void updateMileage(int m);
    void markInspected();
    void showInspectionReport() const;
    bool isReliable() const;
};
#endif