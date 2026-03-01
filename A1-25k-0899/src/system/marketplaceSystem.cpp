#include "marketplaceSystem.h"
MarketplaceSystem::MarketplaceSystem() : MAX_CAPACITY(20) { count = 0; region = "Pakistan"; isOpen = true; }
void MarketplaceSystem::addListing(Listing *l) { if(count < MAX_CAPACITY) allListings[count++] = l; }
void MarketplaceSystem::removeListing(int id) {
    for(int i = id-1; i < count-1; i++) allListings[i] = allListings[i+1];
    count--;
}
void MarketplaceSystem::showListings() { for(int i=0; i<count; i++) allListings[i]->display(); }
void MarketplaceSystem::searchByCity(string c) { cout << "Searching " << c << "..." << endl; }