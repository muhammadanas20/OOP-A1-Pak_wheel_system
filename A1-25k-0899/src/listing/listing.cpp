#include "Listing.h"
int Listing::totalListings = 0;
Listing::Listing() { listingId = ++totalListings; price = 0; city = "Unknown"; isApproved = false; }
Listing::Listing(Vehicle v, CarSpecification s, double p, string c) : car(v), specs(s) {
    listingId = ++totalListings; price = p; city = c; isApproved = false;
}
Listing::Listing(const Listing& l) : car(l.car), specs(l.specs) {
    listingId = ++totalListings; price = l.price; city = l.city; isApproved = l.isApproved;
}
void Listing::publish() { isApproved = true; }
void Listing::expire() { isApproved = false; }
void Listing::display() const { car.displaySpecs(); specs.showInspectionReport(); cout << "Price: " << price << endl; }
void Listing::updatePrice(double p) { price = p; }
int Listing::getTotalListings() { return totalListings; }