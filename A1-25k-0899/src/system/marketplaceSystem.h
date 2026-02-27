#ifndef MARKETPLACESYSTEM_H
#define MARKETPLACESYSTEM_H

#include "Listing.h"

class MarketplaceSystem {
private:
    Listing allListings[20];
    int count;

public:
    MarketplaceSystem();
    void addListing(Listing);
    void showListings();
};

#endif