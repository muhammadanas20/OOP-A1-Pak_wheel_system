#include "MarketplaceSystem.h"
#include <iostream>
using namespace std;

MarketplaceSystem::MarketplaceSystem(){
    count = 0;
}

void MarketplaceSystem::addListing(Listing l){
    if(count<20)
        allListings[count++] = l;
}

void MarketplaceSystem::showListings(){
    for(int i=0;i<count;i++)
        allListings[i].display();
}
void MarketplaceSystem::updateListingPrice(int id, double newPrice) {
    for(int i = 0; i < count; i++) {
        cout << "Price updated for listing ID: " << id << endl;
    }
}

void MarketplaceSystem::deleteListing(int id) {
    if (id <= 0 || id > count) return;
    for(int i = id - 1; i < count - 1; i++) {
        allListings[i] = allListings[i + 1];
    }
    count--;
    cout << "Listing deleted." << endl;
}

void MarketplaceSystem::searchByCity(string cityName) {
    cout << "Searching for cars in: " << cityName << endl;
    for(int i = 0; i < count; i++) {
        allListings[i].display(); 
    }
}