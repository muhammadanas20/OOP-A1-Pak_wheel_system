#include "MarketplaceSystem.h"
#include "Seller.h"
#include "Buyer.h"
#include "Admin.h"

int main() {

    Vehicle v1("Toyota","Corolla",2020,1300,"Petrol","Auto");
    CarSpecification s1(30000,"Excellent",true,true);
    Listing l1(v1,s1,3500000,"Karachi");

    Seller seller("S1","Ali","0300","Karachi");
    seller.login();
    seller.postAd(l1);

    Admin admin;
    admin.approveListing(l1);

    MarketplaceSystem system;
    system.addListing(l1);

    Buyer buyer("B1","Ahmed","0311","Lahore");
    buyer.login();
    buyer.saveToFavorites(&l1);

    system.showListings();
    buyer.viewFavorites();

    return 0;
}