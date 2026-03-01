#include "buyer.h"

Buyer::Buyer(string id, string n, string p, string c)
    : User(id,n,p,c) {
    maxBudget = 0;
    inboxCount = 0;
}

void Buyer::login() { cout << "Buyer logged in\n"; }
void Buyer::logout() { cout << "Buyer logged out\n"; }

void Buyer::searchCar() {
    cout << "Searching listings based on buyer preferences...\n";
}

void Buyer::sendMessage() {
    if (inboxCount < 20) {
        inbox[inboxCount++] = Message(userId, "seller", "Interested in your listing");
        cout << "Message sent\n";
    } else {
        cout << "Inbox capacity reached\n";
    }
}

void Buyer::saveToFavorites(Listing* l) {
    favorites.addFavorite(l);
}

void Buyer::viewFavorites() {
    favorites.viewFavorites();
}