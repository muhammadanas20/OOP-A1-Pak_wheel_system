#ifndef MARKETPLACESYSTEM_H
#define MARKETPLACESYSTEM_H
#include "Listing.h"

class MarketplaceSystem {
private:
    Listing *allListings[20]; // Array of Objects 1
    int count;
    const int MAX_CAPACITY;  // Constant 3
    string region;
    bool isOpen;
public:
    MarketplaceSystem();
    void addListing(Listing *l);
    void removeListing(int id);
    void showListings();
    void searchByCity(string c);
};
#endif