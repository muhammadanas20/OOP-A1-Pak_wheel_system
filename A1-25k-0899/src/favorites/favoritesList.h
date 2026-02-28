#ifndef FAVORITELIST_H
#define FAVORITELIST_H
#include "Listing.h"

class FavoriteList {
private:
    Listing* savedListings[20]; // Aggregation
    int count;
    const int MAX_FAVORITES;    // Constant 4
public:
    FavoriteList();
    FavoriteList(const FavoriteList& other);
    void addFavorite(Listing* l);
    void removeFavorite(int index);
    void viewFavorites() const;
    bool isEmpty() const;
};
#endif