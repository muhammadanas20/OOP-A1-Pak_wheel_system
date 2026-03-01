#include "buyer.h"

Buyer::Buyer(string id, string n, string p, string c)
    : User(id,n,p,c) {
    favCount = 0;
}

void Buyer::login() { cout << "Buyer logged in\n"; }
void Buyer::logout() { cout << "Buyer logged out\n"; }

void Buyer::saveToFavorites(Listing* l) {
    if (favCount < 10)
        favorites[favCount++] = l;
}

void Buyer::viewFavorites() {
    for (int i=0;i<favCount;i++)
        favorites[i]->display();
}