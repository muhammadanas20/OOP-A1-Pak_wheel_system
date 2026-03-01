#ifndef SELLER_H
#define SELLER_H

#include "user.h"
#include "../listing/listing.h"

class Seller : public User {
private:
    Listing *listings[10];
    int listingCount;

public:
    Seller(string, string, string, string);
    void login();
    void logout();
    void postAd(Listing *);
    void viewMyAds();
};

#endif