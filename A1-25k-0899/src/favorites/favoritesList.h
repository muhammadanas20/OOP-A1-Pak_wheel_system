#ifndef FAVORITELIST_H
#define FAVORITELIST_H

#include <iostream>
#include "Listing.h"

using namespace std;

class FavoriteList {
private:
    Listing* savedListings[20];   // Aggregation (weak relationship)
    int count;
    const int MAX_FAVORITES;      // constant data member

public:
    // Constructors
    FavoriteList();
    FavoriteList(const FavoriteList&);

    // Core Functions
    void addFavorite(Listing* listing);
    void removeFavorite(int index);
    void viewFavorites() const;
    bool isEmpty() const;

    // Getter
    int getCount() const;
};

#endif