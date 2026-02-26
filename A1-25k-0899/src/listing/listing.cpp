#include "Listing.h"
#include <iostream>
using namespace std;

int Listing::totalListings = 0;

Listing::Listing() {
    listingId = ++totalListings;
    price = 0;
    city = "Unknown";
    isApproved = false;
    isFeatured = false;
}

Listing::Listing(Vehicle v, CarSpecification s, double p, string c)
    : car(v), specs(s) {
    listingId = ++totalListings;
    price = p;
    city = c;
    isApproved = false;
    isFeatured = false;
}

Listing::Listing(const Listing& l)
    : car(l.car), specs(l.specs) {
    listingId = ++totalListings;
    price = l.price;
    city = l.city;
    isApproved = l.isApproved;
    isFeatured = l.isFeatured;
}

void Listing::publish() {
    isApproved = true;
}

void Listing::expire() {
    isApproved = false;
}

void Listing::markFeatured() {
    isFeatured = true;
}

bool Listing::isActive() const {
    return isApproved;
}

void Listing::display() const {
    car.displaySpecs();
    specs.showInspectionReport();
    cout << "Price: " << price << ", City: " << city << endl;
}

int Listing::getTotalListings() {
    return totalListings;
}