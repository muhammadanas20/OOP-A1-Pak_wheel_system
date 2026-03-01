#ifndef BUYER_H
#define BUYER_H

#include "user.h"
#include "../listing/listing.h"
#include "../messaging/message.h"
#include "../favorites/favoritesList.h"

class Buyer : public User {
private:
    double maxBudget;
    Message inbox[20];
    int inboxCount;
    FavoriteList favorites;

public:
    Buyer(string, string, string, string);
    void login() override;
    void logout() override;
    void searchCar();
    void sendMessage();
    void saveToFavorites(Listing*);
    void viewFavorites();
};

#endif