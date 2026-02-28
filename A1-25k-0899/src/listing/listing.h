#ifndef LISTING_H
#define LISTING_H
#include "Vehicle.h"
#include "CarSpecification.h"

class Listing {
private:
    static int totalListings; // Static 2
    int listingId;
    Vehicle car;            // Composition
    CarSpecification specs; // Composition
    double price;
    string city;
    bool isApproved;
public:
    Listing();
    Listing(Vehicle v, CarSpecification s, double p, string c);
    Listing(const Listing& l);
    void publish();
    void expire();
    void display() const;
    void updatePrice(double p);
    static int getTotalListings(); // Static Function 2
};
#endif