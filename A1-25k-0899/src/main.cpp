#include "system/marketplaceSystem.h"
#include "user/seller.h"
#include "user/buyer.h"
#include "user/admin.h"

int main() {

    Vehicle v1("Toyota","Corolla",2020,1300,"Petrol","Auto");
    Vehicle v2("Honda","Civic",2019,1800,"Petrol","Manual");

    CarSpecification s1(30000,"Excellent",true,true);
    CarSpecification s2(45000,"Good",true,false);

    Listing l1(v1,s1,3500000,"Karachi");
    Listing l2(v2,s2,4200000,"Lahore");
    Listing l3(l1);
    l3.updatePrice(3400000);

    cout << "Total Listings Created: " << Listing::getTotalListings() << endl;

    Seller seller("S1","Ali","0300","Karachi");
    seller.login();
    seller.postAd(&l1);
    seller.postAd(&l2);
    seller.updateAd(l3);
    seller.viewMyAds();
    seller.deleteAd(l2);

    Admin admin;
    admin.login();
    admin.approveListing(l1);
    admin.approveListing(l2);
    admin.viewSystemStats();
    Admin::viewStats();
    admin.generateReport();

    MarketplaceSystem system;
    system.addListing(&l1);
    system.addListing(&l2);

    Buyer buyer("B1","Ahmed","0311","Lahore");
    buyer.login();
    buyer.searchCar();
    buyer.sendMessage();
    buyer.saveToFavorites(&l1);
    buyer.saveToFavorites(&l2);

    User* users[3] = {&seller, &buyer, &admin};
    for (int i = 0; i < 3; i++) {
        users[i]->viewProfile();
    }

    cout << "\n--- All Listings ---\n";
    system.showListings();

    cout << "\n--- Search by City (Karachi) ---\n";
    system.searchByCity("Karachi");

    system.removeListing(l2.getId());
    cout << "\n--- Listings After Removal ---\n";
    system.showListings();

    cout << "\n--- Buyer Favorites ---\n";
    buyer.viewFavorites();

    for (int i = 0; i < 3; i++) {
        users[i]->logout();
    }

    return 0;
}