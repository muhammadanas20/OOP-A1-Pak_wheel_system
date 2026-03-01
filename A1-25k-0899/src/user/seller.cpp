#include "seller.h"

Seller::Seller(string id,string n,string p,string c)
    : User(id,n,p,c) {
    listingCount = 0;
    rating = 0.0;
    isDealer = false;
}

void Seller::login(){ cout<<"Seller logged in\n"; }
void Seller::logout(){ cout<<"Seller logged out\n"; }

void Seller::postAd(Listing *l){
    if(listingCount<10)
        listings[listingCount++] = l;
}
void Seller::deleteAd(const Listing& l){
    for(int i=0; i<listingCount; i++){
        if(listings[i]->getId() == l.getId()){
            for(int j=i; j<listingCount-1; j++)
                listings[j] = listings[j+1];
            listingCount--;
            break;
        }
    }
}
void Seller::updateAd(const Listing& l){
    for(int i=0; i<listingCount; i++){
        if(listings[i]->getId() == l.getId()){
            *listings[i] = l;
            break;
        }
    }
}
void Seller::viewMyAds(){
    for(int i=0;i<listingCount;i++)
        listings[i]->display();
}