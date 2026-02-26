#include "Seller.h"

Seller::Seller(string id,string n,string p,string c)
    : User(id,n,p,c) {
    listingCount = 0;
}

void Seller::login(){ cout<<"Seller logged in\n"; }
void Seller::logout(){ cout<<"Seller logged out\n"; }

void Seller::postAd(Listing l){
    if(listingCount<10)
        listings[listingCount++] = l;
}

void Seller::viewMyAds(){
    for(int i=0;i<listingCount;i++)
        listings[i].display();
}