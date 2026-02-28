#ifndef MARKETPLACESYSTEM_H
#define MARKETPLACESYSTEM_H

#include "Listing.h"

class MarketplaceSystem
{
private:
    Listing allListings[20];
    int count;
    const int MAX_CAPACITY = 20;

public:
    MarketplaceSystem();

    void updateListingPrice(int id, double newPrice);
    void deleteListing(int id);
    void searchByCity(string cityName);
    void addListing(Listing);
    void showListings();
};

#endif