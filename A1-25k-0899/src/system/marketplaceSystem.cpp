#include "marketplaceSystem.h"
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