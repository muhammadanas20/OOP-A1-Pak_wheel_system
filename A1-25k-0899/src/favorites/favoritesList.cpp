#include "favoritesList.h"

FavoriteList::FavoriteList() : MAX_FAVORITES(20) {
    count = 0;
}

FavoriteList::FavoriteList(const FavoriteList& other)
    : MAX_FAVORITES(20) {
    count = other.count;
    for (int i = 0; i < count; i++) {
        savedListings[i] = other.savedListings[i];
    }
}

void FavoriteList::addFavorite(Listing* listing) {
    if (count < MAX_FAVORITES) {
        savedListings[count++] = listing;
        cout << "Listing added to favorites.\n";
    } else {
        cout << "Favorite list is full.\n";
    }
}

void FavoriteList::removeFavorite(int index) {
    if (index >= 0 && index < count) {
        for (int i = index; i < count - 1; i++) {
            savedListings[i] = savedListings[i + 1];
        }
        count--;
        cout << "Favorite removed.\n";
    } else {
        cout << "Invalid index.\n";
    }
}

void FavoriteList::viewFavorites() const {
    if (count == 0) {
        cout << "No favorites saved.\n";
        return;
    }

    for (int i = 0; i < count; i++) {
        cout << "\nFavorite #" << i + 1 << endl;
        savedListings[i]->display();
    }
}

bool FavoriteList::isEmpty() const {
    return (count == 0);
}

int FavoriteList::getCount() const {
    return count;
}