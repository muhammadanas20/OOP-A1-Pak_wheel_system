#ifndef SELLER_H
#define SELLER_H
#include "listing.h"
class Seller{
    private:
    double rating;
    Listing *listings;
    bool isDealer;
    public:
    void postAd();
    void updateAd();
    void deleteAd();
    void viewMyAds();

};
#endif