#ifndef SELLER_H
#define SELLER_H

#include "user.h"
#include "../listing/listing.h"

class Seller : public User {
private:
    double rating;
    Listing *listings[10];
    int listingCount;
    bool isDealer;
public:
    Seller(string, string, string, string);
    void login() override;
    void logout() override;
    void postAd(Listing *);
    void updateAd(const Listing&);
    void deleteAd(const Listing&);
    void viewMyAds();
};

#endif