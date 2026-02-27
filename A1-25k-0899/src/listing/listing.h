#ifndef LISTING_H
#define LISTING_H

#include "Vehicle.h"
#include "CarSpecification.h"

class Listing {
private:
    static int totalListings;
    int listingId;
    Vehicle car;
    CarSpecification specs;
    double price;
    string city;
    bool isApproved;
    bool isFeatured;

public:
    Listing();
    Listing(Vehicle, CarSpecification, double, string);
    Listing(const Listing&);
    Listing& operator=(const Listing&);

    void publish();
    void expire();
    void markFeatured();
    bool isActive() const;
    void display() const;

    static int getTotalListings();
};

#endif